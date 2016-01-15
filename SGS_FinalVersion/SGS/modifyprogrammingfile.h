#ifndef MODIFYPROGRAMMINGFILE_H
#define MODIFYPROGRAMMINGFILE_H

#include <QDialog>

namespace Ui {
class ModifyProgrammingFile;
}

class ModifyProgrammingFile : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyProgrammingFile(QWidget *parent = 0);
    ~ModifyProgrammingFile();
    void transferData(QString fileId, QString fileTypeId, QString activityID);
    QString FileID;
    QString FileTypeID;
    QString ActivityID;
private slots:
    void on_pushButton_update_clicked();

    void on_pushButton_BrowseFile_clicked();

private:
    Ui::ModifyProgrammingFile *ui;
};

#endif // MODIFYPROGRAMMINGFILE_H
