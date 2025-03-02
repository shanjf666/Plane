#ifndef MANAGERSEARCHFLIGHT_H
#define MANAGERSEARCHFLIGHT_H

#include <QWidget>
#include<QMessageBox>

namespace Ui {
class managerSearchFlight;
}

class managerSearchFlight : public QWidget
{
    Q_OBJECT

public:
    explicit managerSearchFlight(QString managerName="机长",QWidget *parent = nullptr);
    ~managerSearchFlight();

private slots:
    void on_toAddFlight_ui_clicked();

    void on_toAfterFlightSearch_ui_clicked();

    void on_managerName_pushButton_clicked();

    void on_log_out_pushButton_clicked();

private:
    QString managerName;
    Ui::managerSearchFlight *ui;
};

#endif // MANAGERSEARCHFLIGHT_H
