/********************************************************************************
** Form generated from reading UI file 'modifyprogrammingfile.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPROGRAMMINGFILE_H
#define UI_MODIFYPROGRAMMINGFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ModifyProgrammingFile
{
public:
    QLabel *label_activityId;
    QLabel *fileID;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *txtType;
    QLabel *label_5;
    QLabel *fileTypeId;
    QSpinBox *spinBox_numTest;
    QLabel *label_3;
    QPushButton *pushButton_update;
    QLabel *label_4;
    QLineEdit *txtPathToFile;
    QPushButton *pushButton_BrowseFile;
    QLabel *label_2;

    void setupUi(QDialog *ModifyProgrammingFile)
    {
        if (ModifyProgrammingFile->objectName().isEmpty())
            ModifyProgrammingFile->setObjectName(QStringLiteral("ModifyProgrammingFile"));
        ModifyProgrammingFile->resize(517, 327);
        label_activityId = new QLabel(ModifyProgrammingFile);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(160, 20, 47, 13));
        fileID = new QLabel(ModifyProgrammingFile);
        fileID->setObjectName(QStringLiteral("fileID"));
        fileID->setGeometry(QRect(160, 160, 47, 13));
        label_6 = new QLabel(ModifyProgrammingFile);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 90, 47, 13));
        label = new QLabel(ModifyProgrammingFile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 61, 16));
        txtType = new QLineEdit(ModifyProgrammingFile);
        txtType->setObjectName(QStringLiteral("txtType"));
        txtType->setGeometry(QRect(160, 90, 113, 20));
        label_5 = new QLabel(ModifyProgrammingFile);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 220, 71, 20));
        fileTypeId = new QLabel(ModifyProgrammingFile);
        fileTypeId->setObjectName(QStringLiteral("fileTypeId"));
        fileTypeId->setGeometry(QRect(160, 60, 47, 13));
        spinBox_numTest = new QSpinBox(ModifyProgrammingFile);
        spinBox_numTest->setObjectName(QStringLiteral("spinBox_numTest"));
        spinBox_numTest->setGeometry(QRect(160, 190, 42, 22));
        label_3 = new QLabel(ModifyProgrammingFile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 60, 71, 16));
        pushButton_update = new QPushButton(ModifyProgrammingFile);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(160, 270, 75, 23));
        label_4 = new QLabel(ModifyProgrammingFile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 190, 81, 16));
        txtPathToFile = new QLineEdit(ModifyProgrammingFile);
        txtPathToFile->setObjectName(QStringLiteral("txtPathToFile"));
        txtPathToFile->setGeometry(QRect(160, 220, 231, 20));
        pushButton_BrowseFile = new QPushButton(ModifyProgrammingFile);
        pushButton_BrowseFile->setObjectName(QStringLiteral("pushButton_BrowseFile"));
        pushButton_BrowseFile->setGeometry(QRect(410, 220, 75, 23));
        label_2 = new QLabel(ModifyProgrammingFile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 160, 47, 13));

        retranslateUi(ModifyProgrammingFile);

        QMetaObject::connectSlotsByName(ModifyProgrammingFile);
    } // setupUi

    void retranslateUi(QDialog *ModifyProgrammingFile)
    {
        ModifyProgrammingFile->setWindowTitle(QApplication::translate("ModifyProgrammingFile", "Dialog", 0));
        label_activityId->setText(QApplication::translate("ModifyProgrammingFile", "activityId", 0));
        fileID->setText(QApplication::translate("ModifyProgrammingFile", "TextLabel", 0));
        label_6->setText(QApplication::translate("ModifyProgrammingFile", "Type :", 0));
        label->setText(QApplication::translate("ModifyProgrammingFile", "Activity ID:", 0));
        label_5->setText(QApplication::translate("ModifyProgrammingFile", "Path to File :", 0));
        fileTypeId->setText(QApplication::translate("ModifyProgrammingFile", "TextLabel", 0));
        label_3->setText(QApplication::translate("ModifyProgrammingFile", "File Type ID :", 0));
        pushButton_update->setText(QApplication::translate("ModifyProgrammingFile", "Update", 0));
        label_4->setText(QApplication::translate("ModifyProgrammingFile", "Number Of Test :", 0));
        pushButton_BrowseFile->setText(QApplication::translate("ModifyProgrammingFile", "Browse", 0));
        label_2->setText(QApplication::translate("ModifyProgrammingFile", "File ID :", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyProgrammingFile: public Ui_ModifyProgrammingFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPROGRAMMINGFILE_H
