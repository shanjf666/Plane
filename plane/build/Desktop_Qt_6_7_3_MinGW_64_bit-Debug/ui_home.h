/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Mainimglabel;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *Personbtn;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *Newsbtn;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QToolButton *Selectbtn;
    QToolButton *Changebtn;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *fromlbl;
    QComboBox *Frombox;
    QLabel *imglbl;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *tolbl;
    QComboBox *Tobox;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *datelbl;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *Searchbtn;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *mlabel1;
    QToolButton *toolButton_2;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLabel *mlabel2;
    QToolButton *toolButton_3;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLabel *mlabel3;
    QToolButton *toolButton_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(1013, 584);
        Home->setAutoFillBackground(true);
        Home->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, -1, 0);
        Mainimglabel = new QLabel(widget_3);
        Mainimglabel->setObjectName("Mainimglabel");
        Mainimglabel->setPixmap(QPixmap(QString::fromUtf8(":/img/logo(1).png")));
        Mainimglabel->setScaledContents(true);
        Mainimglabel->setWordWrap(false);
        Mainimglabel->setMargin(0);

        horizontalLayout_3->addWidget(Mainimglabel);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        Personbtn = new QToolButton(widget_3);
        Personbtn->setObjectName("Personbtn");
        Personbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Personbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 10pt \"\351\273\221\344\275\223\";\n"
"border: none;\n"
"border-radius: 20px;\n"
"padding: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/per.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Personbtn->setIcon(icon);
        Personbtn->setIconSize(QSize(25, 25));
        Personbtn->setCheckable(false);
        Personbtn->setPopupMode(QToolButton::ToolButtonPopupMode::DelayedPopup);
        Personbtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        Personbtn->setAutoRaise(true);

        horizontalLayout_3->addWidget(Personbtn);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        Newsbtn = new QToolButton(widget_3);
        Newsbtn->setObjectName("Newsbtn");
        sizePolicy.setHeightForWidth(Newsbtn->sizePolicy().hasHeightForWidth());
        Newsbtn->setSizePolicy(sizePolicy);
        Newsbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Newsbtn->setStyleSheet(QString::fromUtf8("font: 700 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"border: none;\n"
"border-radius: 20px;\n"
"padding: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/news.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Newsbtn->setIcon(icon1);
        Newsbtn->setIconSize(QSize(25, 25));
        Newsbtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(Newsbtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_7->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(60, 90, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer);

        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(widget_8);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(40, 0, 40, 0);
        widget_6 = new QWidget(widget_8);
        widget_6->setObjectName("widget_6");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, -1, -1, 0);
        toolButton = new QToolButton(widget_6);
        toolButton->setObjectName("toolButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);
        toolButton->setStyleSheet(QString::fromUtf8("\n"
"font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius:10px;\n"
"padding: 10px;"));
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);

        Selectbtn = new QToolButton(widget_6);
        Selectbtn->setObjectName("Selectbtn");
        sizePolicy2.setHeightForWidth(Selectbtn->sizePolicy().hasHeightForWidth());
        Selectbtn->setSizePolicy(sizePolicy2);
        Selectbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Selectbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));
        Selectbtn->setAutoRaise(true);

        horizontalLayout_2->addWidget(Selectbtn);

        Changebtn = new QToolButton(widget_6);
        Changebtn->setObjectName("Changebtn");
        sizePolicy2.setHeightForWidth(Changebtn->sizePolicy().hasHeightForWidth());
        Changebtn->setSizePolicy(sizePolicy2);
        Changebtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Changebtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));
        Changebtn->setAutoRaise(true);

        horizontalLayout_2->addWidget(Changebtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(widget_6);

        widget = new QWidget(widget_8);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setMinimumSize(QSize(0, 0));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 6, -1, -1);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        fromlbl = new QLabel(widget_2);
        fromlbl->setObjectName("fromlbl");

        verticalLayout->addWidget(fromlbl);

        Frombox = new QComboBox(widget_2);
        Frombox->setObjectName("Frombox");
        Frombox->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Frombox->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius: 3px;   /* \345\234\206\350\247\222 */\n"
