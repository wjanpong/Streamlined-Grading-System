/********************************************************************************
** Form generated from reading UI file 'createbonuspenalty.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBONUSPENALTY_H
#define UI_CREATEBONUSPENALTY_H

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

class Ui_createBonusPenalty
{
public:
    QLabel *label_2;
    QLineEdit *intAmount;
    QLineEdit *intBonusPenaltyTypeId;
    QLineEdit *intBonusPenaltyId;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *txtBonusPenaltyType;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_createBonusPenalty;
    QLineEdit *intHour;
    QLabel *label_activityId;
    QPushButton *pushButton_createBPT;

    void setupUi(QDialog *createBonusPenalty)
    {
        if (createBonusPenalty->objectName().isEmpty())
            createBonusPenalty->setObjectName(QStringLiteral("createBonusPenalty"));
        createBonusPenalty->resize(505, 411);
        label_2 = new QLabel(createBonusPenalty);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 120, 121, 16));
        intAmount = new QLineEdit(createBonusPenalty);
        intAmount->setObjectName(QStringLiteral("intAmount"));
        intAmount->setGeometry(QRect(260, 300, 113, 20));
        intBonusPenaltyTypeId = new QLineEdit(createBonusPenalty);
        intBonusPenaltyTypeId->setObjectName(QStringLiteral("intBonusPenaltyTypeId"));
        intBonusPenaltyTypeId->setGeometry(QRect(250, 120, 113, 20));
        intBonusPenaltyId = new QLineEdit(createBonusPenalty);
        intBonusPenaltyId->setObjectName(QStringLiteral("intBonusPenaltyId"));
        intBonusPenaltyId->setGeometry(QRect(260, 220, 113, 20));
        label = new QLabel(createBonusPenalty);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 40, 71, 16));
        label_6 = new QLabel(createBonusPenalty);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 300, 151, 20));
        txtBonusPenaltyType = new QLineEdit(createBonusPenalty);
        txtBonusPenaltyType->setObjectName(QStringLiteral("txtBonusPenaltyType"));
        txtBonusPenaltyType->setGeometry(QRect(250, 90, 113, 20));
        label_5 = new QLabel(createBonusPenalty);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 260, 181, 20));
        label_3 = new QLabel(createBonusPenalty);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 90, 47, 13));
        label_4 = new QLabel(createBonusPenalty);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 220, 91, 16));
        pushButton_createBonusPenalty = new QPushButton(createBonusPenalty);
        pushButton_createBonusPenalty->setObjectName(QStringLiteral("pushButton_createBonusPenalty"));
        pushButton_createBonusPenalty->setGeometry(QRect(130, 330, 241, 23));
        intHour = new QLineEdit(createBonusPenalty);
        intHour->setObjectName(QStringLiteral("intHour"));
        intHour->setGeometry(QRect(260, 260, 113, 20));
        label_activityId = new QLabel(createBonusPenalty);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(270, 40, 47, 16));
        pushButton_createBPT = new QPushButton(createBonusPenalty);
        pushButton_createBPT->setObjectName(QStringLiteral("pushButton_createBPT"));
        pushButton_createBPT->setGeometry(QRect(130, 160, 241, 23));

        retranslateUi(createBonusPenalty);

        QMetaObject::connectSlotsByName(createBonusPenalty);
    } // setupUi

    void retranslateUi(QDialog *createBonusPenalty)
    {
        createBonusPenalty->setWindowTitle(QApplication::translate("createBonusPenalty", "Dialog", 0));
        label_2->setText(QApplication::translate("createBonusPenalty", "*Bonus Penalty Type ID :", 0));
        label->setText(QApplication::translate("createBonusPenalty", "Activity ID :", 0));
        label_6->setText(QApplication::translate("createBonusPenalty", "*Percentage of Bonus Penalty :", 0));
        label_5->setText(QApplication::translate("createBonusPenalty", "*Number of days after the due date :", 0));
        label_3->setText(QApplication::translate("createBonusPenalty", "*Type: ", 0));
        label_4->setText(QApplication::translate("createBonusPenalty", "*Bonus Penalty ID: ", 0));
        pushButton_createBonusPenalty->setText(QApplication::translate("createBonusPenalty", "Create Bonus Penalty ", 0));
        label_activityId->setText(QApplication::translate("createBonusPenalty", "TextLabel", 0));
        pushButton_createBPT->setText(QApplication::translate("createBonusPenalty", "Create Bonus Penalty Type", 0));
    } // retranslateUi

};

namespace Ui {
    class createBonusPenalty: public Ui_createBonusPenalty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBONUSPENALTY_H
