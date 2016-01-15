#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

    bool createConnection();
private slots:
    void on_pushButton_Login_clicked();
    //void receiveData(QString data);

    void setLoginCount(QString employID);

signals:
    void sendData(QString data);

private:
    Ui::Login *ui;
    int loginCount;
    QString employeeID;
};

#endif // LOGIN_H
