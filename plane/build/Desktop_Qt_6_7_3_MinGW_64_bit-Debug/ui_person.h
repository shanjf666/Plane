/********************************************************************************
** Form generated from reading UI file 'person.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSON_H
#define UI_PERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Person
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *MyButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *secureButton;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *SecureWidget;
    QLabel *nameLabel;
    QTextEdit *nameText;
    QLabel *accountLabel;
    QTextEdit *accountText;
    QLabel *label;
    QPushButton *changepasswordButton;
    QPushButton *logoutButton;
    QWidget *MyWidget;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *nameLabel2;
    QTextEdit *nameText2;
    QLabel *accountLabel2;
    QTextEdit *accountText2;
    QSpacerItem *verticalSpacer_5;
    QTabWidget *orderTabWidget;
    QWidget *allorderWidget;
    QScrollArea *ordersArea1;
    QWidget *ordersWidget1;
    QWidget *waitTaborderWidget;
    QScrollArea *ordersArea2;
    QWidget *ordersWidget2;
    QWidget *completedorderWidget;
    QScrollArea *ordersArea3;
    QWidget *ordersWidget3;

    void setupUi(QWidget *Person)
    {
        if (Person->objectName().isEmpty())
            Person->setObjectName("Person");
        Person->resize(1000, 800);
        Person->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(Person);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        widget_2 = new QWidget(Person);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(150, 0));
        widget_2->setMaximumSize(QSize(150, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(130, 80));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #007BFF; /* \350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"            color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"            border: none;\n"
"            border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"            padding: 1px;\n"
"            font-size: 14px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #0056b3; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\357\274\214\350\203\214\346\231\257\345\217\230\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"        }"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        MyButton = new QPushButton(widget_2);
        MyButton->setObjectName("MyButton");
        MyButton->setMinimumSize(QSize(130, 80));
        MyButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #007BFF; /* \350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"            color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"            border: none;\n"
"            border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"            padding: 1px;\n"
"            font-size: 14px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #0056b3; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\357\274\214\350\203\214\346\231\257\345\217\230\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"        }"));

        verticalLayout->addWidget(MyButton);

        verticalSpacer_4 = new QSpacerItem(20, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        secureButton = new QPushButton(widget_2);
        secureButton->setObjectName("secureButton");
        secureButton->setMinimumSize(QSize(130, 80));
        secureButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #007BFF; /* \350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"            color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"            border: none;\n"
"            border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"            padding: 1px;\n"
"            font-size: 14px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #0056b3; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\357\274\214\350\203\214\346\231\257\345\217\230\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"        }"));

        verticalLayout->addWidget(secureButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget_2);

        stackedWidget = new QStackedWidget(Person);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        SecureWidget = new QWidget();
        SecureWidget->setObjectName("SecureWidget");
        nameLabel = new QLabel(SecureWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(160, 100, 71, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        nameLabel->setFont(font);
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 20px; /* \345\255\227\344\275\223\345\244\247\345\260\217\357\274\210\345\212\240\345\244\247\357\274\211 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}"));
        nameText = new QTextEdit(SecureWidget);
        nameText->setObjectName("nameText");
        nameText->setEnabled(false);
        nameText->setGeometry(QRect(230, 100, 281, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        nameText->setFont(font1);
        nameText->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #f9f9f9; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    selection-background-color: #a0cfff; /* \351\200\211\344\270\255\346\226\207\346\234\254\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"\n"
"}"));
        accountLabel = new QLabel(SecureWidget);
        accountLabel->setObjectName("accountLabel");
        accountLabel->setGeometry(QRect(160, 170, 71, 51));
        accountLabel->setFont(font);
        accountLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 20px; /* \345\255\227\344\275\223\345\244\247\345\260\217\357\274\210\345\212\240\345\244\247\357\274\211 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}"));
        accountText = new QTextEdit(SecureWidget);
        accountText->setObjectName("accountText");
        accountText->setEnabled(false);
        accountText->setGeometry(QRect(230, 170, 281, 51));
        accountText->setFont(font1);
        accountText->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #f9f9f9; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    selection-background-color: #a0cfff; /* \351\200\211\344\270\255\346\226\207\346\234\254\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"\n"
"}"));
        label = new QLabel(SecureWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 240, 221, 51));
        QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);
        changepasswordButton = new QPushButton(SecureWidget);
        changepasswordButton->setObjectName("changepasswordButton");
        changepasswordButton->setGeometry(QRect(410, 250, 91, 41));
        changepasswordButton->setStyleSheet(QString::fromUtf8("background-color: #e53935;color: white;font-size: 14px;font-family: \"Arial\", sans-serif;font-weight: bold;  border: 2px solid #005A9E;  border-radius: 5px; transition: all 0.3s ease; \n"
"hover background-color: #d32f2f ; hover border: 2px solid #004578; \n"
"pressed background-color: #004578;pressed border: 2px solid #002F5D; pressed color: #D6EFFF; "));
        logoutButton = new QPushButton(SecureWidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(410, 310, 91, 41));
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #e53935;color: white;font-size: 14px;font-family: \"Arial\", sans-serif;font-weight: bold;  border: 2px solid #005A9E;  border-radius: 5px; transition: all 0.3s ease; \n"
"hover background-color: #d32f2f ; hover border: 2px solid #004578; \n"
"pressed background-color: #004578;pressed border: 2px solid #002F5D; pressed color: #D6EFFF; "));
        stackedWidget->addWidget(SecureWidget);
        MyWidget = new QWidget();
        MyWidget->setObjectName("MyWidget");
        widget_3 = new QWidget(MyWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 30, 881, 781));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        nameLabel2 = new QLabel(widget);
        nameLabel2->setObjectName("nameLabel2");
        nameLabel2->setFont(font);
        nameLabel2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 20px; /* \345\255\227\344\275\223\345\244\247\345\260\217\357\274\210\345\212\240\345\244\247\357\274\211 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}"));

        horizontalLayout_3->addWidget(nameLabel2);

        nameText2 = new QTextEdit(widget);
        nameText2->setObjectName("nameText2");
        nameText2->setEnabled(false);
        nameText2->setFont(font1);
        nameText2->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #f9f9f9; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    selection-background-color: #a0cfff; /* \351\200\211\344\270\255\346\226\207\346\234\254\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"\n"
"}"));

        horizontalLayout_3->addWidget(nameText2);

        accountLabel2 = new QLabel(widget);
        accountLabel2->setObjectName("accountLabel2");
        accountLabel2->setFont(font);
        accountLabel2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 20px; /* \345\255\227\344\275\223\345\244\247\345\260\217\357\274\210\345\212\240\345\244\247\357\274\211 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}"));

        horizontalLayout_3->addWidget(accountLabel2);

        accountText2 = new QTextEdit(widget);
        accountText2->setObjectName("accountText2");
        accountText2->setEnabled(false);
        accountText2->setFont(font1);
        accountText2->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #f9f9f9; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"Arial\", \"Helvetica\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    selection-background-color: #a0cfff; /* \351\200\211\344\270\255\346\226\207\346\234\254\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"\n"
"}"));

        horizontalLayout_3->addWidget(accountText2);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        orderTabWidget = new QTabWidget(widget_3);
        orderTabWidget->setObjectName("orderTabWidget");
        orderTabWidget->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setPointSize(12);
        orderTabWidget->setFont(font3);
        orderTabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
"    width: 100px; \n"
"    height: 40px; \n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"	background-color: rgb(85, 255, 255)\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        orderTabWidget->setTabPosition(QTabWidget::TabPosition::North);
        orderTabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        orderTabWidget->setIconSize(QSize(30, 30));
        orderTabWidget->setElideMode(Qt::TextElideMode::ElideLeft);
        orderTabWidget->setTabBarAutoHide(false);
        allorderWidget = new QWidget();
        allorderWidget->setObjectName("allorderWidget");
        allorderWidget->setStyleSheet(QString::fromUtf8(""));
        ordersArea1 = new QScrollArea(allorderWidget);
        ordersArea1->setObjectName("ordersArea1");
        ordersArea1->setGeometry(QRect(0, 0, 821, 600));
        ordersArea1->setMinimumSize(QSize(0, 0));
        ordersArea1->setMaximumSize(QSize(1677215, 16777215));
        ordersArea1->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"                background-color: #333333; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"                border: none; /* \345\216\273\351\231\244\351\273\230\350\256\244\350\276\271\346\241\206 */\n"
