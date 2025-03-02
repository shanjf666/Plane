/********************************************************************************
** Form generated from reading UI file 'managersearchflight.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERSEARCHFLIGHT_H
#define UI_MANAGERSEARCHFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerSearchFlight
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
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLineEdit *flightNumber_lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *toAfterFlightSearch_ui;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *managerSearchFlight)
    {
        if (managerSearchFlight->objectName().isEmpty())
            managerSearchFlight->setObjectName("managerSearchFlight");
        managerSearchFlight->resize(586, 396);
        managerSearchFlight->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(managerSearchFlight);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(managerSearchFlight);
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

        widget_5 = new QWidget(managerSearchFlight);
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

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
""));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        flightNumber_lineEdit = new QLineEdit(widget_2);
        flightNumber_lineEdit->setObjectName("flightNumber_lineEdit");
        flightNumber_lineEdit->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        flightNumber_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;"));

        horizontalLayout->addWidget(flightNumber_lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        toAfterFlightSearch_ui = new QPushButton(widget_2);
        toAfterFlightSearch_ui->setObjectName("toAfterFlightSearch_ui");
        toAfterFlightSearch_ui->setFont(font2);
        toAfterFlightSearch_ui->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        toAfterFlightSearch_ui->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 10px;\n"
"padding: 10px;"));

        horizontalLayout->addWidget(toAfterFlightSearch_ui);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_3->addWidget(widget_5);


        retranslateUi(managerSearchFlight);

        QMetaObject::connectSlotsByName(managerSearchFlight);
    } // setupUi

    void retranslateUi(QWidget *managerSearchFlight)
    {
        managerSearchFlight->setWindowTitle(QCoreApplication::translate("managerSearchFlight", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("managerSearchFlight", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        toAddFlight_ui->setText(QCoreApplication::translate("managerSearchFlight", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        log_out_pushButton->setText(QCoreApplication::translate("managerSearchFlight", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("managerSearchFlight", "\346\254\242\350\277\216\346\202\250\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        managerName_pushButton->setText(QCoreApplication::translate("managerSearchFlight", "\346\234\272\351\225\277", nullptr));
        label->setText(QCoreApplication::translate("managerSearchFlight", "\350\257\267\350\276\223\345\205\245\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        toAfterFlightSearch_ui->setText(QCoreApplication::translate("managerSearchFlight", "\346\237\245\350\257\242", nullptr));
#if QT_CONFIG(shortcut)
        toAfterFlightSearch_ui->setShortcut(QCoreApplication::translate("managerSearchFlight", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class managerSearchFlight: public Ui_managerSearchFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERSEARCHFLIGHT_H
