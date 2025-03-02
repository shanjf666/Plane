/********************************************************************************
** Form generated from reading UI file 'inform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORM_H
#define UI_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inform
{
public:
    QTextBrowser *flightDelay_textBrowser;
    QTextBrowser *flightComing_textBrowser;

    void setupUi(QWidget *inform)
    {
        if (inform->objectName().isEmpty())
            inform->setObjectName("inform");
        inform->resize(800, 600);
        flightDelay_textBrowser = new QTextBrowser(inform);
        flightDelay_textBrowser->setObjectName("flightDelay_textBrowser");
        flightDelay_textBrowser->setGeometry(QRect(80, 170, 351, 161));
        QFont font;
        font.setPointSize(15);
        flightDelay_textBrowser->setFont(font);
        flightDelay_textBrowser->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        flightDelay_textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        flightComing_textBrowser = new QTextBrowser(inform);
        flightComing_textBrowser->setObjectName("flightComing_textBrowser");
        flightComing_textBrowser->setGeometry(QRect(270, 350, 161, 241));
        flightComing_textBrowser->setFont(font);
        flightComing_textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(inform);

        QMetaObject::connectSlotsByName(inform);
    } // setupUi

    void retranslateUi(QWidget *inform)
    {
        inform->setWindowTitle(QCoreApplication::translate("inform", "inform", nullptr));
        flightDelay_textBrowser->setHtml(QCoreApplication::translate("inform", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\272\262\347\210\261\347\232\204\346\227\205\345\256\242\346\234\213\345\217\213\357\274\214\346\202\250\350\277\221\346\234\237\347\232\204\350\210\252\347\217\255\346\227\240\345\273\266\350\257\257\357\274\214\347\245\235\346\202\250\346\227\205\351\200\224\346\204\211\345\277\253\343\200\202</p></body></html>", nullptr));
        flightComing_textBrowser->setHtml(QCoreApplication::translate("inform", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\272\262\347\210\261\347\232\204\346\227\205\345\256\242\346\234\213\345\217\213\357\274\214\346\202\250\350\277\221\346\234\237\345\271\266\346\227\240\345\207\272\350\241\214\350\256\241\345\210\222\343\200\202</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inform: public Ui_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORM_H
