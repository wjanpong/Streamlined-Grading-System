#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QDialog>

namespace Ui {
class changePass;
}

class changePass : public QDialog
{
    Q_OBJECT

public:
    explicit changePass(QWidget *parent = 0);
    ~changePass();

private slots:
    void on_pushButton_confirm_clicked();

    void receiveData(QString data);
    void on_pushButton_back_clicked();

signals:
    void sendData(QString data);

private:
    Ui::changePass *ui;
};

#endif // CHANGEPASS_H
