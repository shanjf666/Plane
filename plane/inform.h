#ifndef INFORM_H
#define INFORM_H

#include <QWidget>
#include<QMessageBox>
#include<QSqlQuery>
#include<QDate>
QT_BEGIN_NAMESPACE
namespace Ui {
class inform;
}
QT_END_NAMESPACE

class inform : public QWidget
{
    Q_OBJECT

public:
    inform(QString account,QWidget *parent = nullptr);
    ~inform();

private:
    QString account;
    Ui::inform *ui;
};
#endif // INFORM_H
