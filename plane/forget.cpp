#include "forget.h"
#include "ui_forget.h"

forget::forget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::forget)
{
    // connect(this,&forget::backToLogin,[=](){
    //     this->hide();
    //     // Login->show();
    // });
    ui->setupUi(this);
    this->setFixedHeight(800);
    this->setFixedWidth(1000);
    ui->omglbl->setFixedWidth(350);
    ui->upwidget->setFixedHeight(75);
    ui->upwidget->setFixedWidth(1000);
    ui->querenbtn->setFixedHeight(50);
    ui->querenbtn->setFixedWidth(130);
    ui->lowledt->setPlaceholderText("请输入新的不少于6位密码，且密码必须包含大写字母，小写字母，数字");
    ui->lowledt->setFixedWidth(400);
    ui->lowledt->setFixedHeight(30);
    ui->upledt->setFixedWidth(400);
    ui->upledt->setFixedHeight(30);
    connect(ui->querenbtn,&QPushButton::clicked,[=](){
        account = ui->upledt->text();
        password = ui->lowledt->text();
        bool AFlag=false,aFlag=false,numberFlag=false;
        for(int i=0;i<password.size();i++)
        {
            if(password[i]>='0'&&password[i]<='9') numberFlag=true;
            if(password[i]>='a'&&password[i]<='z') aFlag=true;
            if(password[i]>='A'&&password[i]<='Z') AFlag=true;
        }
        QSqlQuery query;
        QString sql = "SELECT * FROM users WHERE account = '" + account + "'";
        if (query.exec(sql)) {
            if(query.next()){
                ui->upledt->setStyleSheet("QLineEdit { border: 2px solid green; border-radius: 5px; color:black;}");
                if(password.size()<6)
                {
                    QMessageBox::information(nullptr,"密码强度过低","密码必须超过六位");
                    ui->lowledt->setStyleSheet("QLineEdit { border: 2px solid red; border-radius: 5px; color:black;}");
                }else if(!(numberFlag&&AFlag&&aFlag)){
                     QMessageBox::information(nullptr,"密码强度过低","密码必须包含大写字母，小写字母，数字");
                    ui->lowledt->setStyleSheet("QLineEdit { border: 2px solid red; border-radius: 5px; color:black;}");
                }else{
                    ui->lowledt->setStyleSheet("QLineEdit { border: 2px solid green; border-radius: 5px; color:black;}");
                    sql = "UPDATE users SET password = '" + password + "'  WHERE account = '" + account + "' ";
                    query.exec(sql);
                    QMessageBox msgBox;
                    msgBox.setWindowTitle("提示");
                    msgBox.setText("密码修改成功！点击返回登陆界面");
                    msgBox.setStandardButtons(QMessageBox::Ok);
                    msgBox.setIcon(QMessageBox::Information);

                    if (msgBox.exec() == QMessageBox::Ok) {
                        // 用户点击 OK 后，返回主界面
                        emit backToLogin();  // 发射返回主界面的信号
                }
                }
            } else {
                QMessageBox::warning(this, "警告", "未找到该手机号，请检查输入！", QMessageBox::Ok);
                ui->upledt->setStyleSheet("QLineEdit { border: 2px solid red; border-radius: 5px; color:black;  }");
            }
        } else {
            qDebug()<<"wrong";
        }
    });
}

forget::~forget()
{
    delete ui;
}

void forget::on_hombtn_clicked()
{
    emit backToLogin();
}

