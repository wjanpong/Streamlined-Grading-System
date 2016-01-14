/********************************************************************************
** Form generated from reading UI file 'modifyprogramming.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPROGRAMMING_H
#define UI_MODIFYPROGRAMMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ModifyProgramming
{
public:
    QLabel *label_3;
    QSpinBox *numOutput;
    QLabel *label_5;
    QSpinBox *numInput;
    QLabel *label_activityId;
    QSpinBox *spinBox_numTests;
    QComboBox *comboBox_environment;
    QLabel *label;
    QLabel *label_testID_2;
    QPushButton *pushButton_update_P_Test;
    QLabel *label_2;
    QLabel *label_testID;
    QLabel *label_4;

    void setupUi(QDialog *ModifyProgramming)
    {
        if (ModifyProgramming->objectName().isEmpty())
            ModifyProgramming->setObjectName(QStringLiteral("ModifyProgramming"));
        ModifyProgramming->resize(417, 362);
        label_3 = new QLabel(ModifyProgramming);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 180, 121, 31));
        numOutput = new QSpinBox(ModifyProgramming);
        numOutput->setObjectName(QStringLiteral("numOutput"));
        numOutput->setGeometry(QRect(240, 220, 81, 22));
        label_5 = new QLabel(ModifyProgramming);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 260, 71, 21));
        numInput = new QSpinBox(ModifyProgramming);
        numInput->setObjectName(QStringLiteral("numInput"));
        numInput->setGeometry(QRect(240, 190, 81, 22));
        label_activityId = new QLabel(ModifyProgramming);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(240, 60, 47, 13));
        spinBox_numTests = new QSpinBox(ModifyProgramming);
        spinBox_numTests->setObjectName(QStringLiteral("spinBox_numTests"));
        spinBox_numTests->setGeometry(QRect(240, 140, 42, 22));
        comboBox_environment = new QComboBox(ModifyProgramming);
        comboBox_environment->setObjectName(QStringLiteral("comboBox_environment"));
        comboBox_environment->setGeometry(QRect(240, 260, 69, 22));
        label = new QLabel(ModifyProgramming);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 60, 71, 16));
        label_testID_2 = new QLabel(ModifyProgramming);
        label_testID_2->setObjectName(QStringLiteral("label_testID_2"));
        label_testID_2->setGeometry(QRect(240, 100, 47, 13));
        pushButton_update_P_Test = new QPushButton(ModifyProgramming);
        pushButton_update_P_Test->setObjectName(QStringLiteral("pushButton_update_P_Test"));
        pushButton_update_P_Test->setGeometry(QRect(160, 300, 161, 23));
        label_2 = new QLabel(ModifyProgramming);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 140, 91, 21));
        label_testID = new QLabel(ModifyProgramming);
        label_testID->setObjectName(QStringLiteral("label_testID"));
        label_testID->setGeometry(QRect(120, 100, 61, 21));
        label_4 = new QLabel(ModifyProgramming);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 220, 131, 21));

        retranslateUi(ModifyProgramming);

        QMetaObject::connectSlotsByName(ModifyProgramming);
    } // setupUi

    void retranslateUi(QDialog *ModifyProgramming)
    {
        ModifyProgramming->setWindowTitle(QApplication::translate("ModifyProgramming", "Dialog", 0));
        label_3->setText(QApplication::translate("ModifyProgramming", "Number Of Input Files: ", 0));
        label_5->setText(QApplication::translate("ModifyProgramming", "Environment:", 0));
        label_activityId->setText(QApplication::translate("ModifyProgramming", "activityid", 0));
        comboBox_environment->clear();
        comboBox_environment->insertItems(0, QStringList()
         << QApplication::translate("ModifyProgramming", "c++", 0)
         << QApplication::translate("ModifyProgramming", "Java", 0)
         << QApplication::translate("ModifyProgramming", "Eclipse", 0)
         << QApplication::translate("ModifyProgramming", "QT", 0)
        );
        label->setText(QApplication::translate("ModifyProgramming", "Activity ID:", 0));
        label_testID_2->setText(QApplication::translate("ModifyProgramming", "testID", 0));
        pushButton_update_P_Test->setText(QApplication::translate("ModifyProgramming", "Update Programming Test", 0));
        label_2->setText(QApplication::translate("ModifyProgramming", "Number of Test:", 0));
        label_testID->setText(QApplication::translate("ModifyProgramming", "*testID:", 0));
        label_4->setText(QApplication::translate("ModifyProgramming", "Number Of Output Files:", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyProgramming: public Ui_ModifyProgramming {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPROGRAMMING_H
