/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QLabel *label;
    QDial *dial;

    void setupUi(QWidget *Ticket)
    {
        if (Ticket->objectName().isEmpty())
            Ticket->setObjectName("Ticket");
        Ticket->resize(400, 300);
        label = new QLabel(Ticket);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 120, 101, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        dial = new QDial(Ticket);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(140, 210, 50, 64));

        retranslateUi(Ticket);

        QMetaObject::connectSlotsByName(Ticket);
    } // setupUi

    void retranslateUi(QWidget *Ticket)
    {
        Ticket->setWindowTitle(QCoreApplication::translate("Ticket", "Form", nullptr));
        label->setText(QCoreApplication::translate("Ticket", "\344\271\260\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ticket: public Ui_Ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
