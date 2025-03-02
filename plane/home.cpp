#include "home.h"
#include "qsqlerror.h"
#include "ui_home.h"

Home::Home(QWidget *parent, QString account)
    : QMainWindow(parent),account(account)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    // QMovie *mo = new QMovie(":img/R-C.gif");
    // ui->bjlbl->setMovie(mo);
    ui->widget_3->setFixedHeight(75);
    ui->widget_3->setContentsMargins(0,0,0,0);
    ui->widget_3->setFixedWidth(1000);
    ui->Mainimglabel->setFixedHeight(77);
    ui->widget_6->setFixedHeight(75);
    ui->widget->setFixedHeight(125);
    ui->imglbl->setFixedHeight(25);
    ui->imglbl->setFixedWidth(25);
    ui->toolButton->setFixedWidth(200);
    ui->Selectbtn->setFixedWidth(150);
    ui->Changebtn->setFixedWidth(150);
    ui->Mainimglabel->setFixedWidth(300);
    ui->Frombox->setFixedWidth(180);
    ui->Frombox->setFixedHeight(40);
    ui->Tobox->setFixedWidth(180);
    ui->Tobox->setFixedHeight(40);
    ui->fromlbl->setFixedHeight(10);
    ui->tolbl->setFixedHeight(10);
    ui->dateEdit->setFixedWidth(150);
    ui->dateEdit->setFixedHeight(40);
    ui->datelbl->setFixedHeight(10);
    ui->Searchbtn->setFixedHeight(40);
    ui->Searchbtn->setFixedWidth(100);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setDisplayFormat("yyyy.MM.dd");
    // 获取当前日期
    QDate currentDate = QDate::currentDate();
    QDateTime currentDateTime = QDateTime::currentDateTime();
    qDebug() << "当前日期和时间: " << currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    // 更新orderlist表，基于orderlist表的flightDate和flights表的flightTimeStart
    QString sqlQuery =
        "UPDATE orderlist "
        "SET orderStatus = '1' "
        "WHERE orderStatus != '3' AND flightDate < :currentDate OR "
        "(flightDate = :currentDate AND flightNumber IN ("
        "SELECT flightNumber FROM flights WHERE flightTimeStart < :currentTime"
        "))";

    QSqlQuery query;
    query.prepare(sqlQuery);
    query.bindValue(":currentDate", currentDate.toString("yyyy-MM-dd"));  // 绑定当前日期
    query.bindValue(":currentTime", currentDateTime.toString("hh:mm:ss"));  // 绑定当前时间

    if (!query.exec()) {
        qDebug() << "更新订单状态失败:" << query.lastError().text();
    } else {
        qDebug() << "订单状态更新成功, 影响行数:" << query.numRowsAffected();
    }
    QSqlQuery sq;
    QString sql="select * from flights";
    sq.prepare(sql);
    sq.exec();
    QMap<QString,int> hash;

    while(sq.next())
    {
        hash[sq.value("flightstart").toString()]++;
        hash[sq.value("flightend").toString()]++;
    }

    for(auto i=hash.begin();i!=hash.end();i++)
    {
        ui->Frombox->addItem(i.key());
        ui->Tobox->addItem(i.key());
    }
    // ui->dateEdit->setCalendarPopup(true);  // 启用日历弹出

    // // 设置样式表
    // ui->dateEdit->setStyleSheet(
    //     // QDateEdit 样式
    //     "QDateEdit {"
    //     "border: 1px solid #4CAF50;"  // 设置边框为绿色
    //     "border-radius: 8px;"          // 圆角
    //     "padding: 5px;"
    //     "color: #333333;"              // 字体颜色为深灰色
    //     "background-color: #FFFFFF;"   // 背景颜色为白色
    //     "font-family: 'Arial';"        // 设置字体
    //     "font-size: 14px;"             // 字体大小
    //     "selection-background-color: #4CAF50;"  // 选中文本背景色
    //     "}"

    //     // 下拉按钮中的箭头图标
    //     "QDateEdit::down-arrow {"
    //     "image: url(:/img/down.jpg);"      // 自定义箭头图标
    //     "border: none;"
    //     "width: 12px;"
    //     "height: 12px;"
    //     "}"

    //     // 日历弹出的样式
    //     "QDateEdit::calendar-popup {"
    //     "border: 1px solid #4CAF50;"   // 日历弹出框边框
    //     "background-color: #FFFFFF;"   // 日历背景色
    //     "border-radius: 8px;"          // 圆角
    //     "}"

    //     // 日历控件的样式
    //     "QCalendarWidget {"
    //     "background-color: #FFFFFF;"   // 日历背景色
    //     "border: 1px solid #4CAF50;"   // 日历的边框颜色
    //     "font-family: 'Arial';"         // 字体
    //     "font-size: 12px;"              // 字体大小
    //     "selection-background-color: #4CAF50;" // 选中日期的背景色
    //     "}"

    //     // 日历日期的文本颜色和背景色
    //     "QCalendarWidget QAbstractItemView:enabled {"
    //     "color: #333333;"              // 日期文本颜色
    //     "background-color: #f0f0f0;"   // 默认日期背景色
    //     "selection-background-color: #4CAF50;"  // 选中日期的背景色
    //     "selection-color: white;"      // 选中日期文本的颜色
    //     "}"

    //     // 鼠标悬停时日期的效果
    //     "QCalendarWidget QAbstractItemView::item:hover {"
    //     "background-color: #A5D6A7;"   // 鼠标悬停时的背景色
    //     "}"

    //     // 日历按钮的样式（前后月份按钮）
    //     "QCalendarWidget QToolButton {"
    //     "background-color: #FFFFFF;"  // 按钮背景色
    //     "border: 1px solid #4CAF50;"  // 按钮边框
    //     "height: 32px;"
    //     "width: 60px;"                 // 设置宽度和高度一致，使其为圆形按钮
    //     "border-radius: 16px;"         // 圆形按钮
    //     "}"

    //     // 鼠标悬停时按钮的背景色
    //     "QCalendarWidget QToolButton:hover {"
    //     "background-color: #4CAF50;"  // 悬停时背景色
    //     "color: white;"               // 悬停时文字颜色
    //     "}"

    //     // 日历月视图切换按钮（如上一月、下一月）
    //     // "QCalendarWidget QToolButton::menu-indicator {"
    //     // "image: url(:/icons/menu-indicator.png);"
    //     // "subcontrol-position: right center;"  // 调整菜单指示器的位置
    //     // "}"

    //     // 关闭按钮（关闭日历弹出框的按钮）
    //     "QCalendarWidget QToolButton::close {"
    //     "image: url(:/icons/close-icon.png);"
    //     "background-color: transparent;" // 背景透明
    //     "border: none;"                  // 去掉边框
    //     "}"

    //     // 星期几按钮的样式（设置加粗和背景颜色）
    //     "QCalendarWidget QToolButton::menu-indicator, "
    //     "QCalendarWidget QToolButton {"
    //     "font-weight: bold;"            // 设置星期几字体加粗
    //     "color: #FFFFFF;"               // 设置字体颜色为白色
    //     "background-color: #4CAF50;"    // 背景颜色为绿色
    //     "border: none;"                 // 去掉边框
    //     "border-radius: 5px;"           // 设置圆角
    //     "}"

    //     // 设置星期按钮的背景色和鼠标悬停效果
    //     "QCalendarWidget QToolButton:hover {"
    //     "background-color: #388E3C;"     // 鼠标悬停时的按钮背景色
    //     "color: white;"                  // 悬停时字体颜色
    //     "}"

    //     // 日期按钮的鼠标悬停效果
    //     "QCalendarWidget QAbstractItemView::item:hover {"
    //     "background-color: #A5D6A7;"    // 鼠标悬停时的背景色
    //     "}"
    //     );
    QMovie *movie = new QMovie(":/img/R-C.gif");
    ui->mlabel1->setMovie(movie);
    movie->start();
    QMovie *movie1 = new QMovie(":/img/canton.gif");
    ui->mlabel2->setMovie(movie1);
    movie1->start();
    QMovie *movie2 = new QMovie(":/img/shanghai.gif");
    ui->mlabel3->setMovie(movie2);
    movie2->start();
}

