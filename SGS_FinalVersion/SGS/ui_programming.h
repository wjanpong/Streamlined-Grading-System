/********************************************************************************
** Form generated from reading UI file 'programming.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMING_H
#define UI_PROGRAMMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_programming
{
public:
    QLabel *label_3;
    QPushButton *pushButton_update_P_Test;
    QLabel *label_4;
    QLabel *label_activityId;
    QLineEdit *txtTestID;
    QLabel *label;
    QLabel *label_5;
    QSpinBox *numOutput;
    QSpinBox *numInput;
    QSpinBox *spinBox_numTests;
    QLabel *label_2;
    QLabel *label_testID;
    QComboBox *comboBox_environment;

    void setupUi(QDialog *programming)
    {
        if (programming->objectName().isEmpty())
            programming->setObjectName(QStringLiteral("programming"));
        programming->resize(390, 377);
        label_3 = new QLabel(programming);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 180, 121, 31));
        pushButton_update_P_Test = new QPushButton(programming);
        pushButton_update_P_Test->setObjectName(QStringLiteral("pushButton_update_P_Test"));
        pushButton_update_P_Test->setGeometry(QRect(140, 300, 161, 23));
        label_4 = new QLabel(programming);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 220, 131, 21));
        label_activityId = new QLabel(programming);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(220, 60, 47, 13));
        txtTestID = new QLineEdit(programming);
        txtTestID->setObjectName(QStringLiteral("txtTestID"));
        txtTestID->setGeometry(QRect(220, 100, 113, 20));
        label = new QLabel(programming);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 71, 16));
        label_5 = new QLabel(programming);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 260, 71, 21));
        numOutput = new QSpinBox(programming);
        numOutput->setObjectName(QStringLiteral("numOutput"));
        numOutput->setGeometry(QRect(220, 220, 81, 22));
        numInput = new QSpinBox(programming);
        numInput->setObjectName(QStringLiteral("numInput"));
        numInput->setGeometry(QRect(220, 190, 81, 22));
        spinBox_numTests = new QSpinBox(programming);
        spinBox_numTests->setObjectName(QStringLiteral("spinBox_numTests"));
        spinBox_numTests->setGeometry(QRect(220, 140, 42, 22));
        label_2 = new QLabel(programming);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 140, 91, 21));
        label_testID = new QLabel(programming);
        label_testID->setObjectName(QStringLiteral("label_testID"));
        label_testID->setGeometry(QRect(100, 100, 61, 21));
        comboBox_environment = new QComboBox(programming);
        comboBox_environment->setObjectName(QStringLiteral("comboBox_environment"));
        comboBox_environment->setGeometry(QRect(220, 260, 69, 22));

        retranslateUi(programming);

        QMetaObject::connectSlotsByName(programming);
    } // setupUi

    void retranslateUi(QDialog *programming)
    {
        programming->setWindowTitle(QApplication::translate("programming", "Dialog", 0));
        label_3->setText(QApplication::translate("programming", "Number Of Input Files: ", 0));
        pushButton_update_P_Test->setText(QApplication::translate("programming", "Create Programming Test", 0));
        label_4->setText(QApplication::translate("programming", "Number Of Output Files:", 0));
        label_activityId->setText(QApplication::translate("programming", "activityid", 0));
        label->setText(QApplication::translate("programming", "Activity ID:", 0));
        label_5->setText(QApplication::translate("programming", "Environment:", 0));
        label_2->setText(QApplication::translate("programming", "Number of Test:", 0));
        label_testID->setText(QApplication::translate("programming", "*testID:", 0));
        comboBox_environment->clear();
        comboBox_environment->insertItems(0, QStringList()
         << QApplication::translate("programming", "c++", 0)
         << QApplication::translate("programming", "Java", 0)
         << QApplication::translate("programming", "Eclipse", 0)
         << QApplication::translate("programming", "QT", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class programming: public Ui_programming {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMING_H
