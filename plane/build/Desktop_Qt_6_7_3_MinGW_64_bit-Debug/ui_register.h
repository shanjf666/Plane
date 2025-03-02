/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_4;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *account_lineEdit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *nickName_lineEdit;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *password_lineEdit;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *password_lineEdit_again;
    QPushButton *register_pushButton;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(687, 438);
        verticalLayout_2 = new QVBoxLayout(Register);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(Register);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/logo(1).png")));
        label_5->setScaledContents(true);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_2 = new QWidget(Register);
        widget_2->setObjectName("widget_2");
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");

        horizontalLayout_6->addWidget(widget_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 20px;\n"
""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        account_lineEdit = new QLineEdit(widget_6);
        account_lineEdit->setObjectName("account_lineEdit");
        account_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(account_lineEdit);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        nickName_lineEdit = new QLineEdit(widget_7);
        nickName_lineEdit->setObjectName("nickName_lineEdit");
        nickName_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(nickName_lineEdit);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName("widget_8");
        horizontalLayout_4 = new QHBoxLayout(widget_8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        password_lineEdit = new QLineEdit(widget_8);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;\n"
"color: rgb(0, 0, 0);"));
        password_lineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_4->addWidget(password_lineEdit);


        verticalLayout->addWidget(widget_8);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName("widget_9");
        horizontalLayout_5 = new QHBoxLayout(widget_9);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        password_lineEdit_again = new QLineEdit(widget_9);
        password_lineEdit_again->setObjectName("password_lineEdit_again");
        password_lineEdit_again->setStyleSheet(QString::fromUtf8("border: 2px solid black; border-radius: 5px;\n"
"color: rgb(0, 0, 0);"));
        password_lineEdit_again->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_5->addWidget(password_lineEdit_again);


        verticalLayout->addWidget(widget_9);

        register_pushButton = new QPushButton(widget);
        register_pushButton->setObjectName("register_pushButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        register_pushButton->setFont(font);
        register_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        register_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 0, 0);\n"
"font: 700 16pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"border: none;\n"
"border-radius: 20px;\n"
"padding: 10px;"));

        verticalLayout->addWidget(register_pushButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        horizontalLayout_6->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");

        horizontalLayout_6->addWidget(widget_5);


        verticalLayout_2->addWidget(widget_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Widget", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("Register", "    \346\254\242\350\277\216\346\263\250\345\206\214\344\270\255\345\261\261\345\244\247\345\255\246\350\210\252\347\251\272", nullptr));
        account_lineEdit->setText(QString());
        nickName_lineEdit->setText(QString());
        password_lineEdit->setText(QString());
        password_lineEdit_again->setText(QString());
        register_pushButton->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