"    padding: 1px 18px 1px 3px;   /* \345\255\227\344\275\223\345\241\253\350\241\254 */\n"
"	color: rgb(0, 0, 0);\n"
"    font: normal normal 15px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border: 1px solid yellow;   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\276\271\346\241\206 */\n"
"    color: black;\n"
"    background-color: rgb(0, 25"
                        "5, 255);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    selection-background-color: rgb(0, 170, 255);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    padding-left:3px;/*\350\276\271\350\267\235\357\274\210\350\277\230\346\234\211\345\205\266\344\273\226\346\226\271\345\220\221\350\276\271\350\267\235\350\256\276\347\275\256\346\226\271\345\274\217\357\274\211*/\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 50px;   /* \351\241\271\347\232\204\351\253\230\345\272\246\357\274\210\350\256\276\347\275\256pComboBox->setView(new QListView());\345\220\216\357\274\214\350\257\245\351\241\271"
                        "\346\211\215\350\265\267\344\275\234\347\224\250\357\274\211 */\n"
"    padding-left:3px;/*\350\276\271\350\267\235\357\274\210\350\277\230\346\234\211\345\205\266\344\273\226\346\226\271\345\220\221\350\276\271\350\267\235\350\256\276\347\275\256\346\226\271\345\274\217\357\274\211*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: rgb(0, 170, 255);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232"
                        "\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color: #FFFFFF;\n"
"    background-color: rgb(0, 170, 255);\n"
"}\n"
" \n"
"/* QComboBox\344\270\255\347\232\204\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 */\n"
"QComboBox QAbstractScrollArea QScrollBar:vertical {\n"
"    width: 10px;\n"
"    background-color: #d0d2d4;   /* \347\251\272\347\231\275\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"}\n"
" \n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical {\n"
"    border-radius: 5px;   /* \345\234\206\350\247\222 */\n"
"    background: rgb(160,160,160);   /* \345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262\346\267\261\347\201\260lightblue */\n"
"}\n"
" \n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {\n"
"    background: rgb(90, 91, 93);   /* \350\266\212\350\277\207\345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262yellow */\n"
""
                        "}\n"
" \n"
"\n"
" \n"
"/* \347\202\271\345\207\273QComboBox */\n"
"QComboBox:on {\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;   /* \345\255\220\346\216\247\344\273\266\345\234\250\347\210\266\345\205\203\347\264\240\344\270\255\347\232\204\345\216\237\347\202\271\347\237\251\345\275\242\343\200\202\345\246\202\346\236\234\346\234\252\346\214\207\345\256\232\346\255\244\345\261\236\346\200\247\357\274\214\345\210\231\351\273\230\350\256\244\344\270\272padding\343\200\202 */\n"
"    subcontrol-position: top right;   /* \344\270\213\346\213\211\346\241\206\347\232\204\344\275\215\347\275\256\357\274\210\345\217\263\344\270\212\357\274\211 */\n"
"    width: 15px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\256\275\345\272\246 */\n"
" \n"
"    border-left-width: 1px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\345\256\275\345\272\246 */\n"
"   "
                        " border-left-color: darkgray;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\351\242\234\350\211\262 */\n"
"    border-left-style: solid;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\344\270\272\345\256\236\347\272\277 */\n"
"    border-top-right-radius: 3px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\217\263\344\270\212\350\276\271\347\225\214\347\272\277\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\357\274\210\345\272\224\345\222\214\346\225\264\344\270\252QComboBox\345\217\263\344\270\212\350\276\271\347\225\214\347\272\277\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\344\270\200\350\207\264\357\274\211 */\n"
"    border-bottom-right-radius: 3px;   /* \345\220\214\344\270\212 */\n"
"}\n"
" \n"
"\343\200\200/* \350\266\212\350\277\207\344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
" \n"
"\343\200\200QComboBox::drop-down:hover {\n"
" \n"
""
                        "\343\200\200\343\200\200\343\200\200background: yellow;\n"
