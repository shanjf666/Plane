#include "buyticket.h"
#include "clickablelabel.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>
#include <QMouseEvent>
#include <QDateEdit>
#include <QScrollArea>
#include <QFrame>
#include <QLineEdit>
#include <QTableWidget>
#include <QGroupBox>
#include <QTimer>
#include <QMessageBox>
#include <QStackedWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>
#include <QFormLayout>
#include <QMap>

static int OrderNumber;
// 静态变量用于生成和自增订单号
void ini() {
    QSqlQuery query;
    query.prepare("SELECT orderNumber FROM orderlist ORDER BY orderNumber ASC");

    if(query.exec())
    {
        while(query.next())
        {
            OrderNumber = query.value(0).toInt();
        }
    }
    else
    {
        qDebug()<<"error";
    }
    OrderNumber++;
}

// 主窗口
Buyticket::Buyticket(QWidget *parent,QString fromCity,QString toCity,QString flightDate,QString account,int ischangewidget)
    : QMainWindow(parent), account(account),purchaseWindow(nullptr), changeTicketsWindow(nullptr)
{
    // 数据库连接
    // QSqlDatabase dbcon = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    // dbcon.setHostName("127.0.0.1");                           // MySQL 服务器ip地址，本机
    // dbcon.setPort(3306);                                       // 端口号，默认
    // dbcon.setDatabaseName("persondb");                      // ODBC 数据源名称
    // if (!dbcon.open()) {
    //     qDebug() << "数据库连接失败: " << dbcon.lastError().text();
    // } else {
    //     qDebug() << "数据库连接成功！";
    // }
    ini();
    qDebug()<<OrderNumber;
    // 主窗口
    QWidget *centralWidget = new QWidget();
    QHBoxLayout *mainLayout = new QHBoxLayout();

    QVBoxLayout *menuLayout = new QVBoxLayout();

    // 创建按钮
    QPushButton *userButton = new QPushButton("个人用户");
    QPushButton *changeFlightButton = new QPushButton("改签航班");
    QPushButton *bookTicketButton = new QPushButton("预定机票");
    QPushButton *homeButton = new QPushButton("主页");

    // 按钮样式设置
    QString buttonStyle = R"(
    QPushButton {
        background-color: #007BFF; /* 蓝色背景 */
        color: white; /* 白色文字 */
        border: none;
        border-radius: 5px; /* 圆角 */
        padding: 1px;
        font-size: 14px; /* 字体大小稍微缩小 */
        width: 120px; /* 按钮宽度稍微缩小 */
        height: 80px; /* 按钮高度稍微缩小 */
    }
    QPushButton:hover {
        background-color: #0056b3; /* 鼠标悬停时背景变为深蓝色 */
    }
)";

    // 应用样式和固定大小
    homeButton->setStyleSheet(buttonStyle);
    userButton->setStyleSheet(buttonStyle);
    changeFlightButton->setStyleSheet(buttonStyle);
    bookTicketButton->setStyleSheet(buttonStyle);

    homeButton->setFixedSize(130, 75);
    userButton->setFixedSize(130, 75);
    changeFlightButton->setFixedSize(130, 75);
    bookTicketButton->setFixedSize(130, 75);

    // 将按钮添加到布局
    menuLayout->addWidget(homeButton);
    menuLayout->addWidget(userButton);
    menuLayout->addWidget(changeFlightButton);
    menuLayout->addWidget(bookTicketButton);

    // 设置布局间距和对齐方式
    menuLayout->addStretch(); // 占位
    menuLayout->setSpacing(20); // 按钮间距略微减小
    menuLayout->insertStretch(0); // 添加顶部占位符
    menuLayout->addStretch(); // 添加底部占位符

    connect(userButton,&QPushButton::clicked,this,[=](){
        emit onperson();
    });

    connect(homeButton,&QPushButton::clicked,this,[=](){
        emit onhome();
    });

    // 中间内容区
    QStackedWidget *contentStack = new QStackedWidget();

    // 记录搜索状态
    bool isSearched = false; // 初始状态未搜索

    // 【预定机票界面】
    QWidget *bookingWidget = new QWidget();
    QVBoxLayout *contentLayout = new QVBoxLayout();

    // 顶部搜索栏
    QHBoxLayout *searchLayout = new QHBoxLayout();
    searchLayout->setAlignment(Qt::AlignCenter); // 居中布局
    searchLayout->setSpacing(10);

    QSqlQuery sq;
    QString sql="select * from flights";
    sq.prepare(sql);
    sq.exec();

    QLabel *fromLabel = new QLabel("出发地:");
    fromLabel->setStyleSheet("color: #219ebc; font-size: 12px;");
    QComboBox *fromComboBox = new QComboBox();


    QLabel *arrowLabel = new QLabel("→");
    arrowLabel->setAlignment(Qt::AlignCenter);
    arrowLabel->setStyleSheet("color: #219ebc; font-size: 12px;");

    QLabel *toLabel = new QLabel("目的地:");
    toLabel->setStyleSheet("color: #219ebc; font-size: 12px;");
    QComboBox *toComboBox = new QComboBox();

    //加入查找
    QMap<QString,int> hash;
    while(sq.next())
    {
        hash[sq.value("flightstart").toString()]++;
        hash[sq.value("flightend").toString()]++;
    }

    for(auto i=hash.begin();i!=hash.end();i++)
    {
        fromComboBox->addItem(i.key());
        toComboBox->addItem(i.key());
    }

    // 应用 QComboBox 样式
    fromComboBox->setStyleSheet(R"(
    /* 未下拉时，QComboBox的样式 */
    QComboBox {
        border: 1px solid gray;
        border-radius: 3px;
        padding: 1px 18px 1px 3px;
        color: rgb(0, 0, 0);
        font: normal normal 15px 'Microsoft YaHei';
        background: transparent;
        background-color: rgb(255, 255, 255);
    }

    /* 下拉后，整个下拉窗体样式 */
    QComboBox QAbstractItemView {
        outline: 0px solid gray;
        border: 1px solid yellow;
        color: black;
        background-color: rgb(0, 255, 255);
        selection-background-color: rgb(0, 170, 255);
        padding-left: 3px;
    }

    /* 下拉后，整个下拉窗体每项的样式 */
    QComboBox QAbstractItemView::item {
        height: 30px;
        padding-left: 3px;
    }

    /* 下拉后，整个下拉窗体越过每项的样式 */
    QComboBox QAbstractItemView::item:hover {
        color: rgb(0, 0, 0);
        background-color: rgb(0, 170, 255);
    }

    /* 下拉后，整个下拉窗体被选择的每项的样式 */
    QComboBox QAbstractItemView::item:selected {
        color: #FFFFFF;
        background-color: rgb(0, 170, 255);
    }

    /* QComboBox中的垂直滚动条 */
    QComboBox QAbstractScrollArea QScrollBar:vertical {
        width: 10px;
        background-color: #d0d2d4;
    }

    QComboBox QAbstractScrollArea QScrollBar::handle:vertical {
        border-radius: 5px;
        background: rgb(160,160,160);
    }

    QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {
        background: rgb(90, 91, 93);
    }

    /* 点击QComboBox */
    QComboBox:on {}

    /* 下拉框样式 */
    QComboBox::drop-down {
        subcontrol-origin: padding;
        subcontrol-position: top right;
        width: 15px;
        border-left-width: 1px;
        border-left-color: darkgray;
        border-left-style: solid;
        border-top-right-radius: 3px;
        border-bottom-right-radius: 3px;
    }

    /* 越过下拉框样式 */
    QComboBox::drop-down:hover {
        background: yellow;
    }

    /* 下拉箭头样式 */
    QComboBox::down-arrow {
        width: 15px;
        background: transparent;
        padding: 0px 0px 0px 0px;
        image: url(:/images/combobox_arrow_down.png);
    }

    /* 点击下拉箭头 */
    QComboBox::down-arrow:on {
        image: url(:/images/combobox_arrow_up.png);
    }
)");

    // 应用 QComboBox 样式
    toComboBox->setStyleSheet(R"(
    /* 未下拉时，QComboBox的样式 */
    QComboBox {
        border: 1px solid gray;
        border-radius: 3px;
        padding: 1px 18px 1px 3px;
        color: rgb(0, 0, 0);
        font: normal normal 15px 'Microsoft YaHei';
        background: transparent;
        background-color: rgb(255, 255, 255);
    }

    /* 下拉后，整个下拉窗体样式 */
    QComboBox QAbstractItemView {
        outline: 0px solid gray;
        border: 1px solid yellow;
        color: black;
        background-color: rgb(0, 255, 255);
        selection-background-color: rgb(0, 170, 255);
        padding-left: 3px;
    }

    /* 下拉后，整个下拉窗体每项的样式 */
    QComboBox QAbstractItemView::item {
        height: 30px;
        padding-left: 3px;
    }

    /* 下拉后，整个下拉窗体越过每项的样式 */
    QComboBox QAbstractItemView::item:hover {
        color: rgb(0, 0, 0);
        background-color: rgb(0, 170, 255);
    }

    /* 下拉后，整个下拉窗体被选择的每项的样式 */
    QComboBox QAbstractItemView::item:selected {
        color: #FFFFFF;
        background-color: rgb(0, 170, 255);
    }

    /* QComboBox中的垂直滚动条 */
    QComboBox QAbstractScrollArea QScrollBar:vertical {
        width: 10px;
        background-color: #d0d2d4;
    }

    QComboBox QAbstractScrollArea QScrollBar::handle:vertical {
        border-radius: 5px;
        background: rgb(160,160,160);
    }

    QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {
        background: rgb(90, 91, 93);
    }

    /* 点击QComboBox */
    QComboBox:on {}

    /* 下拉框样式 */
    QComboBox::drop-down {
        subcontrol-origin: padding;
        subcontrol-position: top right;
        width: 15px;
        border-left-width: 1px;
        border-left-color: darkgray;
        border-left-style: solid;
        border-top-right-radius: 3px;
        border-bottom-right-radius: 3px;
    }

    /* 越过下拉框样式 */
    QComboBox::drop-down:hover {
        background: yellow;
    }

    /* 下拉箭头样式 */
    QComboBox::down-arrow {
        width: 15px;
        background: transparent;
        padding: 0px 0px 0px 0px;
        image: url(:/images/combobox_arrow_down.png);
    }

    /* 点击下拉箭头 */
    QComboBox::down-arrow:on {
        image: url(:/images/combobox_arrow_up.png);
    }
)");

    QLabel *dateLabel = new QLabel("出发日期:");
    QDateEdit *dateEdit = new QDateEdit();
    dateEdit->setCalendarPopup(true);
    dateEdit->setDate(QDate::currentDate());

    // 设置 QDateEdit 的背景为白色，并设置字体颜色
    dateEdit->setStyleSheet(R"(
    QDateEdit {
        background-color: white; /* 背景色为白色 */
        color: #219ebc; /* 字体颜色为蓝色 */
        border-radius: 3px; /* 边框圆角 */
        font-size: 12px; /* 字体大小 */
        min-width: 100px;
    }
)");

    QPushButton *searchButton = new QPushButton("搜索");
    searchButton->setStyleSheet(R"(
    QPushButton {
        background-color: #e63946; /* 按钮的背景颜色（红色） */
        color: white; /* 字体颜色 */
        border-radius: 5px; /* 圆角 */
        padding: 5px;
        font-size: 12px;

    }
    QPushButton:hover {
        background-color: #d62828; /* 悬停时变深（深红色） */
    }
)");


    searchLayout->addWidget(fromLabel);
    searchLayout->addWidget(fromComboBox);
    searchLayout->addWidget(arrowLabel);
    searchLayout->addWidget(toLabel);
    searchLayout->addWidget(toComboBox);
    searchLayout->addWidget(dateLabel);
    searchLayout->addWidget(dateEdit);
    searchLayout->addWidget(searchButton);

    QWidget *searchWidget = new QWidget();
    searchWidget->setLayout(searchLayout);
    searchWidget->setFixedHeight(40);


    // 机票列表
    QScrollArea *ticketScrollArea = new QScrollArea();
    ticketScrollArea->setStyleSheet(R"(
            QScrollArea {
                background-color: #333333; /* 浅灰色背景 */
                border: none; /* 去除默认边框 */
                border-radius: 7px; /* 四角圆弧 */
                padding: 2px; /* 内边距 */
            }
        )");
    QWidget *ticketListWidget = new QWidget();
    ticketListWidget->setStyleSheet(R"(
            QWidget {
                background-color: #333333; /* 浅灰色背景 */
                border-radius: 7px; /* 四角圆弧 */
            }
        )");
    QVBoxLayout *ticketListLayout = new QVBoxLayout();
    ticketListLayout->setSpacing(5);
    //ticketScrollArea->hide();

    //这是搜索页面，原本是个槽函数，我把槽函数改了，我想要做到点击主页界面的搜索就弹出这个已搜索好的界面
    //里面的变量和外面的重复了
    {
        // 修改状态
        ticketScrollArea->show();             // 显示机票列表
        searchLayout->setAlignment(Qt::AlignLeft); // 改为左对齐
        isSearched = true; // 记录已搜索状态

        // 获取用户选择的出发地、目的地
        fromComboBox->setCurrentText(fromCity);
        toComboBox->setCurrentText(toCity);
        dateEdit->setDate(QDate::fromString(flightDate, "yyyy-MM-dd"));

        // 清空之前的搜索结果
        QLayoutItem* item;
        while ((item = ticketListLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        if(dateEdit->date() >= QDate::currentDate())
        {
            // 查询数据库并显示所有航班信息
            QSqlQuery query;
            if(dateEdit->date() == QDate::currentDate())
            {
                query.prepare("SELECT flightNumber, flightStart, flightEnd, flightTimeStart, flightTimeEnd, "
                              "flightCheapMoney, flightExpensiveMoney, cheapOneRemaining, expensiveOneRemaining "
                              "FROM flights "
                              "WHERE flightstart = :fromCity AND flightEnd = :toCity "
                              "AND TIME(flightTimeStart) >= TIME(NOW()) ""AND TIME(flightTimeStart) >= TIME(NOW()) "
                              "ORDER BY flightTimeStart ASC");
            }
            else
            {
                query.prepare("SELECT flightNumber, flightStart, flightEnd, flightTimeStart, flightTimeEnd, "
                              "flightCheapMoney, flightExpensiveMoney, cheapOneRemaining, expensiveOneRemaining "
                              "FROM flights "
                              "WHERE flightstart = :fromCity AND flightEnd = :toCity "
                              "ORDER BY flightTimeStart ASC");
            }

            // 绑定参数
            query.bindValue(":fromCity", fromCity);
            query.bindValue(":toCity", toCity);

            // 执行查询并展示结果
            if (query.exec()) {
                while (query.next()) {
                    QString flightNumber = query.value(0).toString();  // 航班号
                    QString flightStart = query.value(1).toString();   // 出发地
                    QString flightEnd = query.value(2).toString();     // 目的地
                    QString flightTimeStart = query.value(3).toString().left(8); // 起飞时间
                    QString flightTimeEnd = query.value(4).toString().left(8);   // 到达时间
                    QString flightCheapMoney = query.value(5).toString(); // 便宜舱位价格
                    QString flightExpensiveMoney = query.value(6).toString(); // 贵舱位价格
                    int cheapOneRemaining = query.value(7).toInt(); // 便宜舱位剩余数量
                    int expensiveOneRemaining = query.value(8).toInt(); // 贵舱位剩余数量

                    // 创建票务框架
                    QFrame *ticketFrame = new QFrame();
                    ticketFrame->setFixedHeight(100);
                    ticketFrame->setStyleSheet(R"(
                    QFrame {
                        background-color: #e0f7fa; /* 浅蓝色背景 */
                        border: 1px solid #b2ebf2; /* 浅蓝边框 */
                        border-radius: 10px; /* 圆角 */
                        padding: 5px;
                    }
                )");
                    ticketFrame->setFixedHeight(100);
                    // 设置大小策略，宽度随父布局变化，高度固定
                    ticketFrame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
                    ticketFrame->setFixedHeight(65);  // 初始未展开时的高度

                    QVBoxLayout *ticketLayout = new QVBoxLayout();

                    // 创建点击显示航班信息的标签
                    ClickableLabel *headerLabel = new ClickableLabel();
                    headerLabel->setText(QString("%1 %2 —— %3 %4 | 航班号: %5")
                                             .arg(flightStart, flightTimeStart, flightTimeEnd, flightEnd, flightNumber));
                    headerLabel->setStyleSheet("font-size: 11px; color: #4b0082; font-weight: bold;"); // 字体颜色为深紫色，粗体
                    headerLabel->setAlignment(Qt::AlignCenter);

                    // 隐藏的详细信息框
                    QFrame *detailFrame = new QFrame();
                    detailFrame->setStyleSheet(R"(
                    QFrame {
                        background-color: #e0f7fa; /* 浅蓝色背景 */
                        border: 1px solid #b2ebf2; /* 浅蓝边框 */
                        border-radius: 7px; /* 圆角 */
                        padding: 2px;
                    }
                    QFrame[expanded="true"] {
                        background-color: #B0E0E6; /* 展开时的浅灰色背景--------------------------- */
                        border-width: 0px 0px 0px 0px; /* 展开时边框变窄 */
                        border-color: #D8B7DD; /* 浅蓝色边框 */
                    }
                )");
                    detailFrame->setVisible(false); // 默认隐藏
                    detailFrame->setFixedHeight(100); // 设置展开后的高度

                    // 设置一个属性来标识是否展开
                    detailFrame->setProperty("expanded", false); // 默认未展开

                    // 创建展开和收起的函数
                    auto toggleDetailFrame = [detailFrame]() {
                        bool expanded = detailFrame->property("expanded").toBool();
                        if (expanded) {
                            detailFrame->setProperty("expanded", false);
                            detailFrame->setFixedHeight(65); // 收起时恢复高度
                        } else {
                            detailFrame->setProperty("expanded", true);
                            detailFrame->setFixedHeight(100); // 展开时高度增加
                        }
                        detailFrame->style()->unpolish(detailFrame);  // 重新应用样式
                        detailFrame->style()->polish(detailFrame);
                        detailFrame->update(); // 更新界面
                    };

                    // 绑定事件（如点击headerLabel时展开或收起）
                    headerLabel->setClickCallback(toggleDetailFrame);

                    QVBoxLayout *detailLayout = new QVBoxLayout();

                    // 头等舱信息
                    QHBoxLayout *firstClassLayout = new QHBoxLayout();
                    QLabel *firstClassLabel = new QLabel(QString("头等舱: ￥%1/人 (剩余%2张)").arg(flightExpensiveMoney).arg(expensiveOneRemaining));
                    firstClassLabel->setStyleSheet(R"(
                    QLabel {
                        background-color: #7EC8E3; /* 设置背景色为 #7EC8E3 */
                        color: white; /* 设置字体颜色为白色 */
                        font-size: 12px; /* 字体大小 */
                        padding: 5px; /* 内边距 */
                        border-radius: 5px; /* 圆角 */
                    }
                )");
                    QPushButton *firstClassButton = new QPushButton("购买");
                    firstClassButton->setStyleSheet(R"(
                    QPushButton {
                        background-color: #219ebc; /* 浅蓝色背景 */
                        color: white;
                        padding: 0px;
                        border-radius: 5px;
                        font-size: 12px;
                    }
                    QPushButton:hover {
                        background-color: #8ecae6; /* 悬停时变深 */
                    }
                )");
                    firstClassButton->setFixedWidth(80);

                    // 检查头等舱剩余票数，如果小于20，修改按钮文本和颜色
                    if (expensiveOneRemaining < 20) {
                        firstClassButton->setText("抢购");
                        firstClassButton->setStyleSheet("background-color: orange; color: white;");
                        if(expensiveOneRemaining==0)firstClassButton->setEnabled(false);
                    }

                    firstClassLayout->addWidget(firstClassLabel);
                    firstClassLayout->addWidget(firstClassButton);
                    detailLayout->addLayout(firstClassLayout);

                    // 经济舱信息
                    QHBoxLayout *economyClassLayout = new QHBoxLayout();
                    QLabel *economyClassLabel = new QLabel(QString("经济舱: ￥%1/人 (剩余%2张)").arg(flightCheapMoney).arg(cheapOneRemaining));
                    economyClassLabel->setStyleSheet(R"(
                    QLabel {
                        background-color: #7EC8E3; /* 设置背景色为 #7EC8E3 */
                        color: white; /* 设置字体颜色为白色 */
                        font-size: 12px; /* 字体大小 */
                        padding: 5px; /* 内边距 */
                        border-radius: 5px; /* 圆角 */
                    }
                )");
                    QPushButton *economyClassButton = new QPushButton("购买");
                    economyClassButton->setStyleSheet(R"(
                    QPushButton {
                        background-color: #219ebc; /* 浅蓝色背景 */
                        color: white;
                        padding: 0px;
                        border-radius: 5px;
                        font-size: 12px;
                    }
                    QPushButton:hover {
                        background-color: #8ecae6; /* 悬停时变深 */
                    }
                )");
                    economyClassButton->setFixedWidth(80);

                    // 检查经济舱剩余票数，如果小于20，修改按钮文本和颜色
                    if (cheapOneRemaining < 20) {
                        economyClassButton->setText("抢购");
                        economyClassButton->setStyleSheet("background-color: orange; color: white;");
                        if(cheapOneRemaining==0)economyClassButton->setEnabled(false);
                    }

                    economyClassLayout->addWidget(economyClassLabel);
                    economyClassLayout->addWidget(economyClassButton);
                    detailLayout->addLayout(economyClassLayout);

                    // 将详细信息布局添加到detailFrame
                    detailFrame->setLayout(detailLayout);

                    // 将headerLabel和detailFrame添加到ticketLayout
                    ticketLayout->addWidget(headerLabel);
                    ticketLayout->addWidget(detailFrame);

                    // 设置票务框架的布局
                    ticketFrame->setLayout(ticketLayout);

                    // 信号槽连接：点击显示或隐藏详细信息框
                    connect(headerLabel, &ClickableLabel::clicked, [ticketFrame, detailFrame]() {
                        bool isVisible = detailFrame->isVisible();
                        detailFrame->setVisible(!isVisible);

                        int newHeight = isVisible ? 60 : 140; // 展开后的高度
                        ticketFrame->setFixedHeight(newHeight);
                    });

                    // 信号槽连接：购买按钮
                    connect(firstClassButton, &QPushButton::clicked, [=]() {
                        this->openPurchaseWindow(flightNumber, flightDate, "1");  // 打开购买窗口
                    });

                    connect(economyClassButton, &QPushButton::clicked, [=]() {
                        this->openPurchaseWindow(flightNumber, flightDate, "0");  // 打开购买窗口
                    });

                    ticketFrame->setLayout(ticketLayout);
                    ticketListLayout->addWidget(ticketFrame);
                }

                ticketListLayout->addStretch(); // 占位
                ticketListWidget->setLayout(ticketListLayout);
                ticketScrollArea->setWidget(ticketListWidget);
                ticketScrollArea->setWidgetResizable(true);
                ticketScrollArea->show(); // 显示滚动区域
            } else {
                qDebug() << "查询失败: " << query.lastError().text();
            }

        }

        }
    // 搜索按键查询数据库
    connect(searchButton, &QPushButton::clicked, this, [=]() mutable
            {
                // 修改状态
                ticketScrollArea->show();             // 显示机票列表
                searchLayout->setAlignment(Qt::AlignLeft); // 改为左对齐
                isSearched = true; // 记录已搜索状态

                // 获取用户选择的出发地、目的地
                QString fromCity = fromComboBox->currentText();
                QString toCity = toComboBox->currentText();
                QString flightDate = dateEdit->date().toString("yyyy-MM-dd");

                // 清空之前的搜索结果
                QLayoutItem* item;
                while ((item = ticketListLayout->takeAt(0)) != nullptr) {
                    delete item->widget();
                    delete item;
                }
                if(dateEdit->date() >= QDate::currentDate())
                {
                    // 查询数据库并显示所有航班信息
                    QSqlQuery query;
                    if(dateEdit->date() == QDate::currentDate())
                    {
                        query.prepare("SELECT flightNumber, flightStart, flightEnd, flightTimeStart, flightTimeEnd, "
                                      "flightCheapMoney, flightExpensiveMoney, cheapOneRemaining, expensiveOneRemaining "
                                      "FROM flights "
                                      "WHERE flightstart = :fromCity AND flightEnd = :toCity "
                                      "AND TIME(flightTimeStart) >= TIME(NOW()) "
                                      "ORDER BY flightTimeStart ASC");
                    }
                    else
                    {
                        query.prepare("SELECT flightNumber, flightStart, flightEnd, flightTimeStart, flightTimeEnd, "
                                      "flightCheapMoney, flightExpensiveMoney, cheapOneRemaining, expensiveOneRemaining "
                                      "FROM flights "
                                      "WHERE flightstart = :fromCity AND flightEnd = :toCity "
                                      "ORDER BY flightTimeStart ASC");
                    }
                    // 绑定参数
                    query.bindValue(":fromCity", fromCity);
                    query.bindValue(":toCity", toCity);

                    // 执行查询并展示结果
                    if (query.exec()) {
                        while (query.next()) {
                            QString flightNumber = query.value(0).toString();  // 航班号
                            QString flightStart = query.value(1).toString();   // 出发地
                            QString flightEnd = query.value(2).toString();     // 目的地
                            QString flightTimeStart = query.value(3).toString().left(8); // 起飞时间
                            QString flightTimeEnd = query.value(4).toString().left(8);   // 到达时间
                            QString flightCheapMoney = query.value(5).toString(); // 便宜舱位价格
                            QString flightExpensiveMoney = query.value(6).toString(); // 贵舱位价格
                            int cheapOneRemaining = query.value(7).toInt(); // 便宜舱位剩余数量
                            int expensiveOneRemaining = query.value(8).toInt(); // 贵舱位剩余数量

                            // 创建票务框架
                            QFrame *ticketFrame = new QFrame();
                            ticketFrame->setFixedHeight(100);
                            ticketFrame->setStyleSheet(R"(
                    QFrame {
                        background-color: #e0f7fa; /* 浅蓝色背景 */
                        border: 1px solid #b2ebf2; /* 浅蓝边框 */
                        border-radius: 10px; /* 圆角 */
                        padding: 5px;
                    }
                )");
                            ticketFrame->setFixedHeight(85);
                            // 设置大小策略，宽度随父布局变化，高度固定
                            ticketFrame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
                            ticketFrame->setFixedHeight(55);  // 初始未展开时的高度

                            QVBoxLayout *ticketLayout = new QVBoxLayout();

                            // 创建点击显示航班信息的标签
                            ClickableLabel *headerLabel = new ClickableLabel();
                            headerLabel->setText(QString("%1 %2 —— %3 %4 | 航班号: %5")
                                                     .arg(flightStart, flightTimeStart, flightTimeEnd, flightEnd, flightNumber));
                            headerLabel->setStyleSheet("font-size: 11px; color: #4b0082; font-weight: bold;"); // 字体颜色为深紫色，粗体
                            headerLabel->setAlignment(Qt::AlignCenter);

                            // 隐藏的详细信息框
                            QFrame *detailFrame = new QFrame();
                            detailFrame->setFrameShape(QFrame::Box);
                            detailFrame->setStyleSheet(R"(
                    QFrame {
                        background-color: #e0f7fa; /* 浅蓝色背景 */
                        border: 1px solid #b2ebf2; /* 浅蓝边框 */
                        border-radius: 7px; /* 圆角 */
                        padding: 2px;
                    }
                    QFrame[expanded="true"] {
                        background-color: #B0E0E6; /* 展开时的浅灰色背景--------------------------- */
                        border-width: 0px 0px 0px 0px; /* 展开时边框变窄 */
                        border-color: #D8B7DD; /* 浅蓝色边框 */
                    }
                )");
                            detailFrame->setVisible(false); // 默认隐藏
                            detailFrame->setFixedHeight(100); // 展开后的高度

                            // 设置一个属性来标识是否展开
                            detailFrame->setProperty("expanded", false); // 默认未展开

                            // 创建展开和收起的函数
                            auto toggleDetailFrame = [detailFrame]() {
                                bool expanded = detailFrame->property("expanded").toBool();
                                if (expanded) {
                                    detailFrame->setProperty("expanded", false);
                                    detailFrame->setFixedHeight(65); // 收起时恢复高度
                                } else {
                                    detailFrame->setProperty("expanded", true);
                                    detailFrame->setFixedHeight(100); // 展开时高度增加
                                }
                                detailFrame->style()->unpolish(detailFrame);  // 重新应用样式
                                detailFrame->style()->polish(detailFrame);
                                detailFrame->update(); // 更新界面
                            };

                            // 绑定事件（如点击headerLabel时展开或收起）
                            headerLabel->setClickCallback(toggleDetailFrame);

                            QVBoxLayout *detailLayout = new QVBoxLayout();

                            // 头等舱信息
                            QHBoxLayout *firstClassLayout = new QHBoxLayout();
                            QLabel *firstClassLabel = new QLabel(QString("头等舱: ￥%1/人 (剩余%2张)").arg(flightExpensiveMoney).arg(expensiveOneRemaining));
                            firstClassLabel->setStyleSheet(R"(
                    QLabel {
                        background-color: #7EC8E3; /* 设置背景色为 #7EC8E3 */
                        color: white; /* 设置字体颜色为白色 */
                        font-size: 12px; /* 字体大小 */
                        padding: 5px; /* 内边距 */
                        border-radius: 5px; /* 圆角 */
                    }
                )");
                            QPushButton *firstClassButton = new QPushButton("购买");
                            firstClassButton->setStyleSheet(R"(
                    QPushButton {
                        background-color: #219ebc; /* 浅蓝色背景 */
                        color: white;
                        padding: 0px;
                        border-radius: 5px;
                        font-size: 12px;
                    }
                    QPushButton:hover {
                        background-color: #8ecae6; /* 悬停时变深 */
                    }
                )");
                            firstClassButton->setFixedWidth(80);

                            // 检查头等舱剩余票数，如果小于20，修改按钮文本和颜色
                            if (expensiveOneRemaining < 20) {
                                firstClassButton->setText("抢购");
                                firstClassButton->setStyleSheet("background-color: orange; color: white;");
                                if(expensiveOneRemaining==0)firstClassButton->setEnabled(false);
                            }

                            firstClassLayout->addWidget(firstClassLabel);
                            firstClassLayout->addWidget(firstClassButton);
                            detailLayout->addLayout(firstClassLayout);

                            // 经济舱信息
                            QHBoxLayout *economyClassLayout = new QHBoxLayout();
                            firstClassButton->setStyleSheet(R"(
                    QPushButton {
                        background-color: #219ebc; /* 浅蓝色背景 */
                        color: white;
                        padding: 0px;
                        border-radius: 5px;
                        font-size: 12px;
                    }
                    QPushButton:hover {
                        background-color: #8ecae6; /* 悬停时变深 */
                    }
                )");
                            QLabel *economyClassLabel = new QLabel(QString("经济舱: ￥%1/人 (剩余%2张)").arg(flightCheapMoney).arg(cheapOneRemaining));
                            economyClassLabel->setStyleSheet(R"(
                    QLabel {
                        background-color: #7EC8E3; /* 设置背景色为 #7EC8E3 */
                        color: white; /* 设置字体颜色为白色 */
                        font-size: 12px; /* 字体大小 */
                        padding: 5px; /* 内边距 */
                        border-radius: 5px; /* 圆角 */
                    }
                )");
                            QPushButton *economyClassButton = new QPushButton("购买");
                            economyClassButton->setStyleSheet(R"(
                    QPushButton {
                        background-color: #219ebc; /* 浅蓝色背景 */
                        color: white;
                        padding: 0px;
                        border-radius: 5px;
                        font-size: 12px;
                    }
                    QPushButton:hover {
                        background-color: #8ecae6; /* 悬停时变深 */
                    }
                )");
                            economyClassButton->setFixedWidth(80);

                            // 检查经济舱剩余票数，如果小于20，修改按钮文本和颜色
                            if (cheapOneRemaining < 20) {
                                economyClassButton->setText("抢购");
                                economyClassButton->setStyleSheet("background-color: orange; color: white;");
                                if(cheapOneRemaining==0)economyClassButton->setEnabled(false);
                            }


                            economyClassLayout->addWidget(economyClassLabel);
                            economyClassLayout->addWidget(economyClassButton);
                            detailLayout->addLayout(economyClassLayout);

                            // 将详细信息布局添加到detailFrame
                            detailFrame->setLayout(detailLayout);

                            // 将headerLabel和detailFrame添加到ticketLayout
                            ticketLayout->addWidget(headerLabel);
                            ticketLayout->addWidget(detailFrame);

                            // 设置票务框架的布局
                            ticketFrame->setLayout(ticketLayout);

                            // 信号槽连接：点击显示或隐藏详细信息框
                            connect(headerLabel, &ClickableLabel::clicked, [ticketFrame, detailFrame]() {
                                bool isVisible = detailFrame->isVisible();
                                detailFrame->setVisible(!isVisible);

                                int newHeight = isVisible ? 60 : 140; // 展开后的高度
                                ticketFrame->setFixedHeight(newHeight);
                            });

                            // 信号槽连接：购买按钮
                            connect(firstClassButton, &QPushButton::clicked, [=]() {
                                this->openPurchaseWindow(flightNumber, flightDate, "1");  // 打开购买窗口
                            });

                            connect(economyClassButton, &QPushButton::clicked, [=]() {
                                this->openPurchaseWindow(flightNumber, flightDate, "0");  // 打开购买窗口
                            });

                            ticketFrame->setLayout(ticketLayout);
                            ticketListLayout->addWidget(ticketFrame);
                        }

                        ticketListLayout->addStretch(); // 占位
                        ticketListWidget->setLayout(ticketListLayout);
                        ticketScrollArea->setWidget(ticketListWidget);
                        ticketScrollArea->setWidgetResizable(true);
                        ticketScrollArea->show(); // 显示滚动区域
                    } else {
                        qDebug() << "查询失败: " << query.lastError().text();
                    }
                }

            });

    contentLayout->addWidget(searchWidget);
    contentLayout->addWidget(ticketScrollArea);
    bookingWidget->setLayout(contentLayout);
    contentStack->addWidget(bookingWidget);

    // contentStack->addWidget(changeFlightWidget);

    // 布局整合
    mainLayout->addLayout(menuLayout, 1);        // 左侧菜单
    mainLayout->addWidget(contentStack, 5);     // 中间内容切换

    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);



    // 连接按钮点击事件
    connect(bookTicketButton, &QPushButton::clicked, [=]() {
        contentStack->setCurrentWidget(bookingWidget); // 切换到预定机票界面
        if (isSearched) {
            ticketScrollArea->show();             // 恢复搜索后状态
            searchLayout->setAlignment(Qt::AlignLeft); // 左对齐
        } else {
            searchLayout->setAlignment(Qt::AlignCenter); // 居中对齐
        }
    });

    connect(changeFlightButton, &QPushButton::clicked, [=]() {
        // 【改签航班界面】----------------------------------------------------
        // 订单界面
        QWidget *changeFlightWidget = new QWidget();
        QVBoxLayout *changeFlightLayout = new QVBoxLayout();

        // 标题
        QLabel *changeTitle = new QLabel("订单列表");
        changeTitle->setAlignment(Qt::AlignLeft);
        changeTitle->setStyleSheet("font-size: 16px; font-weight: bold; margin: 10px;");
        changeFlightLayout->addWidget(changeTitle);

        // 订单列表
        QScrollArea *orderScrollArea = new QScrollArea();
        orderScrollArea->setStyleSheet(R"(
            QScrollArea {
                background-color: #333333; /* 浅灰色背景 */
                border: none; /* 去除默认边框 */
                border-radius: 7px; /* 四角圆弧 */
                padding: 2px; /* 内边距 */
            }
        )");
        QWidget *orderListWidget = new QWidget();
        orderListWidget->setStyleSheet(R"(
            QWidget {
                background-color: #333333; /* 浅灰色背景 */
                border-radius: 7px; /* 四角圆弧 */
            }
        )");
        QVBoxLayout *orderListLayout = new QVBoxLayout();

        // 查询订单信息，按 flightDate 降序排列
        QSqlQuery queryy;
        queryy.prepare("SELECT orderNumber, flightNumber, passengerName, ExpensiveOrNot, orderStatus, flightDate "
                       "FROM orderlist "
                       "WHERE account = :account "
                       "ORDER BY "
                       "CASE WHEN orderStatus IN (0, 2) THEN 0 ELSE 1 END ASC, "
                       "CASE WHEN orderStatus IN (0, 2) THEN flightDate ELSE flightDate END ASC, "
                       "CASE WHEN orderStatus IN (1, 3) THEN flightDate END DESC");
        queryy.bindValue(":account",account);
        qDebug()<<account;
        if (!queryy.exec()) {
            qDebug() << "Error executing query: " << queryy.lastError().text();
            return;
        }

        // 处理查询结果
        while (queryy.next()) {
            QString orderNumber = queryy.value(0).toString();
            QString flightNumber = queryy.value(1).toString();
            QString passengerName = queryy.value(2).toString();
            QString ExpensiveOrNot = queryy.value(3).toString();  // 修正: 正确的列索引
            QString orderStatus = queryy.value(4).toString();     // 获取订单状态
            QString flightDate = queryy.value(5).toString();      // 获取航班日期

            // 查询与订单对应的航班信息
            QSqlQuery flightQuery;
            flightQuery.prepare("SELECT flightstart, flightend, flightTimeStart, flightTimeEnd FROM flights WHERE flightNumber = :flightNumber");
            flightQuery.bindValue(":flightNumber", flightNumber);  // 绑定 flightNumber 参数
            if (!flightQuery.exec()) {
                qDebug() << "Error executing flight query: " << flightQuery.lastError().text();
                continue;  // 如果航班查询失败，则跳过当前订单
            }

            // 如果找到了航班信息
            if (flightQuery.next()) {
                QString flightstart = flightQuery.value(0).toString();
                QString flightend = flightQuery.value(1).toString();
                QString flightTimeStart = flightQuery.value(2).toString().left(8);
                QString flightTimeEnd = flightQuery.value(3).toString().left(8);

                // 每个订单的容器
                QFrame *orderFrame = new QFrame();
                orderFrame->setStyleSheet(R"(
                    QFrame {
                        background-color: #e0f7fa; /* 浅蓝色背景 */
                        border: 1px solid #b2ebf2; /* 浅蓝边框 */
                        border-radius: 10px; /* 圆角 */
                        padding: 5px;
                    }
                )");
                orderFrame->setFixedHeight(100);

                // 设置大小策略，宽度随父布局变化，高度固定
                orderFrame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

                // 订单框内的布局（信息和按钮放入同一个框）
                QVBoxLayout *orderLayout = new QVBoxLayout();  // 使用垂直布局来分为两行

                // 第一行：乘客姓名、出发地和目的地
                QHBoxLayout *firstRowLayout = new QHBoxLayout();
                QLabel *infoLabel = new QLabel(
                    QString("乘客: %1 | 出发地: %2 → 目的地: %3")
                        .arg(passengerName)  // 显示乘客姓名
                        .arg(flightstart)    // 出发地
                        .arg(flightend)      // 目的地
                    );
                infoLabel->setStyleSheet("font-size: 11px; color: #4b0082;"); // 字体颜色为深紫色
                firstRowLayout->addWidget(infoLabel);

                // 第二行：航班号、时间、状态按钮
                QHBoxLayout *secondRowLayout = new QHBoxLayout();
                QLabel *timeLabel = new QLabel(
                    QString("时间: %1 —— %2 | 航班号: %3 | 日期: %4")
                        .arg(flightTimeStart)  // 出发时间
                        .arg(flightTimeEnd)    // 到达时间
                        .arg(flightNumber)     // 航班号
                        .arg(flightDate)       // 航班日期
                    );
                timeLabel->setStyleSheet("font-size: 11px; color: #4b0082;"); // 字体颜色为深紫色
                secondRowLayout->addWidget(timeLabel);

                // 根据 orderStatus 显示不同的控件
                QWidget *statusWidget = nullptr;
                QLabel *classLabel = nullptr;

                if (ExpensiveOrNot == "1") {
                    classLabel = new QLabel("舱位: 头等舱");
                    classLabel->setStyleSheet("color: #4b0082; font-size: 12px;"); // 设置字体为紫色，字体大小为12px
                } else if (ExpensiveOrNot == "0") {
                    classLabel = new QLabel("舱位: 经济舱");
                    classLabel->setStyleSheet("color: #4b0082; font-size: 12px;"); // 同样设置字体为紫色，字体大小为12px
                }

                // 将舱位标签、状态标签或按钮添加到布局中
                secondRowLayout->addWidget(classLabel);  // 添加舱位标签
                secondRowLayout->addStretch();    // 空白间隔

                // 根据 orderStatus 显示不同的控件
                if (orderStatus == "0") {
                    // orderStatus = "0", 显示 "改签" 按钮
                    QPushButton *changeButton = new QPushButton("改签");
                    changeButton->setStyleSheet(R"(
                        QPushButton {
                            background-color: #219ebc; /* 浅蓝色背景 */
                            font-size: 12px;
                            padding: 5px;
                            border-radius: 5px;
                            color: white; /* 白色文字 */
                        }
                        QPushButton:hover {
                            background-color: #8ecae6; /* 深蓝色背景（悬停时） */
                        }
                    )");
                    changeButton->setFixedWidth(70); // 设置按钮宽度
                    // 信号槽连接，点击按钮打开改签窗口
                    connect(changeButton, &QPushButton::clicked, [=]() {
                        this->openchangeticketsWindow(orderNumber, flightNumber, ExpensiveOrNot);  // 打开改签窗口
                        // changeTitle->hide();
                        // orderScrollArea->hide();
                    });
                    statusWidget = changeButton;
                    secondRowLayout->addWidget(statusWidget);  // 添加状态标签或按钮

                    //退票
                    QPushButton *refundButton = new QPushButton("退票");
                    refundButton->setStyleSheet(R"(
                        QPushButton {
                            background-color: #f94144; /* 红色背景 */
                            font-size: 12px;
                            padding: 5px;
                            border-radius: 5px;
                            color: white; /* 白色文字 */
                        }
                        QPushButton:hover {
                            background-color: #d90429; /* 深红色背景（悬停时） */
                        }
                    )");
                    refundButton->setFixedWidth(70);

                    connect(refundButton, &QPushButton::clicked, [=]() {
                        // 弹出确认退票窗口
                        QDialog *confirmDialog = new QDialog(changeFlightWidget);
                        confirmDialog->setWindowTitle("确认退票");
                        confirmDialog->setFixedSize(250, 120); // 窗口大小
                        QVBoxLayout *confirmLayout = new QVBoxLayout(confirmDialog);

                        QLabel *confirmLabel = new QLabel("确定退票吗？");
                        confirmLabel->setAlignment(Qt::AlignCenter);
                        confirmLabel->setStyleSheet("font-size: 14px;");

                        QPushButton *yesButton = new QPushButton("确认");
                        QPushButton *noButton = new QPushButton("取消");

                        QHBoxLayout *buttonLayout = new QHBoxLayout();
                        buttonLayout->addWidget(yesButton);
                        buttonLayout->addWidget(noButton);

                        confirmLayout->addWidget(confirmLabel);
                        confirmLayout->addLayout(buttonLayout);

                        // 点击确认按钮，执行退票操作
                        connect(yesButton, &QPushButton::clicked, [=]() {
                            // 执行退票操作：更新订单状态，更新剩余票数，显示退票金额
                            QSqlQuery updateQuery;
                            updateQuery.prepare("UPDATE orderlist SET orderStatus = '3' WHERE orderNumber = ?");
                            updateQuery.addBindValue(orderNumber);  // 使用 orderNumber 查找订单

                            if (!updateQuery.exec()) {
                                qDebug() << "Error updating order status: " << updateQuery.lastError().text();
                                confirmDialog->close(); // 关闭确认窗口
                                return;
                            }

                            // 更新剩余票数
                            QSqlQuery flightQuery;
                            double refundAmount = 0;
                            if (ExpensiveOrNot == "1") {
                                // 更新 expensiveoneRemaining
                                QSqlQuery updateRemainingQuery;
                                updateRemainingQuery.prepare("UPDATE flights SET expensiveoneRemaining = expensiveoneRemaining+1 WHERE flightNumber = :flightNumber");
                                updateRemainingQuery.bindValue(":flightNumber", flightNumber);

                                if (!updateRemainingQuery.exec()) {
                                    qDebug() << "Error updating expensiveoneRemaining: " << updateRemainingQuery.lastError().text();
                                }

                                // 获取退票金额（头等舱）
                                flightQuery.prepare("SELECT flightexpensiveMoney FROM flights WHERE flightNumber = :flightNumber");
                            } else {
                                // 更新 cheaponeRemaining
                                QSqlQuery updateRemainingQuery;
                                updateRemainingQuery.prepare("UPDATE flights SET cheaponeRemaining = cheaponeRemaining+1 WHERE flightNumber = :flightNumber");
                                updateRemainingQuery.bindValue(":flightNumber", flightNumber);

                                if (!updateRemainingQuery.exec()) {
                                    qDebug() << "Error updating cheaponeRemaining: " << updateRemainingQuery.lastError().text();
                                }

                                // 获取退票金额（经济舱）
                                flightQuery.prepare("SELECT flightcheapMoney FROM flights WHERE flightNumber = :flightNumber");
                            }

                            flightQuery.bindValue(":flightNumber", flightNumber);
                            if (!flightQuery.exec()) {
                                qDebug() << "Error executing flight query: " << flightQuery.lastError().text();
                                confirmDialog->close(); // 关闭确认窗口
                                return;
                            }

                            if (flightQuery.next()) {
                                refundAmount = flightQuery.value(0).toDouble();
                            }

                            // 弹窗显示“退票成功”并展示退还金额
                            QDialog *refundDialog = new QDialog(changeFlightWidget);
                            refundDialog->setWindowTitle("退票成功");
                            refundDialog->setFixedSize(220, 100); // 弹窗大小
                            QVBoxLayout *refundLayout = new QVBoxLayout(refundDialog);

                            QLabel *messageLabel = new QLabel();
                            messageLabel->setAlignment(Qt::AlignCenter);
                            messageLabel->setStyleSheet("font-size: 14px;");
                            messageLabel->setTextFormat(Qt::RichText);

                            // 绿色显示金额
                            messageLabel->setText(QString("退票成功\n已退还金额: <font color='green'>¥%1</font>").arg(refundAmount, 0, 'f', 2));

                            QPushButton *confirmRefundButton = new QPushButton("确认");
                            confirmRefundButton->setFixedSize(60, 25);

                            QHBoxLayout *buttonLayout = new QHBoxLayout();
                            buttonLayout->addStretch();
                            buttonLayout->addWidget(confirmRefundButton);
                            buttonLayout->addStretch();

                            refundLayout->addWidget(messageLabel);
                            refundLayout->addLayout(buttonLayout);

                            connect(confirmRefundButton, &QPushButton::clicked, [=]() {
                                refundDialog->close();  // 关闭退票成功弹窗
                                emit onhome();
                                // changeTitle->hide();
                                // orderScrollArea->hide();
                            });

                            refundDialog->exec();  // 显示退票成功弹窗

                            // 关闭确认窗口
                            confirmDialog->close();
                        });

                        // 点击取消按钮，关闭确认窗口
                        connect(noButton, &QPushButton::clicked, [=]() {
                            confirmDialog->close();
                        });

                        confirmDialog->exec();  // 显示确认退票窗口
                    });

                    secondRowLayout->addWidget(refundButton);  // 将退票按钮添加到第二行
                } else if (orderStatus == "1") {
                    // orderStatus = "1", 显示 "已出行" 标签
                    QLabel *statusLabel = new QLabel("已出行");
                    statusLabel->setStyleSheet("font-size: 12px; color: green;");
                    statusWidget = statusLabel;
                    secondRowLayout->addWidget(statusWidget);  // 添加状态标签或按钮
                } else if (orderStatus == "2") {
                    // orderStatus = "2", 显示 "已改签" 标签
                    QLabel *statusLabel = new QLabel("已改签");
                    statusLabel->setStyleSheet("font-size: 12px; color: orange;");
                    statusWidget = statusLabel;
                    secondRowLayout->addWidget(statusWidget);  // 添加状态标签或按钮

                    QPushButton *refundButton = new QPushButton("退票");
                    refundButton->setStyleSheet(R"(
                        QPushButton {
                            background-color: #f94144; /* 红色背景 */
                            font-size: 12px;
                            padding: 5px;
                            border-radius: 5px;
                            color: white; /* 白色文字 */
                        }
                        QPushButton:hover {
                            background-color: #d90429; /* 深红色背景（悬停时） */
                        }
                    )");
                    refundButton->setFixedWidth(70);

                    connect(refundButton, &QPushButton::clicked, [=]() {
                        // 弹出确认退票窗口
                        QDialog *confirmDialog = new QDialog(changeFlightWidget);
                        confirmDialog->setWindowTitle("确认退票");
                        confirmDialog->setFixedSize(250, 120); // 窗口大小
                        QVBoxLayout *confirmLayout = new QVBoxLayout(confirmDialog);

                        QLabel *confirmLabel = new QLabel("确定退票吗？");
                        confirmLabel->setAlignment(Qt::AlignCenter);
                        confirmLabel->setStyleSheet("font-size: 14px;");

                        QPushButton *yesButton = new QPushButton("确认");
                        QPushButton *noButton = new QPushButton("取消");

                        QHBoxLayout *buttonLayout = new QHBoxLayout();
                        buttonLayout->addWidget(yesButton);
                        buttonLayout->addWidget(noButton);

                        confirmLayout->addWidget(confirmLabel);
                        confirmLayout->addLayout(buttonLayout);

                        // 点击确认按钮，执行退票操作
                        connect(yesButton, &QPushButton::clicked, [=]() {
                            // 执行退票操作：更新订单状态，更新剩余票数，显示退票金额
                            QSqlQuery updateQuery;
                            updateQuery.prepare("UPDATE orderlist SET orderStatus = '3' WHERE orderNumber = ?");
                            updateQuery.addBindValue(orderNumber);  // 使用 orderNumber 查找订单

                            if (!updateQuery.exec()) {
                                qDebug() << "Error updating order status: " << updateQuery.lastError().text();
                                confirmDialog->close(); // 关闭确认窗口
                                return;
                            }

                            // 更新剩余票数
                            QSqlQuery flightQuery;
                            double refundAmount = 0;
                            if (ExpensiveOrNot == "1") {
                                // 更新 expensiveoneRemaining
                                QSqlQuery updateRemainingQuery;
                                updateRemainingQuery.prepare("UPDATE flights SET expensiveoneRemaining = expensiveoneRemaining+1 WHERE flightNumber = :flightNumber");
                                updateRemainingQuery.bindValue(":flightNumber", flightNumber);

                                if (!updateRemainingQuery.exec()) {
                                    qDebug() << "Error updating expensiveoneRemaining: " << updateRemainingQuery.lastError().text();
                                }

                                // 获取退票金额（头等舱）
                                flightQuery.prepare("SELECT flightexpensiveMoney FROM flights WHERE flightNumber = :flightNumber");
                            } else {
                                // 更新 cheaponeRemaining
                                QSqlQuery updateRemainingQuery;
                                updateRemainingQuery.prepare("UPDATE flights SET cheaponeRemaining = cheaponeRemaining+1 WHERE flightNumber = :flightNumber");
                                updateRemainingQuery.bindValue(":flightNumber", flightNumber);

                                if (!updateRemainingQuery.exec()) {
                                    qDebug() << "Error updating cheaponeRemaining: " << updateRemainingQuery.lastError().text();
                                }

                                // 获取退票金额（经济舱）
                                flightQuery.prepare("SELECT flightcheapMoney FROM flights WHERE flightNumber = :flightNumber");
                            }

                            flightQuery.bindValue(":flightNumber", flightNumber);
                            if (!flightQuery.exec()) {
                                qDebug() << "Error executing flight query: " << flightQuery.lastError().text();
                                confirmDialog->close(); // 关闭确认窗口
                                return;
                            }

                            if (flightQuery.next()) {
                                refundAmount = flightQuery.value(0).toDouble();
                            }

                            // 弹窗显示“退票成功”并展示退还金额
                            QDialog *refundDialog = new QDialog(changeFlightWidget);
                            refundDialog->setWindowTitle("退票成功");
                            refundDialog->setFixedSize(220, 100); // 弹窗大小
                            QVBoxLayout *refundLayout = new QVBoxLayout(refundDialog);

                            QLabel *messageLabel = new QLabel();
                            messageLabel->setAlignment(Qt::AlignCenter);
                            messageLabel->setStyleSheet("font-size: 14px;");
                            messageLabel->setTextFormat(Qt::RichText);

                            // 绿色显示金额
                            messageLabel->setText(QString("退票成功\n已退还金额: <font color='green'>¥%1</font>").arg(refundAmount, 0, 'f', 2));

                            QPushButton *confirmRefundButton = new QPushButton("确认");
                            confirmRefundButton->setFixedSize(60, 25);

                            QHBoxLayout *buttonLayout = new QHBoxLayout();
                            buttonLayout->addStretch();
                            buttonLayout->addWidget(confirmRefundButton);
                            buttonLayout->addStretch();

                            refundLayout->addWidget(messageLabel);
                            refundLayout->addLayout(buttonLayout);

                            connect(confirmRefundButton, &QPushButton::clicked, [=]() {
                                refundDialog->close();  // 关闭退票成功弹窗
                                emit onhome();
                                // changeTitle->hide();
                                // orderScrollArea->hide();
                            });

                            refundDialog->exec();  // 显示退票成功弹窗

                            // 关闭确认窗口
                            confirmDialog->close();

                        });

                        // 点击取消按钮，关闭确认窗口
                        connect(noButton, &QPushButton::clicked, [=]() {
                            confirmDialog->close();
                        });

                        confirmDialog->exec();  // 显示确认退票窗口
                    });

                    secondRowLayout->addWidget(refundButton);  // 将退票按钮添加到第二行
                } else if (orderStatus == "3") {
                    // orderStatus = "3", 显示 "已退票" 标签
                    QLabel *statusLabel = new QLabel("已退票");
                    statusLabel->setStyleSheet("font-size: 12px; color: red;");
                    statusWidget = statusLabel;
                    secondRowLayout->addWidget(statusWidget);  // 添加状态标签或按钮
                }

                // 将第一行和第二行的布局分别加入到主布局中
                orderLayout->addLayout(firstRowLayout);  // 添加第一行
                orderLayout->addLayout(secondRowLayout); // 添加第二行

                // 设置框内布局
                orderFrame->setLayout(orderLayout);

                // 将每个订单框添加到订单列表布局中
                orderListLayout->addWidget(orderFrame);
            } else {
                qDebug() << "No flight information found for flight number: " << flightNumber;
            }
        }
        orderListLayout->addStretch(); // 占位

        // 添加订单列表到滚动区域
        orderListWidget->setLayout(orderListLayout);
        orderScrollArea->setWidget(orderListWidget);
        orderScrollArea->setWidgetResizable(true);

        // 将订单列表加入主布局
        changeFlightLayout->addWidget(orderScrollArea);
        changeFlightWidget->setLayout(changeFlightLayout);
        contentStack->addWidget(changeFlightWidget);    // 尝试！！

        contentStack->setCurrentWidget(changeFlightWidget); // 切换到改签航班界面
        // ---------------------------------------------------------------------
    });

    connect(searchButton, &QPushButton::clicked, [=]() {
        ticketScrollArea->show();             // 显示机票列表
        searchLayout->setAlignment(Qt::AlignLeft); // 改为左对齐
    });
    // 添加到内容切换区
    if(ischangewidget==0)
    {
        contentStack->setCurrentWidget(bookingWidget);
        setWindowTitle("预定机票界面");
        resize(900, 600);
    }
    else
    {
        changeFlightButton->click();//根本就没有进去！
    }
}

