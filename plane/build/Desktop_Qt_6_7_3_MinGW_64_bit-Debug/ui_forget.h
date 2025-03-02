/********************************************************************************
** Form generated from reading UI file 'forget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_H
#define UI_FORGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_forget
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *upwidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *omglbl;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *hombtn;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_8;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *upledt;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLineEdit *lowledt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *querenbtn;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_10;
    QWidget *widget_7;
    QWidget *widget_9;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *forget)
    {
        if (forget->objectName().isEmpty())
            forget->setObjectName("forget");
        forget->resize(800, 600);
        centralwidget = new QWidget(forget);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        upwidget = new QWidget(centralwidget);
        upwidget->setObjectName("upwidget");
        upwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_5 = new QHBoxLayout(upwidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        omglbl = new QLabel(upwidget);
        omglbl->setObjectName("omglbl");
        omglbl->setPixmap(QPixmap(QString::fromUtf8(":/img/logo(1).png")));
        omglbl->setScaledContents(true);

        horizontalLayout_5->addWidget(omglbl);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        widget_5 = new QWidget(upwidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        hombtn = new QToolButton(widget_5);
        hombtn->setObjectName("hombtn");
        hombtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        hombtn->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"border: none;\n"
"border-radius: 20px;\n"
"padding: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hombtn->setIcon(icon);
        hombtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(hombtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        horizontalLayout_5->addWidget(widget_5);


        verticalLayout_2->addWidget(upwidget);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        widget_8 = new QWidget(widget);
        widget_8->setObjectName("widget_8");

        gridLayout->addWidget(widget_8, 3, 5, 1, 1);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(widget_6);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        upledt = new QLineEdit(widget_2);
        upledt->setObjectName("upledt");
        upledt->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;\n"
"color: black"));

        horizontalLayout->addWidget(upledt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        lowledt = new QLineEdit(widget_3);
        lowledt->setObjectName("lowledt");
        lowledt->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lowledt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        querenbtn = new QPushButton(widget_4);
        querenbtn->setObjectName("querenbtn");
        querenbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        querenbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));

        horizontalLayout_3->addWidget(querenbtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget_4);


        gridLayout->addWidget(widget_6, 1, 2, 1, 1);

        widget_10 = new QWidget(widget);
        widget_10->setObjectName("widget_10");

        gridLayout->addWidget(widget_10, 1, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");

        gridLayout->addWidget(widget_7, 0, 2, 1, 1);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName("widget_9");

        gridLayout->addWidget(widget_9, 1, 4, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 3, 1, 1);


        verticalLayout_2->addWidget(widget);

        forget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(forget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        forget->setMenuBar(menubar);
        statusbar = new QStatusBar(forget);
        statusbar->setObjectName("statusbar");
        forget->setStatusBar(statusbar);

        retranslateUi(forget);

        QMetaObject::connectSlotsByName(forget);
    } // setupUi

    void retranslateUi(QMainWindow *forget)
    {
        forget->setWindowTitle(QCoreApplication::translate("forget", "MainWindow", nullptr));
        omglbl->setText(QString());
        hombtn->setText(QCoreApplication::translate("forget", "\351\246\226\351\241\265", nullptr));
        label->setText(QCoreApplication::translate("forget", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("forget", "\350\257\267\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232  ", nullptr));
        querenbtn->setText(QCoreApplication::translate("forget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forget: public Ui_forget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_H
