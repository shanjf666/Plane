#include "mainwindows.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase dbcon;
    dbcon = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    dbcon.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    dbcon.setPort(3306);                          // 端口号，默认
    dbcon.setDatabaseName("persondb");           // ODBC 数据源名称
    bool ok = dbcon.open();
    if(!ok)
        qDebug() << "Error,  persondatabase 数据库文件打开失败！";
    else
        qDebug() << "Sucess, persondatabase 数据库文件打开成功！";

    MainWindows w;
    w.show();
    return a.exec();
}
