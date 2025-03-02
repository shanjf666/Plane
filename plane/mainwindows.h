#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QFile>
#include <QPalette>
#include "login.h"
#include "person.h"
#include "home.h"
#include "buyticket.h"
#include "register.h"
#include "forget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindows;
}
QT_END_NAMESPACE

class MainWindows : public QMainWindow
{
    Q_OBJECT

public:
    MainWindows(QWidget *parent = nullptr);
    ~MainWindows();

private slots:
    void onLoginSuccessful();  // 登录成功的槽函数
    void onExit(); //退出成功的槽函数
    void onRegister(); //注册的槽函数
    void onLogout();  //退出登录的槽函数
    void onForget(); //忘记密码的槽函数
    void onPerson(); //打开个人中心的槽函数
    void onhome(); //打开主页的槽函数
    void buyticket(QString fromCity = "",QString toCity = "",QString flightDate = "",QString account = "",int changewidget = 0);//跳转到买票界面
protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter painter(this);
        QPixmap pixmap(":img/background2.jpg"); // 背景图片路径
        // 获取窗口的大小，并缩放图片以适应窗口
        painter.drawPixmap(0, 0, width(), height(), pixmap);
    }
private:
    QStackedWidget *stackedWidget;
    Login *login;//登录界面
    Person* person;//个人界面
    Home* home; //主页界面
    Buyticket* ticket;//买票界面
    Register* reg; //注册界面
    forget* fog;//忘记密码界面
};
#endif // MAINWINDOWS_H
