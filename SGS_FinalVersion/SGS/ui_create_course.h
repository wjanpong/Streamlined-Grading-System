/********************************************************************************
** Form generated from reading UI file 'create_course.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_COURSE_H
#define UI_CREATE_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_create_course
{
public:
    QLabel *label_7;
    QPushButton *pushButton_load;
    QPushButton *pushButton_create;
    QDateEdit *date_startDate;
    QLabel *label_4;
    QLineEdit *Text_instructorEmployeeID;
    QDateEdit *date_endDate;
    QLineEdit *Text_courseName;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_3;
    QTableWidget *Ta_list;
    QLineEdit *Text_instructorName;

    void setupUi(QDialog *create_course)
    {
        if (create_course->objectName().isEmpty())
            create_course->setObjectName(QStringLiteral("create_course"));
        create_course->resize(609, 561);
        label_7 = new QLabel(create_course);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 180, 91, 16));
        pushButton_load = new QPushButton(create_course);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setGeometry(QRect(70, 490, 75, 23));
        pushButton_create = new QPushButton(create_course);
        pushButton_create->setObjectName(QStringLiteral("pushButton_create"));
        pushButton_create->setGeometry(QRect(500, 510, 75, 23));
        date_startDate = new QDateEdit(create_course);
        date_startDate->setObjectName(QStringLiteral("date_startDate"));
        date_startDate->setGeometry(QRect(170, 60, 110, 22));
        label_4 = new QLabel(create_course);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 100, 61, 16));
        Text_instructorEmployeeID = new QLineEdit(create_course);
        Text_instructorEmployeeID->setObjectName(QStringLiteral("Text_instructorEmployeeID"));
        Text_instructorEmployeeID->setGeometry(QRect(470, 180, 161, 20));
        date_endDate = new QDateEdit(create_course);
        date_endDate->setObjectName(QStringLiteral("date_endDate"));
        date_endDate->setGeometry(QRect(170, 100, 110, 22));
        Text_courseName = new QLineEdit(create_course);
        Text_courseName->setObjectName(QStringLiteral("Text_courseName"));
        Text_courseName->setGeometry(QRect(150, 20, 161, 20));
        label_5 = new QLabel(create_course);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 20, 61, 16));
        label_8 = new QLabel(create_course);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 210, 341, 81));
        label_6 = new QLabel(create_course);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 170, 71, 41));
        label_3 = new QLabel(create_course);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 60, 61, 16));
        Ta_list = new QTableWidget(create_course);
        if (Ta_list->columnCount() < 2)
            Ta_list->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Ta_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Ta_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Ta_list->setObjectName(QStringLiteral("Ta_list"));
        Ta_list->setGeometry(QRect(100, 280, 211, 192));
        Ta_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Text_instructorName = new QLineEdit(create_course);
        Text_instructorName->setObjectName(QStringLiteral("Text_instructorName"));
        Text_instructorName->setGeometry(QRect(150, 180, 161, 20));

        retranslateUi(create_course);

        QMetaObject::connectSlotsByName(create_course);
    } // setupUi

    void retranslateUi(QDialog *create_course)
    {
        create_course->setWindowTitle(QApplication::translate("create_course", "Dialog", 0));
        label_7->setText(QApplication::translate("create_course", "Instructors Name", 0));
        pushButton_load->setText(QApplication::translate("create_course", "load", 0));
        pushButton_create->setText(QApplication::translate("create_course", "create", 0));
        label_4->setText(QApplication::translate("create_course", "End Date", 0));
        label_5->setText(QApplication::translate("create_course", "Couse Name", 0));
        label_8->setText(QApplication::translate("create_course", "* to assign TA's click select the TA ID row that identifies the Ta\n"
" *for multiple TA's click TA ID rows while holding the key Ctrl", 0));
        label_6->setText(QApplication::translate("create_course", "Instrucor\n"
"EmployeerID", 0));
        label_3->setText(QApplication::translate("create_course", "Start Date", 0));
        QTableWidgetItem *___qtablewidgetitem = Ta_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("create_course", "TA Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Ta_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("create_course", "TA ID", 0));
    } // retranslateUi

};

namespace Ui {
    class create_course: public Ui_create_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_COURSE_H
