/********************************************************************************
** Form generated from reading UI file 'manageraftersearch.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERAFTERSEARCH_H
#define UI_MANAGERAFTERSEARCH_H

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

class Ui_managerAfterSearch
{
public:
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *pushButton;
    QToolButton *toAddFlight_ui;
    QToolButton *returnSearch_ui_pushButton;
    QSpacerItem *verticalSpacer;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTimeEdit *flightStart_timeEdit;
    QLabel *start_label;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *flightNumber_label;
    QLabel *label_8;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTimeEdit *flightEnd_timeEdit;
    QLabel *end_label;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *flightNumber_label_2;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLineEdit *chearMoney_lineEdit;
    QLineEdit *expensiveMoney_lineEdit;
    QLineEdit *cheapSeat_lineEdit;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *expensiveSeat_lineEdit;
    QLabel *label_3;
    QPushButton *flightAlter_pushButton;
    QPushButton *flightDelete_pushButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *managerAfterSearch)
    {
        if (managerAfterSearch->objectName().isEmpty())
            managerAfterSearch->setObjectName("managerAfterSearch");
        managerAfterSearch->resize(613, 423);
        managerAfterSearch->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(managerAfterSearch);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(managerAfterSearch);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QToolButton(widget);
        pushButton->setObjectName("pushButton");
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

        returnSearch_ui_pushButton = new QToolButton(widget);
        returnSearch_ui_pushButton->setObjectName("returnSearch_ui_pushButton");
        returnSearch_ui_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        returnSearch_ui_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
""));
        returnSearch_ui_pushButton->setAutoRaise(true);

        verticalLayout->addWidget(returnSearch_ui_pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(widget);

        widget_10 = new QWidget(managerAfterSearch);
        widget_10->setObjectName("widget_10");
        widget_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout_6 = new QVBoxLayout(widget_10);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        widget_2 = new QWidget(widget_10);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget_3);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        flightStart_timeEdit = new QTimeEdit(widget_3);
        flightStart_timeEdit->setObjectName("flightStart_timeEdit");
        flightStart_timeEdit->setStyleSheet(QString::fromUtf8(" border: 1px  solid black; padding :5px;"));
        flightStart_timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(flightStart_timeEdit);


        verticalLayout_4->addWidget(widget_3);

        start_label = new QLabel(widget_4);
        start_label->setObjectName("start_label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        start_label->setFont(font1);
        start_label->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
" border: 1px  solid black; padding: 5px;"));
        start_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(start_label);


        horizontalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        flightNumber_label = new QLabel(widget_5);
        flightNumber_label->setObjectName("flightNumber_label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        flightNumber_label->setFont(font2);
        flightNumber_label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        flightNumber_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(flightNumber_label);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/img/to.png")));
        label_8->setScaledContents(true);

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName("widget_6");
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_7);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        flightEnd_timeEdit = new QTimeEdit(widget_7);
        flightEnd_timeEdit->setObjectName("flightEnd_timeEdit");
        flightEnd_timeEdit->setStyleSheet(QString::fromUtf8(" border: 1px  solid black;padding :5px;"));
        flightEnd_timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(flightEnd_timeEdit);


        verticalLayout_3->addWidget(widget_7);

        end_label = new QLabel(widget_6);
        end_label->setObjectName("end_label");
        end_label->setFont(font1);
        end_label->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
" border: 1px  solid black; padding: 5px;"));
        end_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(end_label);


        horizontalLayout_3->addWidget(widget_6);


        verticalLayout_6->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        widget_9 = new QWidget(widget_10);
        widget_9->setObjectName("widget_9");
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        verticalLayout_5 = new QVBoxLayout(widget_9);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName("widget_8");
        horizontalLayout_4 = new QHBoxLayout(widget_8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        flightNumber_label_2 = new QLabel(widget_8);
        flightNumber_label_2->setObjectName("flightNumber_label_2");
        flightNumber_label_2->setFont(font2);
        flightNumber_label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        flightNumber_label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(flightNumber_label_2);

        label_6 = new QLabel(widget_8);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_4->addWidget(label_6);


        verticalLayout_5->addWidget(widget_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        chearMoney_lineEdit = new QLineEdit(widget_9);
        chearMoney_lineEdit->setObjectName("chearMoney_lineEdit");
        chearMoney_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));
        chearMoney_lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(chearMoney_lineEdit, 3, 1, 1, 1);

        expensiveMoney_lineEdit = new QLineEdit(widget_9);
        expensiveMoney_lineEdit->setObjectName("expensiveMoney_lineEdit");
        expensiveMoney_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));
        expensiveMoney_lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(expensiveMoney_lineEdit, 3, 2, 1, 1);

        cheapSeat_lineEdit = new QLineEdit(widget_9);
        cheapSeat_lineEdit->setObjectName("cheapSeat_lineEdit");
        cheapSeat_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));
        cheapSeat_lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(cheapSeat_lineEdit, 2, 1, 1, 1);

        label_7 = new QLabel(widget_9);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_4 = new QLabel(widget_9);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(widget_9);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        expensiveSeat_lineEdit = new QLineEdit(widget_9);
        expensiveSeat_lineEdit->setObjectName("expensiveSeat_lineEdit");
        expensiveSeat_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));
        expensiveSeat_lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(expensiveSeat_lineEdit, 2, 2, 1, 1);

        label_3 = new QLabel(widget_9);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\351\273\221\344\275\223\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        flightAlter_pushButton = new QPushButton(widget_9);
        flightAlter_pushButton->setObjectName("flightAlter_pushButton");
        flightAlter_pushButton->setFont(font1);
        flightAlter_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        flightAlter_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        gridLayout->addWidget(flightAlter_pushButton, 4, 1, 1, 1);

        flightDelete_pushButton = new QPushButton(widget_9);
        flightDelete_pushButton->setObjectName("flightDelete_pushButton");
        flightDelete_pushButton->setFont(font1);
        flightDelete_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        flightDelete_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        gridLayout->addWidget(flightDelete_pushButton, 4, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_6->addWidget(widget_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        horizontalLayout_5->addWidget(widget_10);


        retranslateUi(managerAfterSearch);

        QMetaObject::connectSlotsByName(managerAfterSearch);
    } // setupUi

    void retranslateUi(QWidget *managerAfterSearch)
    {
        managerAfterSearch->setWindowTitle(QCoreApplication::translate("managerAfterSearch", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("managerAfterSearch", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        toAddFlight_ui->setText(QCoreApplication::translate("managerAfterSearch", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        returnSearch_ui_pushButton->setText(QCoreApplication::translate("managerAfterSearch", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("managerAfterSearch", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        start_label->setText(QCoreApplication::translate("managerAfterSearch", "\350\265\267\347\202\271", nullptr));
        flightNumber_label->setText(QCoreApplication::translate("managerAfterSearch", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_8->setText(QString());
        label_2->setText(QCoreApplication::translate("managerAfterSearch", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        end_label->setText(QCoreApplication::translate("managerAfterSearch", "\347\273\210\347\202\271", nullptr));
        flightNumber_label_2->setText(QCoreApplication::translate("managerAfterSearch", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("managerAfterSearch", "\350\210\261\344\275\215\346\203\205\345\206\265\344\277\256\346\224\271", nullptr));
        label_7->setText(QCoreApplication::translate("managerAfterSearch", "\344\273\267\346\240\274:", nullptr));
        label_4->setText(QCoreApplication::translate("managerAfterSearch", "\345\244\264\347\255\211\350\210\261", nullptr));
        label_5->setText(QCoreApplication::translate("managerAfterSearch", "\345\211\251\344\275\231\345\272\247\344\275\215\346\225\260:", nullptr));
        label_3->setText(QCoreApplication::translate("managerAfterSearch", "\347\273\217\346\265\216\350\210\261", nullptr));
        flightAlter_pushButton->setText(QCoreApplication::translate("managerAfterSearch", "\344\277\256\346\224\271", nullptr));
        flightDelete_pushButton->setText(QCoreApplication::translate("managerAfterSearch", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerAfterSearch: public Ui_managerAfterSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERAFTERSEARCH_H
