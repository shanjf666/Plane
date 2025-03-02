#ifndef PERSON_H
#define PERSON_H

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QSplitter>
#include <QScrollArea>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class Person;
}

class Person : public QWidget
{
    Q_OBJECT

public:
    explicit Person(QWidget *parent = nullptr,QString acc = "13726878121");
    void openchangeticketsWindow(QString orderNumber, QString flightNumber, QString ExpensiveOrNot);
    ~Person();
private:
    QString account;
    QString nickname;
private slots:
    void on_MyButton_clicked();

    void on_secureButton_clicked();

    void on_logoutButton_clicked();

    void on_changepasswordButton_clicked();

    void on_pushButton_clicked();

signals:
    void logoutClicked();//退出登录
    void forgetpasswordClicked(); //忘记密码
    void homeButtonclicked(); //回到主页
private:
    Ui::Person *ui;
    QWidget *changeTicketsWindow;
};

#endif // PERSON_H
