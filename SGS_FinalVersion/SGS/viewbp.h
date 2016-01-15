#ifndef VIEWBP_H
#define VIEWBP_H

#include <QDialog>

namespace Ui {
class ViewBP;
}

class ViewBP : public QDialog
{
    Q_OBJECT

public:
    explicit ViewBP(QWidget *parent = 0);
    ~ViewBP();
    void setData(int activityId);

private slots:
    void on_pushButton_displayBP_clicked();

    void on_pushButton_create_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_Modify_clicked();

private:
    Ui::ViewBP *ui;
};

#endif // VIEWBP_H
