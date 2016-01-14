#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QDialog>

namespace Ui {
class Administrator;
}

class Administrator : public QDialog
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = 0);
    ~Administrator();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_mark_clicked();

    void receiveData(QString data);

    void on_pushButton_ChangePass_clicked();

signals:
    void sendData(QString data);

    void sendData2(QString data);

private:
    Ui::Administrator *ui;
    QString employeeID;
    QString role;
};

#endif // ADMINISTRATOR_H
