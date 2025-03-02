#ifndef FORGET_H
#define FORGET_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QMessageBox>
#include <QPalette>
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui {
class forget;
}
QT_END_NAMESPACE

class forget : public QMainWindow
{
    Q_OBJECT

public:
    forget(QWidget *parent = nullptr);
    ~forget();

signals:
    void backToLogin();

private slots:
    void on_hombtn_clicked();

private:
    Ui::forget *ui;
    QSqlDatabase db;
    QString account;
    QString password;
};
#endif // FORGET_H
