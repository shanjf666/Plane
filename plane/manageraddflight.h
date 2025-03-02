#ifndef MANAGERADDFLIGHT_H
#define MANAGERADDFLIGHT_H

#include <QWidget>

namespace Ui {
class managerAddFlight;
}

class managerAddFlight : public QWidget
{
    Q_OBJECT

public:
    explicit managerAddFlight(QString managerName="机长",QWidget *parent = nullptr);
    ~managerAddFlight();

private slots:
    void on_toAddFlight_ui_clicked();

    void on_toSearchFlight_ui_clicked();

    void on_pushButton_clicked();

    void on_managerName_pushButton_clicked();

    void on_log_out_pushButton_clicked();

private:
    QString managerName;
    Ui::managerAddFlight *ui;
};

#endif // MANAGERADDFLIGHT_H
