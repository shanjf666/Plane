#include "manageraftersearch.h"
#include "ui_manageraftersearch.h"
#include "managersearchflight.h"
#include "manageraddflight.h"
managerAfterSearch::managerAfterSearch(QString flightNumber,QString managerName,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::managerAfterSearch)
{
    this->flightNumber=flightNumber;
    this->managerName=managerName;

    ui->setupUi(this);
    this->resize(800,600);
    QPixmap pixmap=QPixmap(":/img/manager_background.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    QSqlQuery sq;
    QString sql="SELECT * FROM flights WHERE flightNumber=:flightNumber";
    sq.prepare(sql);
    sq.bindValue(":flightNumber",flightNumber);
    sq.exec();


    QString flightstart;
    QString flightend;
    QTime flightTimeStart;
    QTime flightTimeEnd;
    int flightcheapMoney;
    int flightexpensiveMoney;
    int cheaponeRemain;
    int expensiveRemain;

    if(sq.next())
    {
    flightstart=sq.value("flightstart").toString();
    flightend=sq.value("flightend").toString();
    flightTimeStart=sq.value("flightTimeStart").toTime();
    flightTimeEnd=sq.value("flightTimeEnd").toTime();
    flightcheapMoney=sq.value("flightcheapMoney").toInt();
    flightexpensiveMoney=sq.value("flightexpensiveMoney").toInt();
    cheaponeRemain=sq.value("cheaponeRemaining").toInt();
    expensiveRemain=sq.value("expensiveoneRemaining").toInt();

    ui->flightNumber_label->setText(flightNumber);
    ui->start_label->setText(flightstart);
    ui->end_label->setText(flightend);
    ui->flightStart_timeEdit->setTime(flightTimeStart);
    ui->flightEnd_timeEdit->setTime(flightTimeEnd);
    ui->chearMoney_lineEdit->setText(QString("%1").arg(flightcheapMoney));
    ui->expensiveMoney_lineEdit->setText(QString("%1").arg(flightexpensiveMoney));
    ui->cheapSeat_lineEdit->setText(QString("%1").arg(cheaponeRemain));
    ui->expensiveSeat_lineEdit->setText(QString("%1").arg(expensiveRemain));
    }

}

managerAfterSearch::~managerAfterSearch()
{
    delete ui;
}

void managerAfterSearch::on_returnSearch_ui_pushButton_clicked()
{
    this->close();
    managerSearchFlight* w=new managerSearchFlight(managerName);
    w->show();
}


void managerAfterSearch::on_flightDelete_pushButton_clicked()
{
    QSqlQuery sq;
    QString sql="DELETE FROM flights WHERE flightNumber=:flightNumber";
    sq.prepare(sql);
    sq.bindValue(":flightNumber",flightNumber);
    sq.exec();

    QMessageBox::information(nullptr,"提示","航班删除成功");

    this->close();
    managerSearchFlight* w=new managerSearchFlight(managerName);
    w->show();
}


void managerAfterSearch::on_flightAlter_pushButton_clicked()
{
    QTime newflightTimeStart=ui->flightStart_timeEdit->time();
    QTime newflightTimeEnd=ui->flightEnd_timeEdit->time();
    int newcheapMoney=ui->chearMoney_lineEdit->text().toInt();
    int newexpensiveMoney=ui->expensiveMoney_lineEdit->text().toInt();
    int newcheaponeRemain=ui->cheapSeat_lineEdit->text().toInt();
    int newexpensiveoneRemain=ui->expensiveSeat_lineEdit->text().toInt();

    QSqlQuery sq;
    QString sql="SELECT flightTimeStart FROM flights WHERE flightNumber=:flightNumber";
    sq.prepare(sql);
    sq.bindValue(":flightNumber",flightNumber);
    sq.exec();

    while(sq.next())
    {
        if(sq.value("flightTimeStart").toTime()!=newflightTimeStart)
        {
            QSqlQuery sq_1;
            QString sql_1="UPDATE flights SET delayStatus=1 WHERE flightNumber=:flightNumber";
            sq_1.prepare(sql_1);
            sq_1.bindValue(":flightNumber",flightNumber);
            sq_1.exec();
        }
    }

    QSqlQuery updateSq;
    QString updateSql="UPDATE flights SET flightTimeStart=:newflightTimeStart,flightTimeEnd=:newflightTimeEnd,flightcheapMoney=:newcheapMoney,"
                        "flightexpensiveMoney=:newexpensiveMoney,cheaponeRemaining=:newcheaponeRemain,"
                        "expensiveoneRemaining=:newexpensiveoneRemain WHERE flightNumber=:flightNumber";
    updateSq.prepare(updateSql);
    updateSq.bindValue(":flightNumber",flightNumber);
    updateSq.bindValue(":newflightTimeStart",newflightTimeStart);
    updateSq.bindValue(":newflightTimeEnd",newflightTimeEnd);
    updateSq.bindValue(":newcheapMoney",newcheapMoney);
    updateSq.bindValue(":newexpensiveMoney",newexpensiveMoney);
    updateSq.bindValue(":newcheaponeRemain",newcheaponeRemain);
    updateSq.bindValue(":newexpensiveoneRemain",newexpensiveoneRemain);
    updateSq.exec();

    QMessageBox::information(nullptr,"提示","航班修改成功");

    this->close();
    managerSearchFlight* w=new managerSearchFlight(managerName);
    w->show();
}


void managerAfterSearch::on_toAddFlight_ui_clicked()
{
    this->close();
    managerAddFlight* w=new managerAddFlight(managerName);
    // w->setGeometry(this->geometry());
    w->show();
}

