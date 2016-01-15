/********************************************************************************
** Form generated from reading UI file 'view_course.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_COURSE_H
#define UI_VIEW_COURSE_H

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

class Ui_view_course
{
public:
    QLabel *label_8;
    QLineEdit *Text_instructorEmployeeID;
    QLabel *label_6;
    QPushButton *pushButton_LoadCourse;
    QLineEdit *Text_instructorName;
    QLabel *label_7;
    QPushButton *pushButton_currentInfo;
    QTableWidget *Ta_list;
    QLabel *label_4;
    QDateEdit *date_startDate;
    QLineEdit *Text_courseName;
    QTableWidget *Courses;
    QLabel *label_3;
    QDateEdit *date_endDate;
    QLabel *label_5;
    QLabel *label;
    QTableWidget *Student_List;

    void setupUi(QDialog *view_course)
    {
        if (view_course->objectName().isEmpty())
            view_course->setObjectName(QStringLiteral("view_course"));
        view_course->resize(1278, 783);
        label_8 = new QLabel(view_course);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 230, 341, 81));
        Text_instructorEmployeeID = new QLineEdit(view_course);
        Text_instructorEmployeeID->setObjectName(QStringLiteral("Text_instructorEmployeeID"));
        Text_instructorEmployeeID->setGeometry(QRect(460, 210, 161, 20));
        label_6 = new QLabel(view_course);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 200, 71, 41));
        pushButton_LoadCourse = new QPushButton(view_course);
        pushButton_LoadCourse->setObjectName(QStringLiteral("pushButton_LoadCourse"));
        pushButton_LoadCourse->setGeometry(QRect(20, 750, 141, 23));
        Text_instructorName = new QLineEdit(view_course);
        Text_instructorName->setObjectName(QStringLiteral("Text_instructorName"));
        Text_instructorName->setGeometry(QRect(460, 170, 161, 20));
        label_7 = new QLabel(view_course);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(360, 170, 91, 16));
        pushButton_currentInfo = new QPushButton(view_course);
        pushButton_currentInfo->setObjectName(QStringLiteral("pushButton_currentInfo"));
        pushButton_currentInfo->setGeometry(QRect(380, 740, 151, 23));
        Ta_list = new QTableWidget(view_course);
        if (Ta_list->columnCount() < 2)
            Ta_list->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Ta_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Ta_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Ta_list->setObjectName(QStringLiteral("Ta_list"));
        Ta_list->setGeometry(QRect(350, 300, 211, 391));
        Ta_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_4 = new QLabel(view_course);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 140, 61, 16));
        date_startDate = new QDateEdit(view_course);
        date_startDate->setObjectName(QStringLiteral("date_startDate"));
        date_startDate->setGeometry(QRect(460, 100, 110, 22));
        Text_courseName = new QLineEdit(view_course);
        Text_courseName->setObjectName(QStringLiteral("Text_courseName"));
        Text_courseName->setGeometry(QRect(460, 60, 161, 20));
        Courses = new QTableWidget(view_course);
        if (Courses->columnCount() < 2)
            Courses->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Courses->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Courses->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        Courses->setObjectName(QStringLiteral("Courses"));
        Courses->setGeometry(QRect(20, 10, 271, 691));
        label_3 = new QLabel(view_course);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 100, 61, 16));
        date_endDate = new QDateEdit(view_course);
        date_endDate->setObjectName(QStringLiteral("date_endDate"));
        date_endDate->setGeometry(QRect(460, 140, 110, 22));
        label_5 = new QLabel(view_course);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 60, 61, 16));
        label = new QLabel(view_course);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 700, 371, 51));
        Student_List = new QTableWidget(view_course);
        if (Student_List->columnCount() < 5)
            Student_List->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        Student_List->setObjectName(QStringLiteral("Student_List"));
        Student_List->setGeometry(QRect(710, 50, 511, 681));

        retranslateUi(view_course);

        QMetaObject::connectSlotsByName(view_course);
    } // setupUi

    void retranslateUi(QDialog *view_course)
    {
        view_course->setWindowTitle(QApplication::translate("view_course", "Dialog", 0));
        label_8->setText(QApplication::translate("view_course", "* to assign TA's click select the Account ID row that identifies the Ta\n"
" *for multiple TA's click TA ID rows while holding the key Ctrl", 0));
        label_6->setText(QApplication::translate("view_course", "Instrucor\n"
"EmployeerID", 0));
        pushButton_LoadCourse->setText(QApplication::translate("view_course", "Load courses", 0));
        label_7->setText(QApplication::translate("view_course", "Instructors Name", 0));
        pushButton_currentInfo->setText(QApplication::translate("view_course", "Load current information", 0));
        QTableWidgetItem *___qtablewidgetitem = Ta_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("view_course", "TA NAME", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Ta_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("view_course", "TA ID", 0));
        label_4->setText(QApplication::translate("view_course", "End Date", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Courses->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("view_course", "Course ID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Courses->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("view_course", "Couse Name", 0));
        label_3->setText(QApplication::translate("view_course", "Start Date", 0));
        label_5->setText(QApplication::translate("view_course", "Couse Name", 0));
        label->setText(QApplication::translate("view_course", "Select the course ID of the course that want to see the information,\n"
"then click the button load current information", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Student_List->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("view_course", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = Student_List->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("view_course", "Middle Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = Student_List->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("view_course", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem7 = Student_List->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("view_course", "Student ID", 0));
        QTableWidgetItem *___qtablewidgetitem8 = Student_List->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("view_course", "Registration ID", 0));
    } // retranslateUi

};

namespace Ui {
    class view_course: public Ui_view_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_COURSE_H