void Buyticket::openchangeticketsWindow(QString orderNumber, QString flightNumber, QString ExpensiveOrNot)
{
    // 隐藏主窗口
    //this->hide();

    // 检查是否已经打开了改签窗口，防止重复创建
    if (changeTicketsWindow != nullptr && changeTicketsWindow->isVisible()) {
        changeTicketsWindow->raise();
        changeTicketsWindow->activateWindow();
        return;
    }

    // 查询原航班信息
    QSqlQuery querypriFlight;
    querypriFlight.prepare("SELECT flightstart, flightend "
                           "FROM flights "
                           "WHERE flightNumber = :flightNumber ");
    // 绑定参数
    querypriFlight.bindValue(":flightNumber", flightNumber);
    querypriFlight.exec();

    // 获取原航班的出发地和目的地
    QString fromCity, toCity;
    if (querypriFlight.next()) {
        fromCity = querypriFlight.value(0).toString();
        toCity = querypriFlight.value(1).toString();
    } else {
        qDebug() << "未找到原航班信息";
        return;
    }

    // 查询原订单信息
    QSqlQuery querypriOrder;
    querypriOrder.prepare("SELECT flightDate "
                          "FROM orderlist "
                          "WHERE orderNumber = :orderNumber ");
    // 绑定参数
    querypriOrder.bindValue(":orderNumber", orderNumber);
    querypriOrder.exec();

    // 获取原航班的出发日期
    QString flightDate;
    if (querypriOrder.next()) {
        flightDate = querypriOrder.value(0).toString();
    } else {
        qDebug() << "未找到原航班信息";
        return;
    }

    // 创建改签窗口
    changeTicketsWindow = new QWidget();
    changeTicketsWindow->setFixedSize(900, 600); // 窗口大小固定为900x600

    // 主布局
    QVBoxLayout *mainLayout = new QVBoxLayout();

    // 窗口标题
    QLabel *titleLabel = new QLabel(QString("%1    ->    %2    %3    当日其它航班信息")
                                        .arg(fromCity)       // 出发地
                                        .arg(toCity)         // 目的地
                                        .arg(flightDate));   // 航班日期
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 16px; color: #006F79;");  // 设置文本颜色为灰色
    mainLayout->addWidget(titleLabel);

    // 创建滚动区域
    QScrollArea *scrollArea = new QScrollArea();
    scrollArea->setWidgetResizable(true); // 滚动区域内部大小可调整

    // 滚动区域内容部件
    QWidget *scrollWidget = new QWidget();
    QVBoxLayout *ticketListLayout = new QVBoxLayout(scrollWidget); // 将滚动内容绑定到布局

    // 清空之前的搜索结果
    QLayoutItem* item;
    while ((item = ticketListLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }
    QDate orderdate;
    QSqlQuery querz;
    querz.prepare("SELECT flightDate FROM orderlist where orderNumber = :orderNumber");
    querz.bindValue(":orderNumber",orderNumber);
    if(querz.exec())
    {
        orderdate = querz.value(0).toDate();
    }
    else{
        qDebug()<<"error";
    }


    // 查询数据库并显示所有航班信息（同一出发地和目的地的其他航班）
    QSqlQuery queryyyy;
    if(orderdate == QDate::currentDate())
    {
        queryyyy.prepare("SELECT flightNumber, flightStart, flightEnd, flightTimeStart, flightTimeEnd, "
                      "flightCheapMoney, flightExpensiveMoney, cheapOneRemaining, expensiveOneRemaining "
                      "FROM flights "
                      "WHERE flightstart = :fromCity AND flightEnd = :toCity "
                      "AND TIME(flightTimeStart) >= TIME(NOW()) "
                      "ORDER BY flightTimeStart ASC");
    }
    else
    {
        queryyyy.prepare("SELECT flightNumber, flightStart, flightEnd, flightTimeStart, flightTimeEnd, "
                      "flightCheapMoney, flightExpensiveMoney, cheapOneRemaining, expensiveOneRemaining "
                      "FROM flights "
                      "WHERE flightstart = :fromCity AND flightEnd = :toCity "
                      "ORDER BY flightTimeStart ASC");
    }
    queryyyy.bindValue(":fromCity", fromCity);
    queryyyy.bindValue(":toCity", toCity);
    queryyyy.exec();

    // 将查询结果展示到界面上
    while (queryyyy.next()) {
        QString newflightNumber = queryyyy.value(0).toString();  // 航班号
        QString flightStart = queryyyy.value(1).toString();   // 出发地
        QString flightEnd = queryyyy.value(2).toString();     // 目的地
        QString flightTimeStart = queryyyy.value(3).toString().left(8); // 起飞时间
        QString flightTimeEnd = queryyyy.value(4).toString().left(8);   // 到达时间
        QString flightCheapMoney = queryyyy.value(5).toString(); // 便宜舱位价格
        QString flightExpensiveMoney = queryyyy.value(6).toString(); // 贵舱位价格
        int cheapOneRemaining = queryyyy.value(7).toInt(); // 便宜舱位剩余数量
        int expensiveOneRemaining = queryyyy.value(8).toInt(); // 贵舱位剩余数量

        // 每个航班的容器
        QFrame *ticketFrame = new QFrame();
        ticketFrame->setStyleSheet(R"(
            QFrame {
                background-color: #e0f7fa; /* 浅蓝色背景 */
                border: 1px solid #b2ebf2; /* 浅蓝边框 */
                border-radius: 7px; /* 圆角 */
                padding: 2px;
            }
        )");
        ticketFrame->setFixedHeight(65); // 未展开时高度

        QVBoxLayout *ticketLayout = new QVBoxLayout(ticketFrame); // 在 ticketFrame 内部创建布局

        // 航班时间和航班号（可点击）
        ClickableLabel *headerLabel = new ClickableLabel();
        headerLabel->setText(QString("%1 —— %2  |  航班号: %3")
                                 .arg(flightTimeStart)    // 起飞时间
                                 .arg(flightTimeEnd)      // 到达时间
                                 .arg(newflightNumber));     // 航班号
        headerLabel->setAlignment(Qt::AlignCenter);
        headerLabel->setStyleSheet("font-size: 14px; font-weight: bold; color: #4b0082;");  // 设置字体大小、加粗和紫色

        // 隐藏的详细信息框
        QFrame *detailFrame = new QFrame();
        detailFrame->setFrameShape(QFrame::Box);
        detailFrame->setStyleSheet(R"(
            QFrame {
                background-color: #e0f7fa; /* 浅蓝色背景 */
                border: 1px solid #b2ebf2; /* 浅蓝边框 */
                border-radius: 7px; /* 圆角 */
                padding: 2px;
            }
            QFrame[expanded="true"] {
                background-color: #B0E0E6; /* 展开时的浅灰色背景--------------------------- */
                border-width: 0px 0px 0px 0px; /* 展开时边框变窄 */
                border-color: #D8B7DD; /* 浅蓝色边框 */
            }
        )");
        detailFrame->setVisible(false); // 默认隐藏
        detailFrame->setFixedHeight(100); // 设置展开后的高度

        // 设置一个属性来标识是否展开
        detailFrame->setProperty("expanded", false); // 默认未展开

        // 创建展开和收起的函数
        auto toggleDetailFrame = [detailFrame]() {
            bool expanded = detailFrame->property("expanded").toBool();
            if (expanded) {
                detailFrame->setProperty("expanded", false);
                detailFrame->setFixedHeight(65); // 收起时恢复高度
            } else {
                detailFrame->setProperty("expanded", true);
                detailFrame->setFixedHeight(100); // 展开时高度增加
            }
            detailFrame->style()->unpolish(detailFrame);  // 重新应用样式
            detailFrame->style()->polish(detailFrame);
            detailFrame->update(); // 更新界面
        };

        // 绑定事件（如点击headerLabel时展开或收起）
        headerLabel->setClickCallback(toggleDetailFrame);

        QVBoxLayout *detailLayout = new QVBoxLayout();

        // 头等舱信息
        QHBoxLayout *firstClassLayout = new QHBoxLayout();
        QLabel *firstClassLabel = new QLabel(QString("头等舱: ￥%1/人 (剩余%2张)").arg(flightExpensiveMoney).arg(expensiveOneRemaining));
        firstClassLabel->setStyleSheet("font-size: 12px; color: #4b0082;");
        firstClassLabel->setStyleSheet(R"(
            QLabel {
                background-color: #7EC8E3; /* 设置背景色为 #7EC8E3 */
                color: white; /* 设置字体颜色为白色 */
                font-size: 12px; /* 字体大小 */
                padding: 5px; /* 内边距 */
                border-radius: 5px; /* 圆角 */
            }
        )");
        QPushButton *firstClassButton = new QPushButton("改签为");
        firstClassButton->setStyleSheet(R"(
            QPushButton {
                background-color: #219ebc; /* 浅蓝色背景 */
                color: white;
                padding: 5px;
                border-radius: 5px;
                font-size: 12px;
            }
            QPushButton:hover {
                background-color: #8ecae6; /* 悬停时变深 */
            }
        )");
        firstClassButton->setFixedWidth(80);
        firstClassLayout->addWidget(firstClassLabel);
        firstClassLayout->addWidget(firstClassButton);
        detailLayout->addLayout(firstClassLayout);
        if(expensiveOneRemaining==0)firstClassButton->setEnabled(false);

        // 经济舱信息
        QHBoxLayout *economyClassLayout = new QHBoxLayout();
        QLabel *economyClassLabel = new QLabel(QString("经济舱: ￥%1/人 (剩余%2张)").arg(flightCheapMoney).arg(cheapOneRemaining));
        economyClassLabel->setStyleSheet("font-size: 12px; color: #4b0082;");
        economyClassLabel->setStyleSheet(R"(
            QLabel {
                background-color: #7EC8E3; /* 设置背景色为 #7EC8E3 */
                color: white; /* 设置字体颜色为白色 */
                font-size: 12px; /* 字体大小 */
                padding: 5px; /* 内边距 */
                border-radius: 5px; /* 圆角 */
            }
        )");
        QPushButton *economyClassButton = new QPushButton("改签为");
        economyClassButton->setStyleSheet(R"(
            QPushButton {
                background-color: #219ebc; /* 浅蓝色背景 */
                color: white;
                padding: 5px;
                border-radius: 5px;
                font-size: 12px;
            }
            QPushButton:hover {
                background-color: #8ecae6; /* 悬停时变深 */
            }
        )");
        economyClassButton->setFixedWidth(80);
        economyClassLayout->addWidget(economyClassLabel);
        economyClassLayout->addWidget(economyClassButton);
        detailLayout->addLayout(economyClassLayout);
        if(cheapOneRemaining==0)economyClassButton->setEnabled(false);
        detailFrame->setLayout(detailLayout);

        ticketLayout->addWidget(headerLabel);  // 将 headerLabel 添加到 ticketFrame 布局中
        ticketLayout->addWidget(detailFrame);  // 将 detailFrame 添加到 ticketFrame 布局中

        // 信号槽连接：点击时间与航班号标签
        connect(headerLabel, &ClickableLabel::clicked, [ticketFrame, detailFrame]() {
            bool isVisible = detailFrame->isVisible();
            detailFrame->setVisible(!isVisible);

            int newHeight = isVisible ? 60 : 140; // 展开后高度调整
            ticketFrame->setFixedHeight(newHeight);
        });

        // 在while循环内部直接处理改签逻辑
        connect(firstClassButton, &QPushButton::clicked, [this, orderNumber, flightNumber, newflightNumber, ExpensiveOrNot, cheapOneRemaining, expensiveOneRemaining]() {
            bool isFirstClass = true;
            double priceDifference = 0.0; // 差价

            int passengerCount = 1;  // 假设每次只改签一个乘客（如果有多个乘客，需要按实际乘客数调整）

            // 判断剩余票数是否足够
            int remainingTickets = (ExpensiveOrNot == "1") ? expensiveOneRemaining : cheapOneRemaining;

            if (remainingTickets < passengerCount) {
                // 剩余票数不足，弹出提示框
                QDialog *dialog = new QDialog(changeTicketsWindow);
                dialog->setWindowTitle("提示");
                dialog->setFixedSize(180, 80); // 弹窗大小

                QVBoxLayout *dialogLayout = new QVBoxLayout(dialog);

                // 提示信息
                QLabel *messageLabel = new QLabel("剩余票数不足，改签失败");
                messageLabel->setAlignment(Qt::AlignCenter);
                messageLabel->setStyleSheet("font-size: 14px;");

                // 确定按钮
                QPushButton *confirmButton = new QPushButton("确认");
                confirmButton->setFixedSize(60, 25);

                // 按钮布局
                QHBoxLayout *buttonLayout = new QHBoxLayout();
                buttonLayout->addStretch();
                buttonLayout->addWidget(confirmButton);
                buttonLayout->addStretch();

                // 添加到弹窗布局
                dialogLayout->addWidget(messageLabel);
                dialogLayout->addLayout(buttonLayout);

                // 确认按钮功能
                connect(confirmButton, &QPushButton::clicked, [this, dialog]() {
                    dialog->close();       // 关闭弹窗
                    changeTicketsWindow->close();
                    emit onhome();
                    // this->show();          // 显示主窗口
                });

                dialog->exec(); // 显示弹窗
            } else {
                // 获取当前航班的票价
                QSqlQuery currentFlightQuery;
                currentFlightQuery.prepare("SELECT flightExpensiveMoney, flightCheapMoney FROM flights WHERE flightNumber = ?");
                currentFlightQuery.addBindValue(flightNumber);  // 当前航班号

                if (!currentFlightQuery.exec()) {
                    qDebug() << "Error fetching current flight price: " << currentFlightQuery.lastError().text();
                    return;
                }

                double currentFlightPrice = 0;
                if (currentFlightQuery.next()) {
                    // 根据舱位类型选择对应的票价
                    currentFlightPrice = (ExpensiveOrNot == "1") ? currentFlightQuery.value(0).toDouble() : currentFlightQuery.value(1).toDouble();
                }

                // 获取改签航班的票价
                QSqlQuery newFlightQuery;
                newFlightQuery.prepare("SELECT flightExpensiveMoney, flightCheapMoney FROM flights WHERE flightNumber = ?");
                newFlightQuery.addBindValue(newflightNumber);  // 改签后的航班号

                if (!newFlightQuery.exec()) {
                    qDebug() << "Error fetching new flight price: " << newFlightQuery.lastError().text();
                    return;
                }

                double newFlightPrice = 0;
                if (newFlightQuery.next()) {
                    // 根据目标航班的舱位类型选择对应的票价
                    newFlightPrice = newFlightQuery.value(0).toDouble();
                }

                // 计算差价
                priceDifference = newFlightPrice - currentFlightPrice;

                // 更新新航班剩余票数
                QSqlQuery newqueryUpdate;
                newqueryUpdate.prepare("UPDATE flights SET expensiveOneRemaining = ?, cheapOneRemaining = ? WHERE flightNumber = ?");
                newqueryUpdate.addBindValue(expensiveOneRemaining - 1);  // 改签后目标航班头等舱剩余票数减少
                newqueryUpdate.addBindValue(cheapOneRemaining);  // 便宜舱位票数不变
                newqueryUpdate.addBindValue(newflightNumber);  // 更新的航班号

                if (!newqueryUpdate.exec()) {
                    qDebug() << "Error updating flight ticket count: " << newqueryUpdate.lastError().text();
                    return;
                }

                // 更新原航班剩余票数
                QSqlQuery queryUpdate;
                if (ExpensiveOrNot == "1") {
                    queryUpdate.prepare("UPDATE flights SET expensiveOneRemaining = expensiveOneRemaining+1 WHERE flightNumber = ?");
                } else {
                    queryUpdate.prepare("UPDATE flights SET cheapOneRemaining = cheapOneRemaining+1 WHERE flightNumber = ?");
                }
                queryUpdate.addBindValue(flightNumber);  // 更新的航班号

                if (!queryUpdate.exec()) {
                    qDebug() << "Error updating flight ticket count: " << queryUpdate.lastError().text();
                    return;
                }

                // 更新原订单的航班号和舱位类型
                QSqlQuery queryOrderUpdate;
                queryOrderUpdate.prepare("UPDATE orderlist SET flightNumber = ?, ExpensiveOrNot = ? WHERE orderNumber = ?");
                queryOrderUpdate.addBindValue(newflightNumber);  // 修改订单中的航班号
                queryOrderUpdate.addBindValue(isFirstClass ? "1" : "0");  // 修改订单中的舱位类型
                queryOrderUpdate.addBindValue(orderNumber);  // 修改的订单号

                if (!queryOrderUpdate.exec()) {
                    qDebug() << "Error updating order list: " << queryOrderUpdate.lastError().text();
                    return;
                }

                // 增加：修改订单状态为“已改签” (orderStatus = 2)
                QSqlQuery queryStatusUpdate;
                queryStatusUpdate.prepare("UPDATE orderlist SET orderStatus = ? WHERE orderNumber = ?");
                queryStatusUpdate.addBindValue("2");  // 改签后的状态为“已改签”
                queryStatusUpdate.addBindValue(orderNumber);  // 修改的订单号

                if (!queryStatusUpdate.exec()) {
                    qDebug() << "Error updating order status: " << queryStatusUpdate.lastError().text();
                    return;
                }

                // 弹出成功提示框
                QDialog *dialog = new QDialog(changeTicketsWindow);
                dialog->setWindowTitle("改签成功");
                dialog->setFixedSize(200, 80); // 弹窗大小

                QVBoxLayout *dialogLayout = new QVBoxLayout(dialog);

                // 提示信息
                QLabel *messageLabel = new QLabel();
                messageLabel->setAlignment(Qt::AlignCenter);
                messageLabel->setStyleSheet("font-size: 14px;");

                // 根据差价显示信息
                if (priceDifference > 0) {
                    messageLabel->setText(QString("已补差价: <font color='green'>¥%1</font>").arg(priceDifference, 0, 'f', 2));
                } else if (priceDifference < 0) {
                    messageLabel->setText(QString("已退差价: <font color='green'>¥%1</font>").arg(-priceDifference, 0, 'f', 2));
                } else {
                    messageLabel->setText("没有差价需要支付");
                }

                // 确定按钮
                QPushButton *confirmButton = new QPushButton("确认");
                confirmButton->setFixedSize(60, 25);

                // 按钮布局
                QHBoxLayout *buttonLayout = new QHBoxLayout();
                buttonLayout->addStretch();
                buttonLayout->addWidget(confirmButton);
                buttonLayout->addStretch();

                // 添加到弹窗布局
                dialogLayout->addWidget(messageLabel);
                dialogLayout->addLayout(buttonLayout);

                // 确认按钮功能
                connect(confirmButton, &QPushButton::clicked, [this, dialog]() {
                    dialog->close();       // 关闭弹窗
                    changeTicketsWindow->close();
                    emit onhome();
                    // this->show();          // 显示主窗口
                });

                dialog->exec(); // 显示弹窗
            }
        });

        // 在while循环内部直接处理改签逻辑
        connect(economyClassButton, &QPushButton::clicked, [this, orderNumber, flightNumber, newflightNumber, ExpensiveOrNot, cheapOneRemaining, expensiveOneRemaining]() {
            bool isFirstClass = false;
            double priceDifference = 0.0; // 差价

            int passengerCount = 1;  // 假设每次只改签一个乘客（如果有多个乘客，需要按实际乘客数调整）

            // 判断剩余票数是否足够
            int remainingTickets = (ExpensiveOrNot == "1") ? expensiveOneRemaining : cheapOneRemaining;

            if (remainingTickets < passengerCount) {
                // 剩余票数不足，弹出提示框
                QDialog *dialog = new QDialog(changeTicketsWindow);
                dialog->setWindowTitle("提示");
                dialog->setFixedSize(180, 80); // 弹窗大小

                QVBoxLayout *dialogLayout = new QVBoxLayout(dialog);

                // 提示信息
                QLabel *messageLabel = new QLabel("剩余票数不足，改签失败");
                messageLabel->setAlignment(Qt::AlignCenter);
                messageLabel->setStyleSheet("font-size: 14px;");

                // 确定按钮
                QPushButton *confirmButton = new QPushButton("确认");
                confirmButton->setFixedSize(60, 25);

                // 按钮布局
                QHBoxLayout *buttonLayout = new QHBoxLayout();
                buttonLayout->addStretch();
                buttonLayout->addWidget(confirmButton);
                buttonLayout->addStretch();

                // 添加到弹窗布局
                dialogLayout->addWidget(messageLabel);
                dialogLayout->addLayout(buttonLayout);

                // 确认按钮功能
                connect(confirmButton, &QPushButton::clicked, [this, dialog]() {
                    dialog->close();       // 关闭弹窗
                    changeTicketsWindow->close();
                    emit onhome();
                    // this->show();          // 显示主窗口
                });

                dialog->exec(); // 显示弹窗
            } else {
                // 剩余票数足够，更新票数，执行改签操作

                // 获取当前航班的票价
                QSqlQuery currentFlightQuery;
                currentFlightQuery.prepare("SELECT flightExpensiveMoney, flightCheapMoney FROM flights WHERE flightNumber = ?");
                currentFlightQuery.addBindValue(flightNumber);  // 当前航班号

                if (!currentFlightQuery.exec()) {
                    qDebug() << "Error fetching current flight price: " << currentFlightQuery.lastError().text();
                    return;
                }

                double currentFlightPrice = 0;
                if (currentFlightQuery.next()) {
                    // 根据舱位类型选择对应的票价
                    currentFlightPrice = (ExpensiveOrNot == "1") ? currentFlightQuery.value(0).toDouble() : currentFlightQuery.value(1).toDouble();
                }

                // 获取改签航班的票价
                QSqlQuery newFlightQuery;
                newFlightQuery.prepare("SELECT flightExpensiveMoney, flightCheapMoney FROM flights WHERE flightNumber = ?");
                newFlightQuery.addBindValue(newflightNumber);  // 改签后的航班号

                if (!newFlightQuery.exec()) {
                    qDebug() << "Error fetching new flight price: " << newFlightQuery.lastError().text();
                    return;
                }

                double newFlightPrice = 0;
                if (newFlightQuery.next()) {
                    // 根据目标航班的舱位类型选择对应的票价
                    newFlightPrice = newFlightQuery.value(1).toDouble();
                }

                // 计算差价
                priceDifference = newFlightPrice - currentFlightPrice;

                // 更新新航班剩余票数
                QSqlQuery newqueryUpdate;
                newqueryUpdate.prepare("UPDATE flights SET expensiveOneRemaining = ?, cheapOneRemaining = ? WHERE flightNumber = ?");
                newqueryUpdate.addBindValue(expensiveOneRemaining);  // 头等舱票数不变
                newqueryUpdate.addBindValue(cheapOneRemaining - 1);  // 改签后目标航班经济舱剩余票数减少
                newqueryUpdate.addBindValue(newflightNumber);  // 更新的航班号

                if (!newqueryUpdate.exec()) {
                    qDebug() << "Error updating flight ticket count: " << newqueryUpdate.lastError().text();
                    return;
                }

                // 更新原航班剩余票数
                QSqlQuery queryUpdate;
                if (ExpensiveOrNot == "1") {
                    queryUpdate.prepare("UPDATE flights SET expensiveOneRemaining = expensiveOneRemaining+1 WHERE flightNumber = ?");
                } else {
                    queryUpdate.prepare("UPDATE flights SET cheapOneRemaining = cheapOneRemaining+1 WHERE flightNumber = ?");
                }
                queryUpdate.addBindValue(flightNumber);  // 更新的航班号

                if (!queryUpdate.exec()) {
                    qDebug() << "Error updating flight ticket count: " << queryUpdate.lastError().text();
                    return;
                }

                // 更新原订单的航班号和舱位类型
                QSqlQuery queryOrderUpdate;
                queryOrderUpdate.prepare("UPDATE orderlist SET flightNumber = ?, ExpensiveOrNot = ? WHERE orderNumber = ?");
                queryOrderUpdate.addBindValue(newflightNumber);  // 修改订单中的航班号
                queryOrderUpdate.addBindValue(isFirstClass ? "1" : "0");  // 修改订单中的舱位类型
                queryOrderUpdate.addBindValue(orderNumber);  // 修改的订单号

                if (!queryOrderUpdate.exec()) {
                    qDebug() << "Error updating order list: " << queryOrderUpdate.lastError().text();
                    return;
                }

                // 增加：修改订单状态为“已改签” (orderStatus = 2)
                QSqlQuery queryStatusUpdate;
                queryStatusUpdate.prepare("UPDATE orderlist SET orderStatus = ? WHERE orderNumber = ?");
                queryStatusUpdate.addBindValue("2");  // 改签后的状态为“已改签”
                queryStatusUpdate.addBindValue(orderNumber);  // 修改的订单号

                if (!queryStatusUpdate.exec()) {
                    qDebug() << "Error updating order status: " << queryStatusUpdate.lastError().text();
                    return;
                }

                // 弹出成功提示框
                QDialog *dialog = new QDialog(changeTicketsWindow);
                dialog->setWindowTitle("改签成功");
                dialog->setFixedSize(200, 80); // 弹窗大小

                QVBoxLayout *dialogLayout = new QVBoxLayout(dialog);

                // 提示信息
                QLabel *messageLabel = new QLabel();
                messageLabel->setAlignment(Qt::AlignCenter);
                messageLabel->setStyleSheet("font-size: 14px;");

                // 根据差价显示信息
                if (priceDifference > 0) {
                    messageLabel->setText(QString("已补差价: <font color='green'>¥%1</font>").arg(priceDifference, 0, 'f', 2));
                } else if (priceDifference < 0) {
                    messageLabel->setText(QString("已退差价: <font color='green'>¥%1</font>").arg(-priceDifference, 0, 'f', 2));
                } else {
                    messageLabel->setText("没有差价需要支付");
                }

                // 确定按钮
                QPushButton *confirmButton = new QPushButton("确认");
                confirmButton->setFixedSize(60, 25);

                // 按钮布局
                QHBoxLayout *buttonLayout = new QHBoxLayout();
                buttonLayout->addStretch();
                buttonLayout->addWidget(confirmButton);
                buttonLayout->addStretch();

                // 添加到弹窗布局
                dialogLayout->addWidget(messageLabel);
                dialogLayout->addLayout(buttonLayout);

                // 确认按钮功能
                connect(confirmButton, &QPushButton::clicked, [this, dialog]() {
                    dialog->close();       // 关闭弹窗
                    changeTicketsWindow->close();
                    emit onhome();
                    // this->show();          // 显示主窗口
                });

                dialog->exec(); // 显示弹窗
            }
        });

        // 将票务框架添加到布局中
        ticketListLayout->addWidget(ticketFrame);
    }

    // 将滚动内容绑定到滚动区域
    scrollWidget->setLayout(ticketListLayout);
    scrollArea->setWidget(scrollWidget);

    // 添加滚动区域到主布局
    mainLayout->addWidget(scrollArea);

    // 返回按钮布局
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    QPushButton *returnButton = new QPushButton("返回");
    returnButton->setStyleSheet(R"(
        QPushButton {
            background-color: #219ebc; /* 按钮默认背景颜色：浅蓝色 */
            color: white;              /* 按钮字体颜色 */
            padding: 2px 15px;         /* 按钮内边距 */
            border-radius: 5px;        /* 圆角边框 */
            font-size: 14px;           /* 字体大小 */
        }
        QPushButton:hover {
            background-color: #8ecae6; /* 悬停时的颜色：浅蓝色更深一些 */
        }
        QPushButton:pressed {
            background-color: #006f79; /* 按下时的颜色：深蓝色 */
        }
    )");
    buttonLayout->addStretch();
    buttonLayout->addWidget(returnButton);
    buttonLayout->addStretch();
    mainLayout->addLayout(buttonLayout);

    // 返回按钮功能
    connect(returnButton, &QPushButton::clicked, [this]() {
        changeTicketsWindow->close();
        emit onhome();
        // this->show(); // 显示主窗口
    });

    // 设置主布局并显示窗口
    changeTicketsWindow->setLayout(mainLayout);
    changeTicketsWindow->show();
}

void Buyticket::openPurchaseWindow(QString flightNumber, QString flightDate, QString ExpensiveOrNot)
{
    // 隐藏主窗口
    //this->hide();

    // 检查是否已经打开了购买窗口，防止重复创建
    if (purchaseWindow != nullptr && purchaseWindow->isVisible()) {
        purchaseWindow->raise();
        purchaseWindow->activateWindow();
        return;
    }

    // 创建购买窗口
    purchaseWindow = new QWidget();
    purchaseWindow->setWindowTitle("填写订单");
    purchaseWindow->resize(900, 600); // 窗口大小调整为900*600

    // 布局
    QVBoxLayout *mainLayout = new QVBoxLayout();

    // 订单填写标题
    QLabel *titleLabel = new QLabel("填写订单");
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 18px; font-weight: bold;");
    mainLayout->addWidget(titleLabel);

    // 航班信息
    QSqlQuery query;
    query.prepare("SELECT flightstart, flightend, flightTimeStart, flightTimeEnd, flightExpensiveMoney, flightCheapMoney "
                  "FROM flights "
                  "WHERE flightNumber = :flightNumber");
    query.bindValue(":flightNumber", flightNumber);

    double flightPrice = 0; // 用来保存当前票价

    if (query.exec() && query.next()) {
        // 从查询结果中获取航班信息
        QString flightStart = query.value(0).toString();   // 出发地
        QString flightEnd = query.value(1).toString();     // 目的地
        QString flightTimeStart = query.value(2).toString().left(8); // 起飞时间
        QString flightTimeEnd = query.value(3).toString().left(8);   // 到达时间
        double flightExpensiveMoney = query.value(4).toDouble(); // 头等舱票价
        double flightCheapMoney = query.value(5).toDouble();     // 经济舱票价

        // 根据舱位选择票价
        flightPrice = (ExpensiveOrNot == "1") ? flightExpensiveMoney : flightCheapMoney;

        // 使用 QFormLayout 来整齐显示信息
        QFormLayout *flightInfoLayout = new QFormLayout();

        // 创建标签
        QLabel *fromLabel = new QLabel(flightStart); // 出发地
        QLabel *toLabel = new QLabel(flightEnd);     // 目的地
        QLabel *timeLabel = new QLabel(QString("%1 —— %2").arg(flightTimeStart).arg(flightTimeEnd)); // 时间范围
        QLabel *flightNumberLabel = new QLabel(flightNumber); // 航班号
        QLabel *classLabel = new QLabel(ExpensiveOrNot == "1" ? "头等舱" : "经济舱"); // 根据舱位显示头等舱或经济舱

        // 使用 QFormLayout 显示字段
        flightInfoLayout->addRow("出发地:", fromLabel);
        flightInfoLayout->addRow("目的地:", toLabel);
        flightInfoLayout->addRow("时间:", timeLabel);
        flightInfoLayout->addRow("航班号:", flightNumberLabel);
        flightInfoLayout->addRow("舱位:", classLabel);

        // 将布局添加到主布局中
        mainLayout->addLayout(flightInfoLayout);
    } else {
        qDebug() << "Error fetching flight info: " << query.lastError().text();
    }

    // 乘机人信息填写
    QGroupBox *passengerGroup = new QGroupBox("乘机人信息填写");
    QHBoxLayout *passengerLayout = new QHBoxLayout();
    QLabel *nameLabel = new QLabel("姓名:");
    QLineEdit *nameEdit = new QLineEdit();
    nameEdit->setMaximumWidth(300); // 输入框宽度调整为布局宽度的1/3
    QPushButton *addPassengerButton = new QPushButton("添加乘机人");

    passengerLayout->addWidget(nameLabel);
    passengerLayout->addWidget(nameEdit);
    passengerLayout->addWidget(addPassengerButton);
    passengerGroup->setLayout(passengerLayout);
    mainLayout->addWidget(passengerGroup);

    // 乘机人信息列表
    QGroupBox *passengerListGroup = new QGroupBox("乘机人信息列表");
    QVBoxLayout *passengerListLayout = new QVBoxLayout();
    QTableWidget *passengerTable = new QTableWidget(0, 2); // 初始无行
    passengerTable->setHorizontalHeaderLabels(QStringList() << "姓名" << "联系人");
    passengerTable->setColumnWidth(1, 150);

    passengerListLayout->addWidget(passengerTable);
    passengerListGroup->setLayout(passengerListLayout);
    mainLayout->addWidget(passengerListGroup);

    // 显示总金额的标签
    QLabel *totalAmountLabel = new QLabel("总金额: ¥0.00");
    totalAmountLabel->setStyleSheet("font-size: 16px; font-weight: bold; color: green;");
    totalAmountLabel->setAlignment(Qt::AlignRight);
    mainLayout->addWidget(totalAmountLabel);

    // 返回和确认并支付按钮
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    QPushButton *returnButton = new QPushButton("返回");
    QPushButton *confirmAndPayButton = new QPushButton("确认并支付");
    buttonLayout->addWidget(returnButton);
    buttonLayout->addWidget(confirmAndPayButton);
    mainLayout->addLayout(buttonLayout);

    // 计算并更新总金额
    auto updateTotalAmount = [=]() {
        int passengerCount = passengerTable->rowCount();
        double totalAmount = passengerCount * flightPrice;
        totalAmountLabel->setText(QString("总金额: ¥%1").arg(totalAmount, 0, 'f', 2));
    };

    // 添加乘机人功能
    connect(addPassengerButton, &QPushButton::clicked, [=]() {
        QString name = nameEdit->text().trimmed();
        if (!name.isEmpty()) {
            int row = passengerTable->rowCount();
            passengerTable->insertRow(row);
            passengerTable->setItem(row, 0, new QTableWidgetItem(name));
            passengerTable->setItem(row, 1, new QTableWidgetItem("联系人: " + account));
            nameEdit->clear(); // 清空输入框

            // 更新总金额
            updateTotalAmount();
        }
    });

    // 返回按钮的功能
    connect(returnButton, &QPushButton::clicked, [this]() {
        purchaseWindow->close();
        emit onhome();
    });

    // 确认并支付按钮功能
    connect(confirmAndPayButton, &QPushButton::clicked, [=]() {
        if (passengerTable->rowCount() == 0) {
            // 未添加乘机人，弹出提示框
            QDialog *dialog = new QDialog();
            dialog->setWindowTitle("提示");
            dialog->resize(200, 100); // 调整弹窗大小

            QVBoxLayout *layout = new QVBoxLayout(dialog);

            // 提示文字
            QLabel *messageLabel = new QLabel("请添加至少一个乘机人");
            messageLabel->setAlignment(Qt::AlignCenter); // 文字居中
            messageLabel->setStyleSheet("font-size: 16px; font-weight: bold;"); // 调整字体样式
            layout->addWidget(messageLabel);

            // 确认按钮
            QPushButton *okButton = new QPushButton("确认");
            okButton->setFixedSize(80, 30); // 按钮大小固定
            okButton->setStyleSheet("font-size: 14px;"); // 按钮字体样式
            QHBoxLayout *buttonLayout = new QHBoxLayout();
            buttonLayout->addStretch();
            buttonLayout->addWidget(okButton); // 将按钮放置到居中位置
            buttonLayout->addStretch();
            layout->addLayout(buttonLayout);

            // 确认按钮功能
            connect(okButton, &QPushButton::clicked, dialog, &QDialog::accept);

            dialog->exec(); // 模态弹窗
            dialog->deleteLater(); // 释放内存

        } else {
            // 执行支付操作
            // 获取乘机人数
            int passengerCount = passengerTable->rowCount();

            // 查询数据库获取剩余票数
            QSqlQuery query;
            query.prepare("SELECT expensiveoneRemaining, cheaponeRemaining FROM flights WHERE flightNumber = ?");
            query.addBindValue(flightNumber);

            if (!query.exec()) {
                qDebug() << "Error executing query: " << query.lastError().text();
                return;
            }

            if (query.next()) {
                int remainingExpensive = query.value(0).toInt();
                int remainingCheap = query.value(1).toInt();

                // 根据选择的舱位（ExpensiveOrNot）检查剩余票数
                bool isExpensive = (ExpensiveOrNot == "1"); // 头等舱
                int remainingTickets = isExpensive ? remainingExpensive : remainingCheap;

                if (remainingTickets < passengerCount) {
                    // 剩余票数不足，弹出提示框
                    QDialog *dialog = new QDialog();
                    dialog->setWindowTitle("提示");
                    dialog->resize(200, 100); // 调整弹窗大小

                    QVBoxLayout *layout = new QVBoxLayout(dialog);

                    // 提示文字
                    QLabel *messageLabel = new QLabel("剩余票数不足，支付失败");
                    messageLabel->setAlignment(Qt::AlignCenter); // 文字居中
                    messageLabel->setStyleSheet("font-size: 16px; font-weight: bold;"); // 调整字体样式
                    layout->addWidget(messageLabel);

                    // 确认按钮
                    QPushButton *okButton = new QPushButton("确认");
                    okButton->setFixedSize(80, 30); // 按钮大小固定
                    okButton->setStyleSheet("font-size: 14px;"); // 按钮字体样式
                    QHBoxLayout *buttonLayout = new QHBoxLayout();
                    buttonLayout->addStretch();
                    buttonLayout->addWidget(okButton); // 将按钮放置到居中位置
                    buttonLayout->addStretch();
                    layout->addLayout(buttonLayout);

                    // 确认按钮功能
                    connect(okButton, &QPushButton::clicked, [=]() {
                        dialog->accept();

                        // 关闭购买窗口并显示主窗口
                        purchaseWindow->close();
                        emit onhome();
                    });

                    dialog->exec(); // 模态弹窗
                    dialog->deleteLater(); // 释放内存

                } else {
                    // 剩余票数足够，减少剩余票数并插入订单
                    query.prepare("UPDATE flights SET expensiveoneRemaining = ?, cheaponeRemaining = ? WHERE flightNumber = ?");
                    if (isExpensive) {
                        query.addBindValue(remainingExpensive - passengerCount);
                        query.addBindValue(remainingCheap);
                    } else {
                        query.addBindValue(remainingExpensive);
                        query.addBindValue(remainingCheap - passengerCount);
                    }
                    query.addBindValue(flightNumber);

                    if (!query.exec()) {
                        qDebug() << "Error updating flight data: " << query.lastError().text();
                        return;
                    }

                    // 弹出支付成功提示框
                    QDialog *dialog = new QDialog();
                    dialog->setWindowTitle("提示");
                    dialog->resize(120, 60); // 调整弹窗大小

                    QVBoxLayout *layout = new QVBoxLayout(dialog);

                    // 提示文字
                    QLabel *messageLabel = new QLabel("支付成功");
                    messageLabel->setAlignment(Qt::AlignCenter); // 文字居中
                    messageLabel->setStyleSheet("font-size: 16px; font-weight: bold;"); // 调整字体样式
                    layout->addWidget(messageLabel);

                    // 确认按钮
                    QPushButton *okButton = new QPushButton("确认");
                    okButton->setFixedSize(80, 30); // 按钮大小固定
                    okButton->setStyleSheet("font-size: 14px;"); // 按钮字体样式
                    QHBoxLayout *buttonLayout = new QHBoxLayout();
                    buttonLayout->addStretch();
                    buttonLayout->addWidget(okButton); // 将按钮放置到居中位置
                    buttonLayout->addStretch();
                    layout->addLayout(buttonLayout);

                    // 确认按钮功能
                    connect(okButton, &QPushButton::clicked, [=]() {
                        dialog->accept();

                        // 开始插入订单数据到数据库
                        QSqlQuery insertQuery;
                        for (int row = 0; row < passengerTable->rowCount(); ++row) {
                            QString passengerName = passengerTable->item(row, 0)->text();
                            insertQuery.prepare("INSERT INTO orderlist (orderNumber, flightNumber, passengerName, ExpensiveOrNot, account, orderStatus, flightDate) "
                                                "VALUES (:orderNumber, :flightNumber, :passengerName, :ExpensiveOrNot, :account, :orderStatus, :flightDate)");
                            insertQuery.bindValue(":orderNumber",OrderNumber);
                            insertQuery.bindValue(":flightNumber",flightNumber);
                            insertQuery.bindValue(":passengerName",passengerName);
                            insertQuery.bindValue(":ExpensiveOrNot",ExpensiveOrNot);
                            insertQuery.bindValue(":account",account);
                            insertQuery.bindValue(":orderStatus",0);
                            insertQuery.bindValue(":flightDate",flightDate);

                            if (!insertQuery.exec()) {
                                qDebug() << "Error inserting into orderlist: " << insertQuery.lastError().text();
                            }
                            // 订单号自增
                            OrderNumber++;
                        }

                        // 关闭购买窗口并显示主窗口
                        purchaseWindow->close();
                        emit onhome();
                    });

                    dialog->exec(); // 模态弹窗
                    dialog->deleteLater(); // 释放内存
                }
            } else {
                qDebug() << "No flight found for the provided flight number";
            }
        }
    });
    // 设置窗口的布局
    purchaseWindow->setLayout(mainLayout);
    purchaseWindow->show();
}

Buyticket::~Buyticket()
{
    if (purchaseWindow) {
        delete purchaseWindow;
    }
}
