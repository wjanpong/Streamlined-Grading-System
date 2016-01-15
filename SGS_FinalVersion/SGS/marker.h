#ifndef MARKER_H
#define MARKER_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class marker;
}

class marker : public QDialog
{
    Q_OBJECT

public:
    explicit marker(QWidget *parent = 0);
    ~marker();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_back_clicked();

    void receiveData(QString data);

    void receiveData2(QString data);

    void on_pushButton_Generate_clicked();

    void on_tableWidget_activites_itemPressed(QTableWidgetItem *item);

signals:
    void sendData(QString employID);

private:
    Ui::marker *ui;
    QString role;
    QString employeeID;
};

#endif // MARKER_H
