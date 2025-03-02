#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include "QImage"
#include "QMovie"
#include "inform.h"
#include "qpainter.h"

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr, QString account = "");
    ~Home();

private slots:
    void on_Personbtn_clicked();
    void on_Searchbtn_clicked();

    void on_Selectbtn_clicked();

    void on_Changebtn_clicked();

    void on_Newsbtn_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_5_clicked();

signals:
    void onperson();
    void buyticket(QString fromCity = "",QString toCity = "",QString flightDate = "",QString account = "",int ischangewidget = 0);
protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter painter(this);
        QPixmap pixmap(":img/background2.jpg"); // 背景图片路径
        // 获取窗口的大小，并缩放图片以适应窗口
        painter.drawPixmap(0, 0, width(), height(), pixmap);
    }
private:
    QString account;
    Ui::Home *ui;
};

#endif // HOME_H