" \n"
"\343\200\200}\n"
" \n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */\n"
" QComboBox::down-arrow {\n"
"\343\200\200\343\200\200width: 15px; /* \344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\345\256\275\345\272\246\357\274\210\345\273\272\350\256\256\344\270\216\344\270\213\346\213\211\346\241\206drop-down\347\232\204\345\256\275\345\272\246\344\270\200\350\207\264\357\274\211 */ \n"
"\343\200\200\343\200\200background: transparent; /* \344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\347\232\204\350\203\214\346\231\257\350\211\262 */ \n"
"\343\200\200\343\200\200padding: 0px 0px 0px 0px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
" \n"
"\343\200\200\343\200\200image: url(:/images/combobox_arrow_do"
                        "wn.png);\n"
" } \n"
" \n"
"/* \347\202\271\345\207\273\344\270\213\346\213\211\347\256\255\345\244\264 */\n"
" QComboBox::down-arrow:on { \n"
"\343\200\200\343\200\200image: url(:/images/combobox_arrow_up.png); /* \346\230\276\347\244\272\344\270\213\346\213\211\347\256\255\345\244\264 */\n"
" }"));
        Frombox->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        Frombox->setFrame(true);

        verticalLayout->addWidget(Frombox);


        horizontalLayout->addWidget(widget_2);

        imglbl = new QLabel(widget);
        imglbl->setObjectName("imglbl");
        imglbl->setPixmap(QPixmap(QString::fromUtf8(":/img/trans.png")));
        imglbl->setScaledContents(true);

        horizontalLayout->addWidget(imglbl);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tolbl = new QLabel(widget_4);
        tolbl->setObjectName("tolbl");

        verticalLayout_2->addWidget(tolbl);

        Tobox = new QComboBox(widget_4);
        Tobox->setObjectName("Tobox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setBold(false);
        font.setItalic(false);
        Tobox->setFont(font);
        Tobox->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Tobox->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius: 3px;   /* \345\234\206\350\247\222 */\n"
"    padding: 1px 18px 1px 3px;   /* \345\255\227\344\275\223\345\241\253\350\241\254 */\n"
"	color: rgb(0, 0, 0);\n"
"    font: normal normal 15px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border: 1px solid yellow;   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\276\271\346\241\206 */\n"
"    color: black;\n"
"    background-color: rgb(0, 25"
                        "5, 255);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    selection-background-color: rgb(0, 170, 255);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    padding-left:3px;/*\350\276\271\350\267\235\357\274\210\350\277\230\346\234\211\345\205\266\344\273\226\346\226\271\345\220\221\350\276\271\350\267\235\350\256\276\347\275\256\346\226\271\345\274\217\357\274\211*/\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 50px;   /* \351\241\271\347\232\204\351\253\230\345\272\246\357\274\210\350\256\276\347\275\256pComboBox->setView(new QListView());\345\220\216\357\274\214\350\257\245\351\241\271"
                        "\346\211\215\350\265\267\344\275\234\347\224\250\357\274\211 */\n"
"    padding-left:3px;/*\350\276\271\350\267\235\357\274\210\350\277\230\346\234\211\345\205\266\344\273\226\346\226\271\345\220\221\350\276\271\350\267\235\350\256\276\347\275\256\346\226\271\345\274\217\357\274\211*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: rgb(0, 170, 255);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232"
                        "\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color: #FFFFFF;\n"
"    background-color: rgb(0, 170, 255);\n"
"}\n"
" \n"
"/* QComboBox\344\270\255\347\232\204\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 */\n"
"QComboBox QAbstractScrollArea QScrollBar:vertical {\n"
"    width: 10px;\n"
"    background-color: #d0d2d4;   /* \347\251\272\347\231\275\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"}\n"
" \n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical {\n"
"    border-radius: 5px;   /* \345\234\206\350\247\222 */\n"
"    background: rgb(160,160,160);   /* \345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262\346\267\261\347\201\260lightblue */\n"
"}\n"
" \n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {\n"
"    background: rgb(90, 91, 93);   /* \350\266\212\350\277\207\345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262yellow */\n"
""
                        "}\n"
