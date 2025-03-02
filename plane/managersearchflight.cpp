#include "managersearchflight.h"
#include "ui_managersearchflight.h"
#include "manageraddflight.h"
#include "manageraftersearch.h"
#include "mainwindows.h"
#include<QSqlQuery>

managerSearchFlight::managerSearchFlight(QString managerName,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::managerSearchFlight)
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
    ui->pushButton->setFixedHeight(50);
    ui->pushButton->setFixedWidth(120);
    ui->toAddFlight_ui->setFixedHeight(50);
    ui->toAddFlight_ui->setFixedWidth(120);
    ui->flightNumber_lineEdit->setFixedHeight(40);
    ui->flightNumber_lineEdit->setFixedWidth(165);
}

managerSearchFlight::~managerSearchFlight()
{
    delete ui;
}

void managerSearchFlight::on_toAddFlight_ui_clicked()
{
    this->close();
    managerAddFlight* w=new managerAddFlight(managerName);
    // w->setGeometry(this->geometry());
    w->show();
}



void managerSearchFlight::on_toAfterFlightSearch_ui_clicked()
{
    if(ui->flightNumber_lineEdit->text().isEmpty())
    {
        QMessageBox::information(nullptr,"提示","请输入航班号");
        return;
    }
    QString flightNumber=ui->flightNumber_lineEdit->text();
    QSqlQuery sq;
    QString sql="SELECT * FROM flights WHERE flightNumber = :flightNumber";
    sq.prepare(sql);
    sq.bindValue(":flightNumber",flightNumber);
    sq.exec();
    if(sq.next())
    {
        this->close();
        managerAfterSearch* w=new managerAfterSearch(flightNumber,managerName);
        w->show();
    }
    else
    {
        QMessageBox::information(nullptr,"错误",QString("找不到航班号为%1的航班").arg(flightNumber));
    }
}


void managerSearchFlight::on_managerName_pushButton_clicked()
{
    ui->log_out_pushButton->setVisible(!ui->log_out_pushButton->isVisible());
}


void managerSearchFlight::on_log_out_pushButton_clicked()
{
    MainWindows *newwindows = new MainWindows();
    newwindows->show();
    this->close();
}

