/********************************************************************************
** Form generated from reading UI file 'markingdash.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKINGDASH_H
#define UI_MARKINGDASH_H

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

class Ui_markingDash
{
public:
    QLabel *label;
    QPushButton *pushButton_goSubmissionPath;
    QLabel *label_4;
    QLabel *label_actName;
    QTableWidget *tableWidget_students;
    QLabel *label_3;
    QLineEdit *file_Directory_SubmissionPath;
    QPushButton *pushButton_Solution;
    QPushButton *pushButton_SaveFile;
    QLabel *label_2;
    QLabel *label_activityID;
    QLineEdit *file_Directory_commendedFilePath;
    QLabel *label_9;
    QLabel *label_status;
    QLabel *label_receiveData;
    QTableWidget *Rubric_table;
    QLabel *label_studentID;
    QLabel *label_8;
    QLabel *label_ItemNumber;
    QTableWidget *tableWidget_studentGrade;
    QLabel *label_5;
    QLabel *label_GradeStatus;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_ItemID;
    QPushButton *pushButton_updateGrade;
    QLineEdit *lineEdit_Grade;

    void setupUi(QDialog *markingDash)
    {
        if (markingDash->objectName().isEmpty())
            markingDash->setObjectName(QStringLiteral("markingDash"));
        markingDash->resize(1015, 727);
        label = new QLabel(markingDash);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 71, 16));
        pushButton_goSubmissionPath = new QPushButton(markingDash);
        pushButton_goSubmissionPath->setObjectName(QStringLiteral("pushButton_goSubmissionPath"));
        pushButton_goSubmissionPath->setGeometry(QRect(140, 70, 171, 31));
        label_4 = new QLabel(markingDash);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 81, 21));
        label_actName = new QLabel(markingDash);
        label_actName->setObjectName(QStringLiteral("label_actName"));
        label_actName->setGeometry(QRect(100, 10, 351, 21));
        label_actName->setTextFormat(Qt::AutoText);
        label_actName->setTextInteractionFlags(Qt::NoTextInteraction);
        tableWidget_students = new QTableWidget(markingDash);
        if (tableWidget_students->columnCount() < 1)
            tableWidget_students->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_students->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget_students->setObjectName(QStringLiteral("tableWidget_students"));
        tableWidget_students->setGeometry(QRect(10, 70, 111, 581));
        label_3 = new QLabel(markingDash);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 130, 221, 16));
        file_Directory_SubmissionPath = new QLineEdit(markingDash);
        file_Directory_SubmissionPath->setObjectName(QStringLiteral("file_Directory_SubmissionPath"));
        file_Directory_SubmissionPath->setGeometry(QRect(590, 70, 331, 31));
        pushButton_Solution = new QPushButton(markingDash);
        pushButton_Solution->setObjectName(QStringLiteral("pushButton_Solution"));
        pushButton_Solution->setGeometry(QRect(140, 120, 171, 31));
        pushButton_SaveFile = new QPushButton(markingDash);
        pushButton_SaveFile->setObjectName(QStringLiteral("pushButton_SaveFile"));
        pushButton_SaveFile->setGeometry(QRect(830, 670, 171, 31));
        label_2 = new QLabel(markingDash);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 80, 201, 16));
        label_activityID = new QLabel(markingDash);
        label_activityID->setObjectName(QStringLiteral("label_activityID"));
        label_activityID->setGeometry(QRect(100, 40, 71, 16));
        file_Directory_commendedFilePath = new QLineEdit(markingDash);
        file_Directory_commendedFilePath->setObjectName(QStringLiteral("file_Directory_commendedFilePath"));
        file_Directory_commendedFilePath->setGeometry(QRect(590, 120, 331, 31));
        label_9 = new QLabel(markingDash);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 10, 61, 21));
        label_status = new QLabel(markingDash);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 660, 141, 21));
        label_receiveData = new QLabel(markingDash);
        label_receiveData->setObjectName(QStringLiteral("label_receiveData"));
        label_receiveData->setGeometry(QRect(340, 10, 211, 21));
        Rubric_table = new QTableWidget(markingDash);
        if (Rubric_table->columnCount() < 4)
            Rubric_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(3, __qtablewidgetitem4);
        Rubric_table->setObjectName(QStringLiteral("Rubric_table"));
        Rubric_table->setGeometry(QRect(140, 170, 531, 331));
        Rubric_table->setSortingEnabled(true);
        label_studentID = new QLabel(markingDash);
        label_studentID->setObjectName(QStringLiteral("label_studentID"));
        label_studentID->setGeometry(QRect(620, 511, 47, 16));
        label_8 = new QLabel(markingDash);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(691, 585, 71, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_ItemNumber = new QLabel(markingDash);
        label_ItemNumber->setObjectName(QStringLiteral("label_ItemNumber"));
        label_ItemNumber->setGeometry(QRect(620, 570, 47, 16));
        tableWidget_studentGrade = new QTableWidget(markingDash);
        if (tableWidget_studentGrade->columnCount() < 4)
            tableWidget_studentGrade->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_studentGrade->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_studentGrade->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_studentGrade->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_studentGrade->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        tableWidget_studentGrade->setObjectName(QStringLiteral("tableWidget_studentGrade"));
        tableWidget_studentGrade->setEnabled(true);
        tableWidget_studentGrade->setGeometry(QRect(690, 170, 311, 331));
        tableWidget_studentGrade->setSortingEnabled(true);
        tableWidget_studentGrade->horizontalHeader()->setVisible(true);
        tableWidget_studentGrade->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_studentGrade->verticalHeader()->setVisible(false);
        label_5 = new QLabel(markingDash);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(511, 511, 49, 16));
        label_5->setSizeIncrement(QSize(0, 0));
        label_GradeStatus = new QLabel(markingDash);
        label_GradeStatus->setObjectName(QStringLiteral("label_GradeStatus"));
        label_GradeStatus->setGeometry(QRect(690, 510, 281, 51));
        label_GradeStatus->setFont(font);
        label_6 = new QLabel(markingDash);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(511, 540, 69, 16));
        label_7 = new QLabel(markingDash);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(511, 570, 62, 16));
        label_ItemID = new QLabel(markingDash);
        label_ItemID->setObjectName(QStringLiteral("label_ItemID"));
        label_ItemID->setGeometry(QRect(620, 540, 47, 16));
        pushButton_updateGrade = new QPushButton(markingDash);
        pushButton_updateGrade->setObjectName(QStringLiteral("pushButton_updateGrade"));
        pushButton_updateGrade->setGeometry(QRect(850, 590, 81, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_updateGrade->setFont(font1);
        lineEdit_Grade = new QLineEdit(markingDash);
        lineEdit_Grade->setObjectName(QStringLiteral("lineEdit_Grade"));
        lineEdit_Grade->setGeometry(QRect(750, 590, 91, 31));
        QFont font2;
        font2.setPointSize(12);
        lineEdit_Grade->setFont(font2);

        retranslateUi(markingDash);

        QMetaObject::connectSlotsByName(markingDash);
    } // setupUi

    void retranslateUi(QDialog *markingDash)
    {
        markingDash->setWindowTitle(QApplication::translate("markingDash", "Dialog", 0));
        label->setText(QApplication::translate("markingDash", "Activity ID:", 0));
        pushButton_goSubmissionPath->setText(QApplication::translate("markingDash", "Open Student's Submission", 0));
        label_4->setText(QApplication::translate("markingDash", "Activity Name:", 0));
        label_actName->setText(QApplication::translate("markingDash", "TextLabel", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_students->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("markingDash", "Student ID", 0));
        label_3->setText(QApplication::translate("markingDash", "Path of the Commended Student's Submission", 0));
        file_Directory_SubmissionPath->setText(QString());
        pushButton_Solution->setText(QApplication::translate("markingDash", "Open The Solution", 0));
        pushButton_SaveFile->setText(QApplication::translate("markingDash", "Save The File", 0));
        label_2->setText(QApplication::translate("markingDash", "Path of the Student's Submission", 0));
        label_activityID->setText(QApplication::translate("markingDash", "TextLabel", 0));
        file_Directory_commendedFilePath->setText(QString());
        label_9->setText(QApplication::translate("markingDash", "Marking as: ", 0));
        label_status->setText(QApplication::translate("markingDash", "status", 0));
        label_receiveData->setText(QApplication::translate("markingDash", "...", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Rubric_table->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("markingDash", "Item Number", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Rubric_table->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("markingDash", "Item ID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Rubric_table->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("markingDash", "Item Text", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Rubric_table->horizontalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("markingDash", "Value", 0));
        label_studentID->setText(QApplication::translate("markingDash", "TextLabel", 0));
        label_8->setText(QApplication::translate("markingDash", "Grade", 0));
        label_ItemNumber->setText(QApplication::translate("markingDash", "TextLabel", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_studentGrade->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("markingDash", "ItemNumber", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_studentGrade->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("markingDash", "ItemID", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_studentGrade->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("markingDash", "Grade", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_studentGrade->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("markingDash", "Override", 0));
        label_5->setText(QApplication::translate("markingDash", "StudentID", 0));
        label_GradeStatus->setText(QString());
        label_6->setText(QApplication::translate("markingDash", "Rubric Item ID", 0));
        label_7->setText(QApplication::translate("markingDash", "Item Number", 0));
        label_ItemID->setText(QApplication::translate("markingDash", "TextLabel", 0));
        pushButton_updateGrade->setText(QApplication::translate("markingDash", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class markingDash: public Ui_markingDash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKINGDASH_H
