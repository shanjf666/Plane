/********************************************************************************
** Form generated from reading UI file 'manageraddflight.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERADDFLIGHT_H
#define UI_MANAGERADDFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerAddFlight
{
public:
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *toSearchFlight_ui;
    QToolButton *toAddFlight_ui;
    QToolButton *log_out_pushButton;
    QSpacerItem *verticalSpacer;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QPushButton *managerName_pushButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *startlabel;
    QTimeEdit *start_timeEdit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *flightStart_lineEdit;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *flightNumber_lineEdit;
    QLabel *label_8;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *endlabel;
    QTimeEdit *end_timeEdit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *flightEnd_lineEdit;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLineEdit *expensiveMoney_lineEdit;
    QLineEdit *cheapSeat_lineEdit;
    QLineEdit *expensiveSeat_lineEdit;
    QLineEdit *chearMoney_lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *managerAddFlight)
    {
        if (managerAddFlight->objectName().isEmpty())
            managerAddFlight->setObjectName("managerAddFlight");
        managerAddFlight->resize(636, 391);
        managerAddFlight->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(managerAddFlight);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(managerAddFlight);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toSearchFlight_ui = new QToolButton(widget);
        toSearchFlight_ui->setObjectName("toSearchFlight_ui");
        toSearchFlight_ui->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        toSearchFlight_ui->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        toSearchFlight_ui->setAutoRaise(true);

        verticalLayout->addWidget(toSearchFlight_ui);

        toAddFlight_ui = new QToolButton(widget);
        toAddFlight_ui->setObjectName("toAddFlight_ui");
        toAddFlight_ui->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        toAddFlight_ui->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
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


        horizontalLayout_7->addWidget(widget);

        widget_12 = new QWidget(managerAddFlight);
        widget_12->setObjectName("widget_12");
        widget_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        verticalLayout_6 = new QVBoxLayout(widget_12);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName("widget_13");
        horizontalLayout_8 = new QHBoxLayout(widget_13);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_7 = new QLabel(widget_13);
        label_7->setObjectName("label_7");
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_7);

        managerName_pushButton = new QPushButton(widget_13);
        managerName_pushButton->setObjectName("managerName_pushButton");
        QFont font1;
        font1.setPointSize(12);
        managerName_pushButton->setFont(font1);
        managerName_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        managerName_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 186, 194);"));

        horizontalLayout_8->addWidget(managerName_pushButton);


        verticalLayout_6->addWidget(widget_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        widget_10 = new QWidget(widget_12);
        widget_10->setObjectName("widget_10");
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        widget_8 = new QWidget(widget_10);
        widget_8->setObjectName("widget_8");
        verticalLayout_3 = new QVBoxLayout(widget_8);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_2 = new QWidget(widget_8);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        startlabel = new QLabel(widget_2);
        startlabel->setObjectName("startlabel");
        startlabel->setFont(font);
        startlabel->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        startlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(startlabel);

        start_timeEdit = new QTimeEdit(widget_2);
        start_timeEdit->setObjectName("start_timeEdit");
        start_timeEdit->setStyleSheet(QString::fromUtf8(" border: 1px  solid black; padding :5px;"));
        start_timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(start_timeEdit);


        verticalLayout_3->addWidget(widget_2);

        widget_6 = new QWidget(widget_8);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(widget_6);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_4->addWidget(label_9);

        flightStart_lineEdit = new QLineEdit(widget_6);
        flightStart_lineEdit->setObjectName("flightStart_lineEdit");
        flightStart_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        horizontalLayout_4->addWidget(flightStart_lineEdit);


        verticalLayout_3->addWidget(widget_6);


        horizontalLayout_6->addWidget(widget_8);

        widget_5 = new QWidget(widget_10);
        widget_5->setObjectName("widget_5");
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label);

        flightNumber_lineEdit = new QLineEdit(widget_4);
        flightNumber_lineEdit->setObjectName("flightNumber_lineEdit");
        flightNumber_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        horizontalLayout_3->addWidget(flightNumber_lineEdit);


        verticalLayout_2->addWidget(widget_4);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/img/to.png")));
        label_8->setScaledContents(true);

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_6->addWidget(widget_5);

        widget_9 = new QWidget(widget_10);
        widget_9->setObjectName("widget_9");
        verticalLayout_4 = new QVBoxLayout(widget_9);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_3 = new QWidget(widget_9);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        endlabel = new QLabel(widget_3);
        endlabel->setObjectName("endlabel");
        endlabel->setFont(font);
        endlabel->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        endlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(endlabel);

        end_timeEdit = new QTimeEdit(widget_3);
        end_timeEdit->setObjectName("end_timeEdit");
        end_timeEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        end_timeEdit->setStyleSheet(QString::fromUtf8(" border: 1px  solid black; padding :5px;"));
        end_timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(end_timeEdit);


        verticalLayout_4->addWidget(widget_3);

        widget_7 = new QWidget(widget_9);
        widget_7->setObjectName("widget_7");
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(widget_7);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_5->addWidget(label_10);

        flightEnd_lineEdit = new QLineEdit(widget_7);
        flightEnd_lineEdit->setObjectName("flightEnd_lineEdit");
        flightEnd_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        horizontalLayout_5->addWidget(flightEnd_lineEdit);


        verticalLayout_4->addWidget(widget_7);


        horizontalLayout_6->addWidget(widget_9);


        verticalLayout_6->addWidget(widget_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);

        widget_11 = new QWidget(widget_12);
        widget_11->setObjectName("widget_11");
        widget_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        verticalLayout_5 = new QVBoxLayout(widget_11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(widget_11);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_5->addWidget(label_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        expensiveMoney_lineEdit = new QLineEdit(widget_11);
        expensiveMoney_lineEdit->setObjectName("expensiveMoney_lineEdit");
        expensiveMoney_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        gridLayout->addWidget(expensiveMoney_lineEdit, 3, 2, 1, 1);

        cheapSeat_lineEdit = new QLineEdit(widget_11);
        cheapSeat_lineEdit->setObjectName("cheapSeat_lineEdit");
        cheapSeat_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        gridLayout->addWidget(cheapSeat_lineEdit, 2, 1, 1, 1);

        expensiveSeat_lineEdit = new QLineEdit(widget_11);
        expensiveSeat_lineEdit->setObjectName("expensiveSeat_lineEdit");
        expensiveSeat_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        gridLayout->addWidget(expensiveSeat_lineEdit, 2, 2, 1, 1);

        chearMoney_lineEdit = new QLineEdit(widget_11);
        chearMoney_lineEdit->setObjectName("chearMoney_lineEdit");
        chearMoney_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        gridLayout->addWidget(chearMoney_lineEdit, 3, 1, 1, 1);

        pushButton = new QPushButton(widget_11);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        label_2 = new QLabel(widget_11);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget_11);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_5 = new QLabel(widget_11);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(widget_11);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_6->addWidget(widget_11);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_7->addWidget(widget_12);


        retranslateUi(managerAddFlight);

        QMetaObject::connectSlotsByName(managerAddFlight);
    } // setupUi

    void retranslateUi(QWidget *managerAddFlight)
    {
        managerAddFlight->setWindowTitle(QCoreApplication::translate("managerAddFlight", "Form", nullptr));
        toSearchFlight_ui->setText(QCoreApplication::translate("managerAddFlight", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        toAddFlight_ui->setText(QCoreApplication::translate("managerAddFlight", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        log_out_pushButton->setText(QCoreApplication::translate("managerAddFlight", "\350\277\224\345\233\236", nullptr));
        label_7->setText(QCoreApplication::translate("managerAddFlight", "\346\254\242\350\277\216\346\202\250\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        managerName_pushButton->setText(QCoreApplication::translate("managerAddFlight", "\346\234\272\351\225\277", nullptr));
        startlabel->setText(QCoreApplication::translate("managerAddFlight", "\345\207\272\345\217\221\346\227\266\351\227\264\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("managerAddFlight", "\345\207\272\345\217\221\345\234\260\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("managerAddFlight", "\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        label_8->setText(QString());
        endlabel->setText(QCoreApplication::translate("managerAddFlight", "\345\210\260\350\276\276\346\227\266\351\227\264\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("managerAddFlight", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("managerAddFlight", "\350\210\261\344\275\215\346\203\205\345\206\265\344\277\256\346\224\271", nullptr));
        pushButton->setText(QCoreApplication::translate("managerAddFlight", "\346\267\273\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("managerAddFlight", "\347\273\217\346\265\216\350\210\261", nullptr));
        label_3->setText(QCoreApplication::translate("managerAddFlight", "\345\244\264\347\255\211\350\210\261", nullptr));
        label_5->setText(QCoreApplication::translate("managerAddFlight", "\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("managerAddFlight", "\345\272\247\344\275\215\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerAddFlight: public Ui_managerAddFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERADDFLIGHT_H