"                border-radius: 7px; /* \345\233\233\350\247\222\345\234\206\345\274\247 */\n"
"                padding: 2px; /* \345\206\205\350\276\271\350\267\235 */\n"
"            }"));
        ordersArea1->setWidgetResizable(true);
        ordersWidget1 = new QWidget();
        ordersWidget1->setObjectName("ordersWidget1");
        ordersWidget1->setGeometry(QRect(0, 0, 817, 596));
        ordersWidget1->setMinimumSize(QSize(0, 0));
        ordersWidget1->setMaximumSize(QSize(16777215, 16777215));
        ordersWidget1->setStyleSheet(QString::fromUtf8("            QWidget {\n"
"                background-color: #333333; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"                border-radius: 7px; /* \345\233\233\350\247\222\345\234\206\345\274\247 */\n"
"            }"));
        ordersArea1->setWidget(ordersWidget1);
        orderTabWidget->addTab(allorderWidget, QString());
        waitTaborderWidget = new QWidget();
        waitTaborderWidget->setObjectName("waitTaborderWidget");
        ordersArea2 = new QScrollArea(waitTaborderWidget);
        ordersArea2->setObjectName("ordersArea2");
        ordersArea2->setGeometry(QRect(0, 0, 821, 600));
        ordersArea2->setMinimumSize(QSize(0, 0));
        ordersArea2->setMaximumSize(QSize(1677215, 16777215));
        ordersArea2->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"                background-color: #333333; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"                border: none; /* \345\216\273\351\231\244\351\273\230\350\256\244\350\276\271\346\241\206 */\n"
