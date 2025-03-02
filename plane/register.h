#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include<QMessageBox>
#include<QSqlQuery>
QT_BEGIN_NAMESPACE
namespace Ui {
class Register;
}
QT_END_NAMESPACE

class Register : public QWidget
{
    Q_OBJECT

public:
    Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_password_lineEdit_textChanged(const QString &arg1);

    void on_register_pushButton_clicked();

    void on_password_lineEdit_again_textChanged(const QString &arg1);

private:
    QString password="";
    QString protectedPassword="";
    QString passwordAgain="";
    QString protectedPasswordAgain="";
    Ui::Register *ui;
};
#endif // REGISTER_H
