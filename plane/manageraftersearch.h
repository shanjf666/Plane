#ifndef MANAGERAFTERSEARCH_H
#define MANAGERAFTERSEARCH_H

#include <QWidget>
#include<QSqlQuery>
#include<QTime>
namespace Ui {
class managerAfterSearch;
}

class managerAfterSearch : public QWidget
{
    Q_OBJECT

public:
    explicit managerAfterSearch(QString flightNumber,QString managerName="机长",QWidget *parent = nullptr);
    ~managerAfterSearch();

    QString flightNumber;

private slots:
    void on_returnSearch_ui_pushButton_clicked();

    void on_flightDelete_pushButton_clicked();

    void on_flightAlter_pushButton_clicked();

    void on_toAddFlight_ui_clicked();

private:
    QString managerName;
    Ui::managerAfterSearch *ui;
};

#endif // MANAGERAFTERSEARCH_H
