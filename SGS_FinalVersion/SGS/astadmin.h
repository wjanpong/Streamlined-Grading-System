#ifndef ASTADMIN_H
#define ASTADMIN_H

#include <QDialog>

namespace Ui {
class AstAdmin;
}

class AstAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit AstAdmin(QWidget *parent = 0);
    ~AstAdmin();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_createcourse_clicked();

    void on_pushButton_modifycourse_clicked();

    void on_pushButton_ViewCourse_clicked();

    void on_pushButton_ChangePass_clicked();

    void receiveData(QString data);

signals:
    void sendData(QString data);

private:
    Ui::AstAdmin *ui;
    QString employeeID;
    QString role;
};

#endif // ASTADMIN_H
