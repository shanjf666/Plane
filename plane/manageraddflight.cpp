#include "manageraddflight.h"
#include "ui_manageraddflight.h"
#include "managersearchflight.h"
#include "mainwindows.h"
#include<QSqlQuery>
#include<QMessageBox>
managerAddFlight::managerAddFlight(QString managerName,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::managerAddFlight)
{
    this->managerName=managerName;

    ui->setupUi(this);
    ui->log_out_pushButton->setVisible(false);
    ui->managerName_pushButton->setText(managerName);
    this->resize(800,600);
    QPixmap pixmap=QPixmap(":/img/manager_background.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);
}

managerAddFlight::~managerAddFlight()
{
    delete ui;
}

void managerAddFlight::on_toAddFlight_ui_clicked()
{

}


void managerAddFlight::on_toSearchFlight_ui_clicked()
{
    this->close();
    managerSearchFlight* w=new managerSearchFlight(managerName);
    // w->setGeometry(this->geometry());
    w->show();
}


void managerAddFlight::on_pushButton_clicked()
{
    if (ui->flightNumber_lineEdit->text().isEmpty() ||
        ui->flightStart_lineEdit->text().isEmpty() ||
        ui->flightEnd_lineEdit->text().isEmpty() ||
        !ui->start_timeEdit->time().isValid() ||
        !ui->end_timeEdit->time().isValid() ||
        ui->chearMoney_lineEdit->text().isEmpty() ||
        ui->expensiveMoney_lineEdit->text().isEmpty() ||
        ui->cheapSeat_lineEdit->text().isEmpty() ||
        ui->expensiveSeat_lineEdit->text().isEmpty()) {
        QMessageBox::information(nullptr, "警告", "请完整填写航班信息");
        return;
    }
    QString flightNumber=ui->flightNumber_lineEdit->text();
    QString flightStart=ui->flightStart_lineEdit->text();
    QString flightEnd=ui->flightEnd_lineEdit->text();
    QString flightTimeStart=ui->start_timeEdit->time().toString("HH:mm:ss");
    QString flightTimeEnd=ui->end_timeEdit->time().toString("HH:mm:ss");
    bool ok;
    int cheapMoney = ui->chearMoney_lineEdit->text().toInt(&ok);
    if (!ok) {
        QMessageBox::critical(nullptr, "错误", "请输入有效的票价（经济舱）");
        return;
    }
    int expensiveMoney = ui->expensiveMoney_lineEdit->text().toInt(&ok);
    if (!ok) {
        QMessageBox::critical(nullptr, "错误", "请输入有效的票价（头等舱）");
        return;
    }
    int cheapRemain = ui->cheapSeat_lineEdit->text().toInt(&ok);
    if (!ok) {
        QMessageBox::critical(nullptr, "错误", "请输入有效的座位数量（经济舱）");
        return;
    }
    int expensiveRemain = ui->expensiveSeat_lineEdit->text().toInt(&ok);
    if (!ok) {
        QMessageBox::critical(nullptr, "错误", "请输入有效的座位数量（头等舱）");
        return;
    }

    QSqlQuery sq;
    QString sql = "INSERT INTO flights (flightNumber, flightstart, flightend, flightTimeStart, flightTimeEnd, flightcheapMoney, flightexpensiveMoney, cheaponeRemaining, expensiveoneRemaining, delayStatus) "
                  "VALUES(:flightNumber, :flightstart, :flightend, :flightTimeStart, :flightTimeEnd, :flightcheapMoney, :flightexpensiveMoney, :cheaponeRemaining, :expensiveoneRemaining, 0)";
    sq.prepare(sql);
    sq.bindValue(":flightNumber", flightNumber);
    sq.bindValue(":flightstart", flightStart);
    sq.bindValue(":flightend", flightEnd);
    sq.bindValue(":flightTimeStart", flightTimeStart);
    sq.bindValue(":flightTimeEnd", flightTimeEnd);
    sq.bindValue(":flightcheapMoney", cheapMoney);
    sq.bindValue(":flightexpensiveMoney", expensiveMoney);
    sq.bindValue(":cheaponeRemaining", cheapRemain);
    sq.bindValue(":expensiveoneRemaining", expensiveRemain);
    // if(sq.exec())
    // {
    //     QMessageBox::information(nullptr,"提示","添加航班成功");
    // }
    // else
    // {
    //     QMessageBox::information(nullptr,"提示",QString("已经存在航班号为%1的航班").arg(flightNumber));
    //     return;
    // }
    if (!sq.exec()) {
        qDebug() << "Error inserting into flights:" ;
        QMessageBox::critical(nullptr, "错误", "数据插入失败，请检查信息是否正确");
    } else {
        QMessageBox::information(nullptr, "成功", "航班信息已成功添加");
    }
    this->close();
    managerSearchFlight* w=new managerSearchFlight(managerName);
    w->show();
}


void managerAddFlight::on_managerName_pushButton_clicked()
{
    ui->log_out_pushButton->setVisible(!ui->log_out_pushButton->isVisible());
}


void managerAddFlight::on_log_out_pushButton_clicked()
{
    MainWindows *newwindows = new MainWindows();
    newwindows->show();
    this->close();
}

