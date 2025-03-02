#ifndef BUYTICKET_H
#define BUYTICKET_H

#include <QMainWindow>

class Buyticket : public QMainWindow
{
    Q_OBJECT

public:
    explicit Buyticket(QWidget *parent = nullptr,QString fromCity = "",QString toCity = "",QString flightDate = "",QString account = "",int ischagewidget = 0);
    void connectDatabase();
    ~Buyticket();

public slots:
    void openPurchaseWindow(QString flightNumber, QString flightDate, QString ExpensiveOrNot); //打开购买窗口
    void openchangeticketsWindow(QString orderNumber,QString flightNumber, QString ExpensiveOrNot); //打开改签窗口
    // void orderList(); //打开订单窗口
signals:
    void onperson();
    void onhome();
private:
    QString account;
    QWidget *purchaseWindow;   // 购买窗口的指针
    QWidget *changeTicketsWindow;   // 改签窗口的指针
};

#endif // BUYTICKET_H
