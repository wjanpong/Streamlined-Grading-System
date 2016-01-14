#ifndef ROLESEL_H
#define ROLESEL_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class roleSel;
}

class roleSel : public QDialog
{
    Q_OBJECT

public:
    explicit roleSel(QWidget *parent = 0);
    ~roleSel();

private slots:
    void receiveData(QString data);

    void on_pushButton_Logout_clicked();

    void on_pushButton_loadRoles_clicked();

    void on_tableWidget_roles_itemClicked(QTableWidgetItem *item);

signals:
    void sendData(QString data);

private:
    Ui::roleSel *ui;
    QString employeeID;
};

#endif // ROLESEL_H
