/********************************************************************************
** Form generated from reading UI file 'gradingprogammingasm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADINGPROGAMMINGASM_H
#define UI_GRADINGPROGAMMINGASM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GradingProgammingASM
{
public:
    QPushButton *pushButton_goSubmissionPath;
    QLabel *label_8;
    QLabel *label_receiveData;
    QLabel *label_9;
    QTableWidget *tableWidget_studentGrade;
    QPushButton *pushButton_updateGrade;
    QLabel *label;
    QLabel *label_actName;
    QLabel *label_status;
    QTableWidget *tableWidget_students;
    QLabel *label_activityID;
    QPushButton *pushButton_Solution;
    QLabel *label_4;
    QLineEdit *lineEdit_Grade;
    QTableWidget *Rubric_table;
    QLabel *label_GradeStatus;
    QLabel *label_10;
    QTableWidget *Test_table;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_studentID;
    QLabel *label_6;
    QLabel *label_ItemID;
    QLabel *label_7;
    QLabel *label_ItemNumber;
    QLineEdit *lineEdit_commend;
    QLabel *label_11;

    void setupUi(QDialog *GradingProgammingASM)
    {
        if (GradingProgammingASM->objectName().isEmpty())
            GradingProgammingASM->setObjectName(QStringLiteral("GradingProgammingASM"));
        GradingProgammingASM->resize(1044, 648);
        pushButton_goSubmissionPath = new QPushButton(GradingProgammingASM);
        pushButton_goSubmissionPath->setObjectName(QStringLiteral("pushButton_goSubmissionPath"));
        pushButton_goSubmissionPath->setGeometry(QRect(640, 141, 181, 51));
        label_8 = new QLabel(GradingProgammingASM);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(470, 560, 71, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_receiveData = new QLabel(GradingProgammingASM);
        label_receiveData->setObjectName(QStringLiteral("label_receiveData"));
        label_receiveData->setGeometry(QRect(480, 21, 211, 21));
        label_9 = new QLabel(GradingProgammingASM);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(410, 21, 61, 21));
        tableWidget_studentGrade = new QTableWidget(GradingProgammingASM);
        if (tableWidget_studentGrade->columnCount() < 5)
            tableWidget_studentGrade->setColumnCount(5);
        QFont font1;
        font1.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget_studentGrade->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget_studentGrade->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget_studentGrade->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        tableWidget_studentGrade->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableWidget_studentGrade->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_studentGrade->setObjectName(QStringLiteral("tableWidget_studentGrade"));
        tableWidget_studentGrade->setEnabled(true);
        tableWidget_studentGrade->setGeometry(QRect(150, 380, 871, 131));
        tableWidget_studentGrade->setSortingEnabled(true);
        tableWidget_studentGrade->horizontalHeader()->setVisible(true);
        tableWidget_studentGrade->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_studentGrade->verticalHeader()->setVisible(false);
        pushButton_updateGrade = new QPushButton(GradingProgammingASM);
        pushButton_updateGrade->setObjectName(QStringLiteral("pushButton_updateGrade"));
        pushButton_updateGrade->setGeometry(QRect(650, 560, 91, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_updateGrade->setFont(font2);
        label = new QLabel(GradingProgammingASM);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 51, 71, 16));
        label_actName = new QLabel(GradingProgammingASM);
        label_actName->setObjectName(QStringLiteral("label_actName"));
        label_actName->setGeometry(QRect(240, 21, 351, 21));
        label_actName->setTextFormat(Qt::AutoText);
        label_actName->setTextInteractionFlags(Qt::NoTextInteraction);
        label_status = new QLabel(GradingProgammingASM);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 620, 141, 21));
        tableWidget_students = new QTableWidget(GradingProgammingASM);
        if (tableWidget_students->columnCount() < 1)
            tableWidget_students->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_students->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        tableWidget_students->setObjectName(QStringLiteral("tableWidget_students"));
        tableWidget_students->setGeometry(QRect(20, 20, 111, 581));
        label_activityID = new QLabel(GradingProgammingASM);
        label_activityID->setObjectName(QStringLiteral("label_activityID"));
        label_activityID->setGeometry(QRect(240, 51, 71, 16));
        pushButton_Solution = new QPushButton(GradingProgammingASM);
        pushButton_Solution->setObjectName(QStringLiteral("pushButton_Solution"));
        pushButton_Solution->setGeometry(QRect(840, 141, 181, 51));
        label_4 = new QLabel(GradingProgammingASM);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 21, 81, 21));
        lineEdit_Grade = new QLineEdit(GradingProgammingASM);
        lineEdit_Grade->setObjectName(QStringLiteral("lineEdit_Grade"));
        lineEdit_Grade->setGeometry(QRect(540, 560, 91, 41));
        QFont font3;
        font3.setPointSize(12);
        lineEdit_Grade->setFont(font3);
        Rubric_table = new QTableWidget(GradingProgammingASM);
        if (Rubric_table->columnCount() < 4)
            Rubric_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QFont font4;
        font4.setStyleStrategy(QFont::PreferAntialias);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font4);
        Rubric_table->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Rubric_table->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        Rubric_table->setObjectName(QStringLiteral("Rubric_table"));
        Rubric_table->setGeometry(QRect(150, 250, 871, 111));
        Rubric_table->setSortingEnabled(true);
        label_GradeStatus = new QLabel(GradingProgammingASM);
        label_GradeStatus->setObjectName(QStringLiteral("label_GradeStatus"));
        label_GradeStatus->setGeometry(QRect(760, 560, 221, 41));
        label_GradeStatus->setFont(font);
        label_10 = new QLabel(GradingProgammingASM);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 530, 71, 21));
        QFont font5;
        font5.setPointSize(10);
        label_10->setFont(font5);
        Test_table = new QTableWidget(GradingProgammingASM);
        if (Test_table->columnCount() < 4)
            Test_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Test_table->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Test_table->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Test_table->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Test_table->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        Test_table->setObjectName(QStringLiteral("Test_table"));
        Test_table->setGeometry(QRect(150, 81, 471, 111));
        Test_table->setSortingEnabled(true);
        label_2 = new QLabel(GradingProgammingASM);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 101, 161, 21));
        label_2->setFont(font3);
        label_3 = new QLabel(GradingProgammingASM);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(820, 100, 161, 21));
        label_3->setFont(font3);
        layoutWidget = new QWidget(GradingProgammingASM);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 530, 301, 71));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setSizeIncrement(QSize(0, 0));
        label_5->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        label_studentID = new QLabel(layoutWidget);
        label_studentID->setObjectName(QStringLiteral("label_studentID"));
        label_studentID->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_studentID);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        label_ItemID = new QLabel(layoutWidget);
        label_ItemID->setObjectName(QStringLiteral("label_ItemID"));
        label_ItemID->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_ItemID);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        label_ItemNumber = new QLabel(layoutWidget);
        label_ItemNumber->setObjectName(QStringLiteral("label_ItemNumber"));
        label_ItemNumber->setFont(font3);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_ItemNumber);

        lineEdit_commend = new QLineEdit(GradingProgammingASM);
        lineEdit_commend->setObjectName(QStringLiteral("lineEdit_commend"));
        lineEdit_commend->setGeometry(QRect(540, 530, 481, 20));
        label_11 = new QLabel(GradingProgammingASM);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 210, 131, 21));
        label_11->setFont(font);

        retranslateUi(GradingProgammingASM);

        QMetaObject::connectSlotsByName(GradingProgammingASM);
    } // setupUi

    void retranslateUi(QDialog *GradingProgammingASM)
    {
        GradingProgammingASM->setWindowTitle(QApplication::translate("GradingProgammingASM", "Dialog", 0));
        pushButton_goSubmissionPath->setText(QApplication::translate("GradingProgammingASM", "Open Student's Submission", 0));
        label_8->setText(QApplication::translate("GradingProgammingASM", "Grade", 0));
        label_receiveData->setText(QApplication::translate("GradingProgammingASM", "...", 0));
        label_9->setText(QApplication::translate("GradingProgammingASM", "Marking as: ", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_studentGrade->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GradingProgammingASM", "ItemNumber", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_studentGrade->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GradingProgammingASM", "ItemID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_studentGrade->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GradingProgammingASM", "Grade", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_studentGrade->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GradingProgammingASM", "Commend", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_studentGrade->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GradingProgammingASM", "Override", 0));
        pushButton_updateGrade->setText(QApplication::translate("GradingProgammingASM", "Update", 0));
        label->setText(QApplication::translate("GradingProgammingASM", "Activity ID:", 0));
        label_actName->setText(QApplication::translate("GradingProgammingASM", "TextLabel", 0));
        label_status->setText(QApplication::translate("GradingProgammingASM", "status", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_students->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("GradingProgammingASM", "Student ID", 0));
        label_activityID->setText(QApplication::translate("GradingProgammingASM", "TextLabel", 0));
        pushButton_Solution->setText(QApplication::translate("GradingProgammingASM", "Open Test Solution", 0));
        label_4->setText(QApplication::translate("GradingProgammingASM", "Activity Name:", 0));
        QTableWidgetItem *___qtablewidgetitem6 = Rubric_table->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("GradingProgammingASM", "Item Number", 0));
        QTableWidgetItem *___qtablewidgetitem7 = Rubric_table->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("GradingProgammingASM", "Item ID", 0));
        QTableWidgetItem *___qtablewidgetitem8 = Rubric_table->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("GradingProgammingASM", "Item Text", 0));
        QTableWidgetItem *___qtablewidgetitem9 = Rubric_table->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("GradingProgammingASM", "Value", 0));
        label_GradeStatus->setText(QString());
        label_10->setText(QApplication::translate("GradingProgammingASM", "Commend:", 0));
        QTableWidgetItem *___qtablewidgetitem10 = Test_table->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("GradingProgammingASM", "Test Number", 0));
        QTableWidgetItem *___qtablewidgetitem11 = Test_table->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("GradingProgammingASM", "Test ID", 0));
        QTableWidgetItem *___qtablewidgetitem12 = Test_table->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("GradingProgammingASM", "Number of Input Files", 0));
        QTableWidgetItem *___qtablewidgetitem13 = Test_table->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("GradingProgammingASM", "Number of Output Files", 0));
        label_2->setText(QApplication::translate("GradingProgammingASM", "Current Test Number:", 0));
        label_3->setText(QString());
        label_5->setText(QApplication::translate("GradingProgammingASM", "StudentID:", 0));
        label_studentID->setText(QString());
        label_6->setText(QApplication::translate("GradingProgammingASM", "Rubric Item ID:", 0));
        label_ItemID->setText(QString());
        label_7->setText(QApplication::translate("GradingProgammingASM", "Item Number:", 0));
        label_ItemNumber->setText(QString());
        label_11->setText(QApplication::translate("GradingProgammingASM", "Rubric:", 0));
    } // retranslateUi

};

namespace Ui {
    class GradingProgammingASM: public Ui_GradingProgammingASM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADINGPROGAMMINGASM_H
