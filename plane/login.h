#ifndef LOGIN_H
#define LOGIN_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QUrl>
#include <QDesktopServices>
#include <QMessageBox>
#include <QTextEdit>
#include <QScrollArea>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <managersearchflight.h>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    QString Getaccount()
    {
        return account;
    }
    ~Login();
private:
    QString account;
private slots:
    void on_loginButton_clicked();

    void on_exitButton_clicked();

    void on_registerButton_clicked();

    void on_privacyButton_clicked();

    void on_pushButton_clicked();

signals:
    void loginSuccessful();  // 登录成功信号
    void Register(); //注册信号
    void exit_clicked();   // 退出信号
    void forget_clicked(); //忘记密码

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
