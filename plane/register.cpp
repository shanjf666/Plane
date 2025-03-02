#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    this->resize(800,600);
    QPixmap pixmap=QPixmap(":/img/registerPicture.png").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);
    ui->account_lineEdit->setFixedHeight(35);
    ui->account_lineEdit->setFixedWidth(250);
    ui->nickName_lineEdit->setFixedHeight(35);
    ui->nickName_lineEdit->setFixedWidth(250);
    ui->password_lineEdit->setFixedHeight(35);
    ui->password_lineEdit->setFixedWidth(250);
    ui->password_lineEdit_again->setFixedHeight(35);
    ui->password_lineEdit_again->setFixedWidth(250);
    ui->widget_3->setFixedHeight(70);
    ui->label_5->setFixedWidth(320);
    ui->account_lineEdit->setPlaceholderText("账号（请输入手机号）");
    ui->nickName_lineEdit->setPlaceholderText("昵称");
    ui->password_lineEdit->setPlaceholderText("请输入6位以上包含数字、大小写英文的密码");
    ui->password_lineEdit_again->setPlaceholderText("确认密码");
}

Register::~Register()
{
    delete ui;
}

void Register::on_password_lineEdit_textChanged(const QString &arg1)
{
    if(arg1.size()==protectedPassword.size()) return;
    if(arg1.size()>protectedPassword.size())
    {
        protectedPassword.append('*');
        password.append(arg1.back());
    }
    else if(arg1.size()<protectedPassword.size())
    {
        protectedPassword.removeLast();
        password.removeLast();
    }
    ui->password_lineEdit->setText(protectedPassword);
}

void Register::on_password_lineEdit_again_textChanged(const QString &arg1)
{
    if(arg1.size()==protectedPasswordAgain.size()) return;
    if(arg1.size()>protectedPasswordAgain.size())
    {
        protectedPasswordAgain.append('*');
        passwordAgain.append(arg1.back());
    }
    else
    {
        protectedPasswordAgain.removeLast();
        passwordAgain.removeLast();
    }
    ui->password_lineEdit_again->setText(protectedPasswordAgain);
}

void Register::on_register_pushButton_clicked()
{
    if(ui->account_lineEdit->text().isEmpty()||ui->nickName_lineEdit->text().isEmpty()
        ||ui->password_lineEdit->text().isEmpty()||ui->password_lineEdit_again->text().isEmpty())
    {
        QMessageBox::information(nullptr,"提示","请完整填写信息");
        return;
    }
    QString account=ui->account_lineEdit->text();
    QString nickName=ui->nickName_lineEdit->text();

    if(account.size()!=11)
    {
        QMessageBox::information(nullptr,"提示","请填写正确的手机号码");
        return;
    }
    for(int i=0;i<11;i++)
    {
        if(!(account[i]>='0'&&account[i]<='9'))
        {
            QMessageBox::information(nullptr,"提示","请填写正确的手机号码");
            return;
        }
    }

    if(password!=passwordAgain)
    {
        QMessageBox::information(nullptr,"提示","前后密码不一致");
        return;
    }

    if(password.size()<6)
    {
        QMessageBox::information(nullptr,"密码强度过低","密码必须超过六位");
        return;
    }

    bool AFlag=false,aFlag=false,numberFlag=false;
    for(int i=0;i<password.size();i++)
    {
        if(password[i]>='0'&&password[i]<='9') numberFlag=true;
        if(password[i]>='a'&&password[i]<='z') aFlag=true;
        if(password[i]>='A'&&password[i]<='Z') AFlag=true;
    }

    if(!(numberFlag&&AFlag&&aFlag))
    {
        QMessageBox::information(nullptr,"密码强度过低","密码必须包含大写字母，小写字母，数字");
        return;
    }

    QSqlQuery sq;
    QString sql="INSERT INTO users "
                  "VALUES(:account,:password,:nickName,0)";
    sq.prepare(sql);
    sq.bindValue(":account",account);
    sq.bindValue(":password",password);
    sq.bindValue(":nickName",nickName);
    if(sq.exec())
    {
        QMessageBox::information(nullptr,"欢迎","注册成功");
        this->close();
    }
    else
    {
        QMessageBox::information(nullptr,"提示",QString("已存在手机号为%1的用户").arg(account));
    }
}


