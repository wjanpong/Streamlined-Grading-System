#ifndef SYSTEMADMINVIEW_H
#define SYSTEMADMINVIEW_H
#include "accountCreate.h"
#include <QDialog>
#include <QMessageBox>
#include <QtGui>
#include <QtSql>
#include <QString>
#include <QtCore>
#include "accountcreate.h"

namespace Ui {
class systemadminview;
}

class systemadminview : public QDialog
{
    Q_OBJECT
   // QString Employee_ID_String;

public:
    explicit systemadminview(QWidget *parent = 0);
    ~systemadminview();

private slots:
    //Add, delete and modify
    //Add user account

    void on_addNewAccount_clicked();

    void on_Load_table_clicked();

    void on_Data_Pass_clicked();

    void on_Modify_Comfirm_clicked();

    void on_pushButton_logout_clicked();

    void on_Delete_clicked();

    void receiveData(QString data);

    void on_pushButton_resetPass_clicked();

    void on_pushButton_ChangePass_clicked();

signals:
    void sendData(QString data);

private:
    //Variables
    Ui::systemadminview *ui;
    //Interaction
    //account * addAccount;
    int isExistTA;
    QString employeeID;

};

#endif // SYSTEMADMINVIEW_H
