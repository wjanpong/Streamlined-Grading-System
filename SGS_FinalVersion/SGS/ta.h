#ifndef TA_H
#define TA_H

#include <QDialog>

namespace Ui {
class TA;
}

class TA : public QDialog
{
    Q_OBJECT

public:
    explicit TA(QWidget *parent = 0);
    ~TA();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_mark_clicked();

    void receiveData(QString data);

    void on_pushButton_ChangePass_clicked();

signals:
    void sendData(QString data);

    void sendData2(QString data);

private:
    Ui::TA *ui;
    QString employeeID;
    QString role;
};

#endif // TA_H