"                border-radius: 7px; /* \345\233\233\350\247\222\345\234\206\345\274\247 */\n"
"                padding: 2px; /* \345\206\205\350\276\271\350\267\235 */\n"
"            }"));
        ordersArea2->setWidgetResizable(true);
        ordersWidget2 = new QWidget();
        ordersWidget2->setObjectName("ordersWidget2");
        ordersWidget2->setGeometry(QRect(0, 0, 817, 596));
        ordersWidget2->setStyleSheet(QString::fromUtf8("            QWidget {\n"
"                background-color: #333333; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"                border-radius: 7px; /* \345\233\233\350\247\222\345\234\206\345\274\247 */\n"
"            }"));
        ordersArea2->setWidget(ordersWidget2);
        orderTabWidget->addTab(waitTaborderWidget, QString());
        completedorderWidget = new QWidget();
        completedorderWidget->setObjectName("completedorderWidget");
        ordersArea3 = new QScrollArea(completedorderWidget);
        ordersArea3->setObjectName("ordersArea3");
        ordersArea3->setGeometry(QRect(0, 0, 821, 600));
        ordersArea3->setMinimumSize(QSize(0, 0));
        ordersArea3->setMaximumSize(QSize(1677215, 16777215));
        ordersArea3->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"                background-color: #333333; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"                border: none; /* \345\216\273\351\231\244\351\273\230\350\256\244\350\276\271\346\241\206 */\n"
"                border-radius: 7px; /* \345\233\233\350\247\222\345\234\206\345\274\247 */\n"
"                padding: 2px; /* \345\206\205\350\276\271\350\267\235 */\n"
"            }"));
        ordersArea3->setWidgetResizable(true);
        ordersWidget3 = new QWidget();
        ordersWidget3->setObjectName("ordersWidget3");
        ordersWidget3->setGeometry(QRect(0, 0, 817, 596));
        ordersWidget3->setStyleSheet(QString::fromUtf8("            QWidget {\n"
"                background-color: #333333; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"                border-radius: 7px; /* \345\233\233\350\247\222\345\234\206\345\274\247 */\n"
"            }"));
        ordersArea3->setWidget(ordersWidget3);
        orderTabWidget->addTab(completedorderWidget, QString());

        verticalLayout_2->addWidget(orderTabWidget);

        stackedWidget->addWidget(MyWidget);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(Person);

        stackedWidget->setCurrentIndex(1);
        orderTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Person);
    } // setupUi

    void retranslateUi(QWidget *Person)
    {
        Person->setWindowTitle(QCoreApplication::translate("Person", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Person", "\344\270\273\351\241\265", nullptr));
        MyButton->setText(QCoreApplication::translate("Person", "\346\210\221\347\232\204\351\246\226\351\241\265", nullptr));
        secureButton->setText(QCoreApplication::translate("Person", "\350\264\246\345\217\267\345\256\211\345\205\250", nullptr));
        nameLabel->setText(QCoreApplication::translate("Person", "\346\230\265\347\247\260\357\274\232", nullptr));
        accountLabel->setText(QCoreApplication::translate("Person", "\350\264\246\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Person", "\347\231\273\345\275\225\345\257\206\347\240\201   \345\273\272\350\256\256\345\256\232\346\234\237\346\233\264\346\215\242", nullptr));
        changepasswordButton->setText(QCoreApplication::translate("Person", "\344\277\256\346\224\271", nullptr));
        logoutButton->setText(QCoreApplication::translate("Person", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        nameLabel2->setText(QCoreApplication::translate("Person", "\346\230\265\347\247\260\357\274\232", nullptr));
        accountLabel2->setText(QCoreApplication::translate("Person", "\350\264\246\345\217\267\357\274\232", nullptr));
        orderTabWidget->setTabText(orderTabWidget->indexOf(allorderWidget), QCoreApplication::translate("Person", "\345\205\250\351\203\250\350\256\242\345\215\225", nullptr));
        orderTabWidget->setTabText(orderTabWidget->indexOf(waitTaborderWidget), QCoreApplication::translate("Person", "\345\276\205\345\207\272\350\241\214", nullptr));
        orderTabWidget->setTabText(orderTabWidget->indexOf(completedorderWidget), QCoreApplication::translate("Person", "\345\267\262\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Person: public Ui_Person {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSON_H
