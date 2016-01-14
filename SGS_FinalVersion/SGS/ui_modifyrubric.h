/********************************************************************************
** Form generated from reading UI file 'modifyrubric.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYRUBRIC_H
#define UI_MODIFYRUBRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyRubric
{
public:
    QLabel *label_4;
    QPushButton *pushButton_DeleteRubric;
    QLabel *label_15;
    QLabel *label_activityName;
    QLineEdit *lineEdit_rubricValue;
    QLineEdit *lineEdit_rubricText;
    QLabel *label_activityId;
    QLineEdit *lineEdit_ItemNum;
    QPushButton *pushButton_UpdateRubric;
    QLabel *label_2;
    QLabel *label_numTest;
    QTableWidget *Rubric_table;
    QLabel *label_6;
    QLabel *label_rubricID;
    QLabel *label_11;
    QLabel *label;
    QLabel *label_9;

    void setupUi(QDialog *ModifyRubric)
    {
        if (ModifyRubric->objectName().isEmpty())
            ModifyRubric->setObjectName(QStringLiteral("ModifyRubric"));
        ModifyRubric->resize(688, 502);
        label_4 = new QLabel(ModifyRubric);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 20, 81, 16));
        pushButton_DeleteRubric = new QPushButton(ModifyRubric);
        pushButton_DeleteRubric->setObjectName(QStringLiteral("pushButton_DeleteRubric"));
        pushButton_DeleteRubric->setGeometry(QRect(380, 430, 121, 41));
        label_15 = new QLabel(ModifyRubric);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(70, 310, 81, 21));
        label_activityName = new QLabel(ModifyRubric);
        label_activityName->setObjectName(QStringLiteral("label_activityName"));
        label_activityName->setGeometry(QRect(150, 20, 51, 20));
        lineEdit_rubricValue = new QLineEdit(ModifyRubric);
        lineEdit_rubricValue->setObjectName(QStringLiteral("lineEdit_rubricValue"));
        lineEdit_rubricValue->setGeometry(QRect(230, 370, 81, 21));
        lineEdit_rubricText = new QLineEdit(ModifyRubric);
        lineEdit_rubricText->setObjectName(QStringLiteral("lineEdit_rubricText"));
        lineEdit_rubricText->setGeometry(QRect(230, 400, 401, 21));
        label_activityId = new QLabel(ModifyRubric);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(150, 40, 51, 16));
        lineEdit_ItemNum = new QLineEdit(ModifyRubric);
        lineEdit_ItemNum->setObjectName(QStringLiteral("lineEdit_ItemNum"));
        lineEdit_ItemNum->setGeometry(QRect(230, 340, 81, 21));
        pushButton_UpdateRubric = new QPushButton(ModifyRubric);
        pushButton_UpdateRubric->setObjectName(QStringLiteral("pushButton_UpdateRubric"));
        pushButton_UpdateRubric->setGeometry(QRect(510, 430, 121, 41));
        label_2 = new QLabel(ModifyRubric);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 20, 81, 16));
        label_numTest = new QLabel(ModifyRubric);
        label_numTest->setObjectName(QStringLiteral("label_numTest"));
        label_numTest->setGeometry(QRect(350, 20, 47, 13));
        Rubric_table = new QTableWidget(ModifyRubric);
        if (Rubric_table->columnCount() < 4)
            Rubric_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        Rubric_table->setObjectName(QStringLiteral("Rubric_table"));
        Rubric_table->setGeometry(QRect(70, 70, 531, 231));
        Rubric_table->setSortingEnabled(true);
        label_6 = new QLabel(ModifyRubric);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 340, 111, 21));
        label_rubricID = new QLabel(ModifyRubric);
        label_rubricID->setObjectName(QStringLiteral("label_rubricID"));
        label_rubricID->setGeometry(QRect(230, 310, 51, 16));
        label_11 = new QLabel(ModifyRubric);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 370, 151, 21));
        label = new QLabel(ModifyRubric);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 61, 16));
        label_9 = new QLabel(ModifyRubric);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 400, 121, 21));

        retranslateUi(ModifyRubric);

        QMetaObject::connectSlotsByName(ModifyRubric);
    } // setupUi

    void retranslateUi(QDialog *ModifyRubric)
    {
        ModifyRubric->setWindowTitle(QApplication::translate("ModifyRubric", "Dialog", 0));
        label_4->setText(QApplication::translate("ModifyRubric", "Number of test:", 0));
        pushButton_DeleteRubric->setText(QApplication::translate("ModifyRubric", "Delete", 0));
        label_15->setText(QApplication::translate("ModifyRubric", "*Rubric Id :", 0));
        label_activityName->setText(QApplication::translate("ModifyRubric", "TextLabel", 0));
        label_activityId->setText(QApplication::translate("ModifyRubric", "TextLabel", 0));
        pushButton_UpdateRubric->setText(QApplication::translate("ModifyRubric", "Update", 0));
        label_2->setText(QApplication::translate("ModifyRubric", "Activity Name:", 0));
        label_numTest->setText(QApplication::translate("ModifyRubric", "TextLabel", 0));
        QTableWidgetItem *___qtablewidgetitem = Rubric_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ModifyRubric", "Item Number", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Rubric_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ModifyRubric", "Item ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Rubric_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ModifyRubric", "Item Text", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Rubric_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ModifyRubric", "Value", 0));
        label_6->setText(QApplication::translate("ModifyRubric", "*Rubric Item Number :", 0));
        label_rubricID->setText(QApplication::translate("ModifyRubric", "TextLabel", 0));
        label_11->setText(QApplication::translate("ModifyRubric", "*Maximum points of the iitem :", 0));
        label->setText(QApplication::translate("ModifyRubric", "Activity Id :", 0));
        label_9->setText(QApplication::translate("ModifyRubric", "*Description of the item :", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyRubric: public Ui_ModifyRubric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYRUBRIC_H
