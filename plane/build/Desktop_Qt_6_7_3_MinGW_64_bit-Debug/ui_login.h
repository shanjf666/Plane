/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *agreement;
    QPushButton *privacyButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *registerButton;
    QPushButton *loginButton;
    QPushButton *exitButton;
    QWidget *widget_6;
    QGridLayout *gridLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QLineEdit *usernameEdit;
    QLabel *usernameLabel;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1000, 800);
        widget_5 = new QWidget(Login);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(480, 230, 421, 271));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
""));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(widget_5);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        agreement = new QCheckBox(widget);
        agreement->setObjectName("agreement");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(agreement->sizePolicy().hasHeightForWidth());
        agreement->setSizePolicy(sizePolicy1);
        agreement->setMaximumSize(QSize(16777215, 16777215));
        agreement->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        agreement->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"QCheckBox {\n"
"                font-size: 16px;\n"
"                color: #333;\n"
"                padding: 10px;\n"
"            }\n"
"\n"
"            QCheckBox::indicator {\n"
"                width: 25px;\n"
"                height: 25px;\n"
"                border: 3px solid #4CAF50;\n"
"                border-radius: 6px;  /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"                background-color: rgb(0, 0, 0);\n"
"                transition: all 0.3s ease;  /* \346\267\273\345\212\240\350\277\207\346\270\241\345\212\250\347\224\273 */\n"
"            }\n"
"\n"
"            QCheckBox::indicator:checked {\n"
"                background-color: #4CAF50;  /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\347\273\277\350\211\262 */\n"
"                border: 3px solid #4CAF50;\n"
"            }\n"
"\n"
"            QCheckBox::indicator:unchecked {\n"
"                background-color: white;\n"
"                border: 3px solid rgb(0, 0,"
                        " 0);  /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\345\217\230\344\270\272\347\201\260\350\211\262 */\n"