Home::~Home()
{
    delete ui;
}

void Home::on_Personbtn_clicked()
{
    emit onperson();
}

void Home::on_Searchbtn_clicked()
{
    QString fromCity = ui->Frombox->currentText();
    QString toCity = ui->Tobox->currentText();
    QString flightDate = ui->dateEdit->date().toString("yyyy-MM-dd");
    emit buyticket(fromCity,toCity,flightDate,account,0);
}


void Home::on_Selectbtn_clicked()
{
    QString fromCity = ui->Frombox->currentText();
    QString toCity = ui->Tobox->currentText();
    QString flightDate = ui->dateEdit->date().toString("yyyy-MM-dd");
    emit buyticket(fromCity,toCity,flightDate,account,0);
}


void Home::on_Changebtn_clicked()
{
    QString fromCity = ui->Frombox->currentText();
    QString toCity = ui->Tobox->currentText();
    QString flightDate = ui->dateEdit->date().toString("yyyy-MM-dd");
    emit buyticket(fromCity,toCity,flightDate,account,1);
}


void Home::on_Newsbtn_clicked()
{
    inform* w = new inform(account);
    w->show();
}


void Home::on_toolButton_2_clicked()
{
    QString fromCity = "广州";
    QString toCity = "北京";
    QString flightDate = ui->dateEdit->date().toString("yyyy-MM-dd");
    //这些固定城市 后面写
    emit buyticket(fromCity,toCity,flightDate,account,0);
}


void Home::on_toolButton_3_clicked()
{
    QString fromCity = "上海";
    QString toCity = "广州";
    QString flightDate = ui->dateEdit->date().toString("yyyy-MM-dd");
    //这些固定城市 后面写
    emit buyticket(fromCity,toCity,flightDate,account,0);
}

void Home::on_toolButton_5_clicked()
{
    QString fromCity = "武汉";
    QString toCity = "上海";
    QString flightDate = ui->dateEdit->date().toString("yyyy-MM-dd");
    //这些固定城市 后面写
    emit buyticket(fromCity,toCity,flightDate,account,0);
}