" \n"
"\n"
" \n"
"/* \347\202\271\345\207\273QComboBox */\n"
"QComboBox:on {\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;   /* \345\255\220\346\216\247\344\273\266\345\234\250\347\210\266\345\205\203\347\264\240\344\270\255\347\232\204\345\216\237\347\202\271\347\237\251\345\275\242\343\200\202\345\246\202\346\236\234\346\234\252\346\214\207\345\256\232\346\255\244\345\261\236\346\200\247\357\274\214\345\210\231\351\273\230\350\256\244\344\270\272padding\343\200\202 */\n"
"    subcontrol-position: top right;   /* \344\270\213\346\213\211\346\241\206\347\232\204\344\275\215\347\275\256\357\274\210\345\217\263\344\270\212\357\274\211 */\n"
"    width: 15px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\256\275\345\272\246 */\n"
" \n"
"    border-left-width: 1px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\345\256\275\345\272\246 */\n"
"   "
                        " border-left-color: darkgray;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\351\242\234\350\211\262 */\n"
"    border-left-style: solid;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\344\270\272\345\256\236\347\272\277 */\n"
"    border-top-right-radius: 3px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\217\263\344\270\212\350\276\271\347\225\214\347\272\277\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\357\274\210\345\272\224\345\222\214\346\225\264\344\270\252QComboBox\345\217\263\344\270\212\350\276\271\347\225\214\347\272\277\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\344\270\200\350\207\264\357\274\211 */\n"
"    border-bottom-right-radius: 3px;   /* \345\220\214\344\270\212 */\n"
"}\n"
" \n"
"\343\200\200/* \350\266\212\350\277\207\344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
" \n"
"\343\200\200QComboBox::drop-down:hover {\n"
" \n"
""
                        "\343\200\200\343\200\200\343\200\200background: yellow;\n"
" \n"
"\343\200\200}\n"
" \n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */\n"
" QComboBox::down-arrow {\n"
"\343\200\200\343\200\200width: 15px; /* \344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\345\256\275\345\272\246\357\274\210\345\273\272\350\256\256\344\270\216\344\270\213\346\213\211\346\241\206drop-down\347\232\204\345\256\275\345\272\246\344\270\200\350\207\264\357\274\211 */ \n"
"\343\200\200\343\200\200background: transparent; /* \344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\347\232\204\350\203\214\346\231\257\350\211\262 */ \n"
"\343\200\200\343\200\200padding: 0px 0px 0px 0px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
" \n"
"\343\200\200\343\200\200image: url(:/images/combobox_arrow_do"
                        "wn.png);\n"