"            }\n"
"\n"
"            QCheckBox:hover::indicator {\n"
"                background-color: #e8f5e8;  /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\214\226 */\n"
"            }\n"
"\n"
"            QCheckBox:pressed::indicator {\n"
"                background-color: #388e3c;  /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\345\217\230\344\270\272\346\267\261\347\273\277\350\211\262 */\n"
"            }\n"
"\n"
"            QCheckBox:disabled {\n"
"                color: #aaa;\n"
"            }\n"
"\n"
"            QCheckBox:disabled::indicator {\n"
"                background-color: #f2f2f2;\n"
"                border: 3px solid #ccc;\n"
"            }"));

        horizontalLayout->addWidget(agreement);

        privacyButton = new QPushButton(widget);
        privacyButton->setObjectName("privacyButton");
        QFont font;
        font.setUnderline(true);
        privacyButton->setFont(font);
        privacyButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);"));

        horizontalLayout->addWidget(privacyButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_8 = new QHBoxLayout(widget_4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        registerButton = new QPushButton(widget_4);
        registerButton->setObjectName("registerButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy2);
        registerButton->setAutoFillBackground(false);
        registerButton->setStyleSheet(QString::fromUtf8("background-color: #e53935;color: white;font-size: 16px;font-family: \"Arial\", sans-serif;font-weight: bold;  padding: 10px;border: 2px solid #005A9E;  border-radius: 5px; transition: all 0.3s ease; \n"
"hover background-color: #d32f2f ; hover border: 2px solid #004578; \n"
"pressed background-color: #004578;pressed border: 2px solid #002F5D; pressed color: #D6EFFF; "));

        horizontalLayout_8->addWidget(registerButton);

        loginButton = new QPushButton(widget_4);
        loginButton->setObjectName("loginButton");
        loginButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setStyleSheet(QString::fromUtf8("background-color: #e53935;color: white;font-size: 16px;font-family: \"Arial\", sans-serif;font-weight: bold;  padding: 10px;border: 2px solid #005A9E;  border-radius: 5px; transition: all 0.3s ease; \n"
"hover background-color: #d32f2f ; hover border: 2px solid #004578; \n"
"pressed background-color: #004578;pressed border: 2px solid #002F5D; pressed color: #D6EFFF; "));
        loginButton->setIconSize(QSize(12, 12));

        horizontalLayout_8->addWidget(loginButton);

        exitButton = new QPushButton(widget_4);
        exitButton->setObjectName("exitButton");
        sizePolicy2.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy2);
        exitButton->setAutoFillBackground(false);
        exitButton->setStyleSheet(QString::fromUtf8("background-color: #e53935;color: white;font-size: 16px;font-family: \"Arial\", sans-serif;font-weight: bold;  padding: 10px;border: 2px solid #005A9E;  border-radius: 5px; transition: all 0.3s ease; \n"
"hover background-color: #d32f2f ; hover border: 2px solid #004578; \n"
"pressed background-color: #004578;pressed border: 2px solid #002F5D; pressed color: #D6EFFF; "));

        horizontalLayout_8->addWidget(exitButton);


        gridLayout_2->addWidget(widget_4, 3, 0, 1, 1);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        gridLayout = new QGridLayout(widget_6);
        gridLayout->setObjectName("gridLayout");
        passwordLabel = new QLabel(widget_6);
        passwordLabel->setObjectName("passwordLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(passwordLabel->sizePolicy().hasHeightForWidth());
        passwordLabel->setSizePolicy(sizePolicy3);
        passwordLabel->setStyleSheet(QString::fromUtf8("color: black;font-size: 16px; font-weight: bold; font-family: \"Arial\", sans-serif;margin: 10px 0;  text-align: center;background-color: transparent;"));

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 1);

        passwordEdit = new QLineEdit(widget_6);
        passwordEdit->setObjectName("passwordEdit");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        passwordEdit->setFont(font1);
        passwordEdit->setStyleSheet(QString::fromUtf8("background-color: #F5F5F5;  color: #333333;   font-size: 14px;font-family: \"Arial\", sans-serif;padding: 5px;  border: 2px solid #2e2e2e; border-radius: 5px;outline: none;\n"
"focus border:  1px solid #5b86e5;focus background-color: #FFFFFF;"));
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(passwordEdit, 2, 1, 1, 1);

        usernameEdit = new QLineEdit(widget_6);
        usernameEdit->setObjectName("usernameEdit");
        sizePolicy4.setHeightForWidth(usernameEdit->sizePolicy().hasHeightForWidth());
        usernameEdit->setSizePolicy(sizePolicy4);
        usernameEdit->setFont(font1);
        usernameEdit->setStyleSheet(QString::fromUtf8("background-color: #F5F5F5;  color: #333333;   font-size: 14px;font-family: \"Arial\", sans-serif;padding: 5px;  border: 2px solid #2e2e2e; border-radius: 5px;outline: none;\n"
"focus border:  1px solid #5b86e5;focus background-color: #FFFFFF;"));

        gridLayout->addWidget(usernameEdit, 1, 1, 1, 1);

        usernameLabel = new QLabel(widget_6);
        usernameLabel->setObjectName("usernameLabel");
        sizePolicy3.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy3);
        usernameLabel->setStyleSheet(QString::fromUtf8("color: black;font-size: 16px; font-weight: bold; font-family: \"Arial\", sans-serif;margin: 10px 0;  text-align: center;background-color: transparent;"));

        gridLayout->addWidget(usernameLabel, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget_6, 1, 0, 1, 1);

        QWidget::setTabOrder(usernameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, agreement);
        QWidget::setTabOrder(agreement, privacyButton);
        QWidget::setTabOrder(privacyButton, registerButton);
        QWidget::setTabOrder(registerButton, loginButton);
        QWidget::setTabOrder(loginButton, exitButton);

        retranslateUi(Login);

        loginButton->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        agreement->setText(QCoreApplication::translate("Login", "   \345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217", nullptr));
        privacyButton->setText(QCoreApplication::translate("Login", "\343\200\212\351\232\220\347\247\201\346\235\241\344\276\213\343\200\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        registerButton->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(shortcut)
        loginButton->setShortcut(QCoreApplication::translate("Login", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        exitButton->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        usernameLabel->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
