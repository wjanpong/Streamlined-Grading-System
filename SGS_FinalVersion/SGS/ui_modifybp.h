/********************************************************************************
** Form generated from reading UI file 'modifybp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYBP_H
#define UI_MODIFYBP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModifyBP
{
public:
    QLabel *label_5;
    QLineEdit *txtBonusPenaltyType;
    QLineEdit *intBonusPenaltyId;
    QLabel *label_2;
    QLineEdit *intAmount;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_updateBonusPenalty;
    QLineEdit *intHour;
    QLabel *label_BPTypeID;

    void setupUi(QDialog *ModifyBP)
    {
        if (ModifyBP->objectName().isEmpty())
            ModifyBP->setObjectName(QStringLiteral("ModifyBP"));
        ModifyBP->resize(459, 555);
        label_5 = new QLabel(ModifyBP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 181, 20));
        txtBonusPenaltyType = new QLineEdit(ModifyBP);
        txtBonusPenaltyType->setObjectName(QStringLiteral("txtBonusPenaltyType"));
        txtBonusPenaltyType->setGeometry(QRect(210, 100, 113, 20));
        intBonusPenaltyId = new QLineEdit(ModifyBP);
        intBonusPenaltyId->setObjectName(QStringLiteral("intBonusPenaltyId"));
        intBonusPenaltyId->setGeometry(QRect(210, 140, 113, 20));
        label_2 = new QLabel(ModifyBP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 121, 16));
        intAmount = new QLineEdit(ModifyBP);
        intAmount->setObjectName(QStringLiteral("intAmount"));
        intAmount->setGeometry(QRect(210, 220, 113, 20));
        label_6 = new QLabel(ModifyBP);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 220, 151, 20));
        label_3 = new QLabel(ModifyBP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 100, 47, 13));
        label_4 = new QLabel(ModifyBP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 140, 91, 16));
        pushButton_updateBonusPenalty = new QPushButton(ModifyBP);
        pushButton_updateBonusPenalty->setObjectName(QStringLiteral("pushButton_updateBonusPenalty"));
        pushButton_updateBonusPenalty->setGeometry(QRect(80, 280, 241, 23));
        intHour = new QLineEdit(ModifyBP);
        intHour->setObjectName(QStringLiteral("intHour"));
        intHour->setGeometry(QRect(210, 180, 113, 20));
        label_BPTypeID = new QLabel(ModifyBP);
        label_BPTypeID->setObjectName(QStringLiteral("label_BPTypeID"));
        label_BPTypeID->setGeometry(QRect(210, 60, 181, 16));

        retranslateUi(ModifyBP);

        QMetaObject::connectSlotsByName(ModifyBP);
    } // setupUi

    void retranslateUi(QDialog *ModifyBP)
    {
        ModifyBP->setWindowTitle(QApplication::translate("ModifyBP", "Dialog", 0));
        label_5->setText(QApplication::translate("ModifyBP", "Number of days after the due date :", 0));
        label_2->setText(QApplication::translate("ModifyBP", "Bonus Penalty Type ID :", 0));
        label_6->setText(QApplication::translate("ModifyBP", "Percentage of Bonus Penalty :", 0));
        label_3->setText(QApplication::translate("ModifyBP", "Type: ", 0));
        label_4->setText(QApplication::translate("ModifyBP", "Bonus Penalty ID: ", 0));
        pushButton_updateBonusPenalty->setText(QApplication::translate("ModifyBP", "Update Bonus Penalty ", 0));
        label_BPTypeID->setText(QApplication::translate("ModifyBP", "BonusPenaltyTypeID", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyBP: public Ui_ModifyBP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYBP_H