" } \n"
" \n"
"/* \347\202\271\345\207\273\344\270\213\346\213\211\347\256\255\345\244\264 */\n"
" QComboBox::down-arrow:on { \n"
"\343\200\200\343\200\200image: url(:/images/combobox_arrow_up.png); /* \346\230\276\347\244\272\344\270\213\346\213\211\347\256\255\345\244\264 */\n"
" }\n"
" \n"
" "));

        verticalLayout_2->addWidget(Tobox);


        horizontalLayout->addWidget(widget_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        datelbl = new QLabel(widget_5);
        datelbl->setObjectName("datelbl");

        verticalLayout_3->addWidget(datelbl);

        dateEdit = new QDateEdit(widget_5);
        dateEdit->setObjectName("dateEdit");
        QFont font1;
        font1.setPointSize(9);
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QString::fromUtf8("/* QCalendarWidget \346\225\264\344\275\223\346\240\267\345\274\217 */\n"
"    QCalendarWidget {\n"
"        background-color: #FFFFFF;        /* \350\203\214\346\231\257\350\211\262 */\n"
"        border: 1px solid #4CAF50;        /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"        border-radius: 8px;               /* \345\234\206\350\247\222 */\n"
"        font-family: 'Arial';              /* \345\255\227\344\275\223 */\n"
"        font-size: 12px;                  /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"        padding: 10px;                    /* \345\206\205\350\276\271\350\267\235 */\n"
"    }\n"
"\n"
"    /* QCalendarWidget QAbstractItemView (\346\227\245\346\234\237\345\214\272\345\237\237) */\n"
"    QCalendarWidget QAbstractItemView {\n"
"        color: #333333;                   /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"        background-color: #f0f0f0;        /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262 */\n"
"        border-ra"
                        "dius: 6px;               /* \345\234\206\350\247\222 */\n"
"    }\n"
"\n"
"    /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\227\245\346\234\237\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QAbstractItemView::item:hover {\n"
"        background-color: #A5D6A7;        /* \346\202\254\345\201\234\350\203\214\346\231\257\350\211\262 */\n"
"    }\n"
"\n"
"    /* \351\200\211\344\270\255\346\227\245\346\234\237\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QAbstractItemView::item:selected {\n"
"        background-color: #4CAF50;        /* \351\200\211\344\270\255\346\227\245\346\234\237\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"        color: white;                     /* \351\200\211\344\270\255\346\227\245\346\234\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    }\n"
"\n"
"    /* \347\246\201\347\224\250\346\227\245\346\234\237\346\214\211\351\222\256\347\232\204\346\240\267"
                        "\345\274\217 */\n"
"    QCalendarWidget QAbstractItemView::item:disabled {\n"
"        background-color: #e0e0e0;        /* \347\246\201\347\224\250\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"        color: #b0b0b0;                   /* \347\246\201\347\224\250\346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    }\n"
"\n"
"    /* \350\256\276\347\275\256\345\275\223\345\211\215\346\227\245\346\234\237\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QAbstractItemView::item[current] {\n"
"        background-color: #FFEB3B;        /* \345\275\223\345\211\215\346\227\245\346\234\237\350\203\214\346\231\257\350\211\262 */\n"
"        color: #333333;                   /* \345\275\223\345\211\215\346\227\245\346\234\237\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"        font-weight: bold;                /* \345\275\223\345\211\215\346\227\245\346\234\237\345\212\240\347\262\227 */\n"
"    }\n"
"\n"
" "
                        "   /* \350\256\276\347\275\256\346\227\245\346\234\237\346\214\211\351\222\256\347\232\204\345\234\206\350\247\222 */\n"
"    QCalendarWidget QAbstractItemView::item {\n"
"        border-radius: 6px;               /* \346\227\245\346\234\237\346\214\211\351\222\256\347\232\204\345\234\206\350\247\222 */\n"
"        padding: 5px;                     /* \346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    }\n"
"\n"
"    /* \346\234\210\344\273\275\345\210\207\346\215\242\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    QCalendarWidget QToolButton {\n"
"        background-color: #FFFFFF;        /* \346\214\211\351\222\256\350\203\214\346\231\257\350\211\262 */\n"
"        border: 1px solid #4CAF50;        /* \346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"        border-radius: 16px;              /* \345\234\206\345\275\242\346\214\211\351\222\256 */\n"
"        height: 32px;\n"
"        width: 60px;\n"
"    }\n"
"\n"
"    /* \346\234\210\344\273\275\345\210\207\346"
                        "\215\242\346\214\211\351\222\256\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QToolButton:hover {\n"
"        background-color: #4CAF50;        /* \346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"        color: white;                     /* \346\202\254\345\201\234\346\227\266\347\232\204\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    }\n"
"\n"
"    /* \346\234\210\344\273\275\345\210\207\346\215\242\346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QToolButton:pressed {\n"
"        background-color: #388E3C;        /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    }\n"
"\n"
"    /* \346\230\237\346\234\237\345\207\240\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    QCalendarWidget QToolButton::menu-indicator {\n"
"        image: url(:/i"
                        "cons/menu-indicator.png); /* \350\256\276\347\275\256\350\217\234\345\215\225\346\214\207\347\244\272\347\254\246 */\n"
"		font_size:6px;\n"
"        subcontrol-position: right center;\n"
"    }\n"
"\n"
"    /* \346\230\237\346\234\237\345\207\240\346\214\211\351\222\256 (\346\230\237\346\234\237\344\270\200\345\210\260\346\230\237\346\234\237\346\227\245) */\n"
"    QCalendarWidget QToolButton {\n"
"        font-weight: bold;                /* \345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"        background-color: #4CAF50;        /* \350\203\214\346\231\257\350\211\262\344\270\272\347\273\277\350\211\262 */\n"
"        color: white;                     /* \345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"        border: none;                     /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"        border-radius: 5px;               /* \345\234\206\350\247\222 */\n"
"        height: 40px;\n"
"        width: 40px;                      /* \345\256\275"
                        "\351\253\230\344\270\200\350\207\264 */\n"
"        margin: 2px;                      /* \346\214\211\351\222\256\351\227\264\350\267\235 */\n"
"    }\n"
"\n"
"	/* \346\230\237\346\234\237\346\214\211\351\222\256\346\226\207\346\234\254\347\232\204\345\236\202\347\233\264\346\260\264\345\271\263\345\261\205\344\270\255 */\n"
"    QCalendarWidget QToolButton::menu-indicator {\n"
"        text-align: center;\n"
"        vertical-align: middle;\n"
"    }\n"
"\n"
"\n"
"    /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\230\237\346\234\237\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QToolButton:hover {\n"
"        background-color: #388E3C;        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\350\211\262 */\n"
"        color: white;                     /* \346\202\254\345\201\234\346\227\266\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    }\n"
"\n"
"    /* \345\271\264\344\273\275\351\200\211\346\213\251\346\241"
                        "\206\347\232\204\346\240\267\345\274\217 */\n"
"    QCalendarWidget QSpinBox {\n"
"        background-color: #FFFFFF;        /* \350\203\214\346\231\257\350\211\262 */\n"
"        border: 1px solid #4CAF50;        /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"        border-radius: 6px;               /* \345\234\206\350\247\222 */\n"
"        padding: 5px;\n"
"        font-size: 14px;                  /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"        width: 80px;                      /* \345\256\275\345\272\246 */\n"
"    }\n"
"\n"
"    /* \345\271\264\344\273\275\351\200\211\346\213\251\346\241\206\346\226\207\346\234\254\351\200\211\346\213\251\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QSpinBox::up-button, QCalendarWidget QSpinBox::down-button {\n"
"        border: none;                     /* \345\216\273\346\216\211\344\270\212\344\270\213\347\256\255\345\244\264\347\232\204\350\276\271\346\241\206 */\n"
"    }\n"
"\n"
"    /* \345\271"
                        "\264\344\273\275\351\200\211\346\213\251\346\241\206\346\226\207\346\234\254\347\232\204\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"    QCalendarWidget QSpinBox:hover {\n"
"        background-color: #A5D6A7;        /* \346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    }\n"
"\n"
"    /* \345\271\264\344\273\275\351\200\211\346\213\251\346\241\206\347\232\204\347\256\255\345\244\264\346\240\267\345\274\217 */\n"
"    QCalendarWidget QSpinBox::up-button {\n"
"        background-color: #4CAF50;        /* \347\256\255\345\244\264\350\203\214\346\231\257\350\211\262 */\n"
"        border-radius: 3px;               /* \345\234\206\350\247\222 */\n"
"    }\n"
"\n"
"    /* \345\271\264\344\273\275\351\200\211\346\213\251\346\241\206\347\232\204\345\220\221\344\270\213\347\256\255\345\244\264 */\n"
"    QCalendarWidget QSpinBox::down-button {\n"
"        background-color: #4CAF50;        /* \347\256\255\345\244\264\350\203\214\346\231\257\350\211\262 */\n"
"      "
                        "  border-radius: 3px;               /* \345\234\206\350\247\222 */\n"
"    }\n"
"\n"
"    /* \345\271\264\344\273\275\351\200\211\346\213\251\346\241\206\344\270\212\344\270\213\346\214\211\351\222\256\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    QCalendarWidget QSpinBox::up-button:hover, QCalendarWidget QSpinBox::down-button:hover {\n"
"        background-color: #388E3C;        /* \346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    }"));
        dateEdit->setAccelerated(false);
        dateEdit->setKeyboardTracking(true);
        dateEdit->setProperty("showGroupSeparator", QVariant(false));
        dateEdit->setDateTime(QDateTime(QDate(2023, 12, 29), QTime(16, 0, 0)));
        dateEdit->setCalendarPopup(true);

        verticalLayout_3->addWidget(dateEdit);


        horizontalLayout->addWidget(widget_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Searchbtn = new QToolButton(widget);
        Searchbtn->setObjectName("Searchbtn");
        Searchbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Searchbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));
        Searchbtn->setAutoRaise(true);

        horizontalLayout->addWidget(Searchbtn);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout_4->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_7->addWidget(widget_8);

        verticalSpacer_5 = new QSpacerItem(10, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_5);

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName("widget_7");
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName("widget_9");
        verticalLayout_5 = new QVBoxLayout(widget_9);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(widget_9);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_5->addWidget(label_4);

        mlabel1 = new QLabel(widget_9);
        mlabel1->setObjectName("mlabel1");
        mlabel1->setScaledContents(true);

        verticalLayout_5->addWidget(mlabel1);

        toolButton_2 = new QToolButton(widget_9);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));

        verticalLayout_5->addWidget(toolButton_2);


        horizontalLayout_4->addWidget(widget_9);

        widget_10 = new QWidget(widget_7);
        widget_10->setObjectName("widget_10");
        verticalLayout_6 = new QVBoxLayout(widget_10);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(widget_10);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_6->addWidget(label_5);

        mlabel2 = new QLabel(widget_10);
        mlabel2->setObjectName("mlabel2");
        mlabel2->setScaledContents(true);

        verticalLayout_6->addWidget(mlabel2);

        toolButton_3 = new QToolButton(widget_10);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));

        verticalLayout_6->addWidget(toolButton_3);


        horizontalLayout_4->addWidget(widget_10);

        widget_12 = new QWidget(widget_7);
        widget_12->setObjectName("widget_12");
        verticalLayout_8 = new QVBoxLayout(widget_12);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(widget_12);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("\n"
"font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_8->addWidget(label_8);

        mlabel3 = new QLabel(widget_12);
        mlabel3->setObjectName("mlabel3");
        mlabel3->setScaledContents(true);

        verticalLayout_8->addWidget(mlabel3);

        toolButton_5 = new QToolButton(widget_12);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));

        verticalLayout_8->addWidget(toolButton_5);


        horizontalLayout_4->addWidget(widget_12);


        verticalLayout_7->addWidget(widget_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "MainWindow", nullptr));
        Mainimglabel->setText(QString());
