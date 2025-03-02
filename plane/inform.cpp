#include "inform.h"
#include "ui_inform.h"

inform::inform(QString account,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inform)
{
    this->account=account;

    ui->setupUi(this);
    this->resize(500,600);
    QPixmap pixmap=QPixmap(":/img/informPicture.png").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    QSqlQuery ordlistSq;
    QString sql="SELECT * FROM orderlist WHERE account=:account AND (orderStatus=0 OR orderStatus=2) ORDER BY flightDate";
    ordlistSq.prepare(sql);
    ordlistSq.bindValue(":account",account);
    ordlistSq.exec();
    if(ordlistSq.next()==false) return;

    QDate date=ordlistSq.value("flightDate").toDate();
    int month=date.month();
    int day=date.day();
    QString flightNumber=ordlistSq.value("flightNumber").toString();
    QString passengerName=ordlistSq.value("passengerName").toString();

    QSqlQuery flightSq;
    sql="SELECT * FROM flights WHERE flightNumber=:flightNumber";
    flightSq.prepare(sql);
    flightSq.bindValue(":flightNumber",flightNumber);
    flightSq.exec();
    flightSq.next();

    int delayStatus=flightSq.value("delayStatus").toInt();
    QString flightstart=flightSq.value("flightstart").toString();
    QString flightend=flightSq.value("flightend").toString();
    QTime startTime=flightSq.value("flightTimeStart").toTime();
    int hour=startTime.hour();
    int minute=startTime.minute();

    int daycoming=-date.daysTo(QDate::currentDate());
    if(daycoming>0)
    {
        ui->flightComing_textBrowser->setText(QString("亲爱的旅客朋友，您好，您所购买的从%1到%2的%3航班，将于%4天后出行，乘机人为%5，祝旅途愉快，一路顺风。").arg(flightstart).arg(flightend)
                                                  .arg(flightNumber).arg(daycoming).arg(passengerName));
    }
    else if(daycoming==0)
    {
        ui->flightComing_textBrowser->setText(QString("亲爱的旅客朋友，您好，您所购买的从%1到%2的%3航班，将于今天%4时%5分出行，乘机人为%6，请您提前做好登机准备，祝旅途愉快，一路顺风。").arg(flightstart).arg(flightend)
                                                  .arg(flightNumber).arg(hour).arg(minute).arg(passengerName));
    }

    if(delayStatus==1)
    {
        ui->flightDelay_textBrowser->setText(QString("亲爱的旅客朋友，您好，您所购买的从%1到%2的%3航班延误到%4月%5日，%6点%7分，给您带来的不便深感抱歉，祝旅途愉快。").arg(flightstart).arg(flightend).arg(flightNumber)
                                                 .arg(month).arg(day).arg(hour).arg(minute));
    }

}

inform::~inform()
{
    delete ui;
}
