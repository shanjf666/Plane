/********************************************************************************
** Form generated from reading UI file 'manageruser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERUSER_H
#define UI_MANAGERUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageruser
{
public:
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *pushButton;
    QToolButton *toAddFlight_ui;
    QToolButton *log_out_pushButton;
    QSpacerItem *verticalSpacer;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *managerName_pushButton;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *userTable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *addbutton;
    QPushButton *editbutton;
    QPushButton *deletebutton;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *manageruser)
    {
        if (manageruser->objectName().isEmpty())
            manageruser->setObjectName("manageruser");
        manageruser->resize(669, 429);
        horizontalLayout_3 = new QHBoxLayout(manageruser);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget = new QWidget(manageruser);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QToolButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        pushButton->setAutoRaise(true);

        verticalLayout->addWidget(pushButton);

        toAddFlight_ui = new QToolButton(widget);
        toAddFlight_ui->setObjectName("toAddFlight_ui");
        toAddFlight_ui->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        toAddFlight_ui->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        toAddFlight_ui->setAutoRaise(true);

        verticalLayout->addWidget(toAddFlight_ui);

        log_out_pushButton = new QToolButton(widget);
        log_out_pushButton->setObjectName("log_out_pushButton");
        log_out_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        log_out_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        log_out_pushButton->setAutoRaise(true);

        verticalLayout->addWidget(log_out_pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(widget);

        widget_5 = new QWidget(manageruser);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        managerName_pushButton = new QPushButton(widget_4);
        managerName_pushButton->setObjectName("managerName_pushButton");
        QFont font1;
        font1.setPointSize(13);
        managerName_pushButton->setFont(font1);
        managerName_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        managerName_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 186, 194);"));

        verticalLayout_2->addWidget(managerName_pushButton);


        horizontalLayout_2->addWidget(widget_4);


        verticalLayout_3->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        userTable = new QTableWidget(widget_5);
        userTable->setObjectName("userTable");

        verticalLayout_3->addWidget(userTable);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(50, 50));
        widget_2->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        addbutton = new QPushButton(widget_2);
        addbutton->setObjectName("addbutton");
        addbutton->setMinimumSize(QSize(0, 40));
        addbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        horizontalLayout->addWidget(addbutton);

        editbutton = new QPushButton(widget_2);
        editbutton->setObjectName("editbutton");
        editbutton->setMinimumSize(QSize(0, 40));
        editbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        horizontalLayout->addWidget(editbutton);

        deletebutton = new QPushButton(widget_2);
        deletebutton->setObjectName("deletebutton");
        deletebutton->setMinimumSize(QSize(0, 40));
        deletebutton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        horizontalLayout->addWidget(deletebutton);


        verticalLayout_3->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_3->addWidget(widget_5);


        retranslateUi(manageruser);

        QMetaObject::connectSlotsByName(manageruser);
    } // setupUi

    void retranslateUi(QWidget *manageruser)
    {
        manageruser->setWindowTitle(QCoreApplication::translate("manageruser", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("manageruser", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        toAddFlight_ui->setText(QCoreApplication::translate("manageruser", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        log_out_pushButton->setText(QCoreApplication::translate("manageruser", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("manageruser", "\346\254\242\350\277\216\346\202\250\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        managerName_pushButton->setText(QCoreApplication::translate("manageruser", "\346\234\272\351\225\277", nullptr));
        addbutton->setText(QCoreApplication::translate("manageruser", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        editbutton->setText(QCoreApplication::translate("manageruser", "\347\274\226\350\276\221\347\224\250\346\210\267", nullptr));
        deletebutton->setText(QCoreApplication::translate("manageruser", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageruser: public Ui_manageruser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERUSER_H