#if QT_CONFIG(statustip)
        Personbtn->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        Personbtn->setText(QCoreApplication::translate("Home", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        Newsbtn->setText(QCoreApplication::translate("Home", "\351\200\232\347\237\245", nullptr));
        toolButton->setText(QCoreApplication::translate("Home", "\345\233\275\345\206\205/\345\233\275\351\231\205\345\207\272\345\217\221", nullptr));
        Selectbtn->setText(QCoreApplication::translate("Home", "\351\242\204\350\256\242\346\234\272\347\245\250", nullptr));
        Changebtn->setText(QCoreApplication::translate("Home", "\351\200\200\347\245\250\346\224\271\347\255\276", nullptr));
        fromlbl->setText(QCoreApplication::translate("Home", "\345\207\272\345\217\221", nullptr));
        imglbl->setText(QString());
        tolbl->setText(QCoreApplication::translate("Home", "\345\210\260\350\276\276", nullptr));
        datelbl->setText(QCoreApplication::translate("Home", "\346\227\245\346\234\237", nullptr));
        Searchbtn->setText(QCoreApplication::translate("Home", "\346\220\234\347\264\242", nullptr));
#if QT_CONFIG(shortcut)
        Searchbtn->setShortcut(QCoreApplication::translate("Home", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("Home", "\345\271\277\345\267\236->\345\214\227\344\272\254 300\345\205\203\350\265\267", nullptr));
        mlabel1->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Home", "\350\264\255\344\271\260", nullptr));
        label_5->setText(QCoreApplication::translate("Home", "\344\270\212\346\265\267->\345\271\277\345\267\236 200\345\205\203\350\265\267", nullptr));
        mlabel2->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Home", "\350\264\255\344\271\260", nullptr));
        label_8->setText(QCoreApplication::translate("Home", "\346\255\246\346\261\211->\344\270\212\346\265\267 220\350\265\267", nullptr));
        mlabel3->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
        toolButton_5->setText(QCoreApplication::translate("Home", "\350\264\255\344\271\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
