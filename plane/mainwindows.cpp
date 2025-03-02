#include "mainwindows.h"

MainWindows::MainWindows(QWidget *parent)
    : QMainWindow(parent), stackedWidget(new QStackedWidget(this)),login(new Login(this))
{
    setCentralWidget(stackedWidget);

    // 添加界面到 QStackedWidget
    stackedWidget->addWidget(login);       // 登录界面
    // 连接登录窗口的信号与槽
    connect(login, &Login::loginSuccessful, this, &MainWindows::onLoginSuccessful);
    connect(login,&Login::exit_clicked,this,&MainWindows::onExit);
    connect(login,&Login::Register,this,&MainWindows::onRegister);
    connect(login,&Login::forget_clicked,this,&MainWindows::onForget);
    // 显示登录窗口
    setWindowTitle("登录");
    setFixedSize(1000,800);
    // 设置背景图片
    // QPalette palette;
    // palette.setBrush(QPalette::Window, QBrush(QPixmap(":img/background2.jpg")));
    this->setAutoFillBackground(true);
    // this->setPalette(palette);
    stackedWidget->setCurrentWidget(login);
    setCentralWidget(stackedWidget);
}

MainWindows::~MainWindows()
{
    delete stackedWidget;
}

void MainWindows::onLoginSuccessful()
{
    // 登录成功后隐藏登录窗口并进行相应的处理
    // login->close();

    QMessageBox::information(this, "登录成功", "欢迎登录!");
    // 进行主窗口的初始化或跳转
    home = new Home(this,login->Getaccount());
    connect(home,&Home::onperson,this,&MainWindows::onPerson);
    connect(home,&Home::buyticket,this,&MainWindows::buyticket);
    stackedWidget->addWidget(home);  //主页界面
    setWindowTitle("主页");
    stackedWidget->setCurrentWidget(home);
}

void MainWindows::onExit()
{
    this->close();
}

void MainWindows::onRegister()
{
    reg = new Register();
    reg->show();
}

void MainWindows::onLogout()
{
    setWindowTitle("登录");
    stackedWidget->setCurrentWidget(login);
    if (stackedWidget->findChild<Buyticket*>("fog")) {
        stackedWidget->removeWidget(fog);
        delete fog;
    }
}

void MainWindows::onForget()
{
    fog = new forget(this);
    connect(fog,&forget::backToLogin,this,&MainWindows::onLogout);
    stackedWidget->addWidget(fog);
    setWindowTitle("忘记密码");
    stackedWidget->setCurrentWidget(fog);
}

void MainWindows::onPerson()
{
    person = new Person(this,login->Getaccount());
    connect(person,&Person::logoutClicked,this,&MainWindows::onLogout);
    connect(person,&Person::forgetpasswordClicked,this,&MainWindows::onForget);
    connect(person,&Person::homeButtonclicked,this,&MainWindows::onhome);
    stackedWidget->addWidget(person);  //个人界面
    setWindowTitle("个人中心");
    stackedWidget->setCurrentWidget(person);

}

void MainWindows::onhome()
{
    this->setFixedHeight(800);
    this->setFixedWidth(1000);
    setWindowTitle("主页");
    stackedWidget->setCurrentWidget(home);
    if (stackedWidget->findChild<Person*>("person")) {
        stackedWidget->removeWidget(person);
        delete person;
    }
    if (stackedWidget->findChild<Buyticket*>("ticket")) {
        stackedWidget->removeWidget(ticket);
        delete ticket;
    }
}

void MainWindows::buyticket(QString fromCity,QString toCity,QString flightDate,QString account,int ischangewidget)
{
    this->setFixedHeight(800);
    this->setFixedWidth(1000);
    ticket = new Buyticket(this,fromCity,toCity,flightDate,account,ischangewidget);
    connect(ticket,&Buyticket::onperson,this,&MainWindows::onPerson);
    connect(ticket,&Buyticket::onhome,this,&MainWindows::onhome);
    stackedWidget->addWidget(ticket);
    setWindowTitle("买票");
    stackedWidget->setCurrentWidget(ticket);
}
