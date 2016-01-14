/********************************************************************************
** Form generated from reading UI file 'modify_courses.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_COURSES_H
#define UI_MODIFY_COURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_modify_courses
{
public:
    QLineEdit *Text_courseName;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *line_3;
    QPushButton *pushButton_currentInfo;
    QLabel *label_5;
    QPushButton *pushButton_load;
    QLineEdit *Text_instructorEmployeeID;
    QLabel *label_4;
    QPushButton *pushButton_Add_modify_studentList;
    QDateEdit *date_startDate;
    QLineEdit *Text_instructorName;
    QDateEdit *date_endDate;
    QFrame *line_2;
    QTableWidget *Ta_list;
    QTableWidget *Courses;
    QTableWidget *Student_List;
    QPushButton *pushButton_A_M_studentList;
    QPushButton *pushButton_Add_tas;
    QPushButton *pushButton_LoadCourse;
    QLabel *label_6;
    QPushButton *pushButton_Modify;
    QLabel *label_3;
    QTableWidget *Ta_list_2;
    QFrame *line;

    void setupUi(QDialog *modify_courses)
    {
        if (modify_courses->objectName().isEmpty())
            modify_courses->setObjectName(QStringLiteral("modify_courses"));
        modify_courses->resize(1431, 824);
        Text_courseName = new QLineEdit(modify_courses);
        Text_courseName->setObjectName(QStringLiteral("Text_courseName"));
        Text_courseName->setGeometry(QRect(460, 60, 161, 20));
        label_7 = new QLabel(modify_courses);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(360, 170, 91, 16));
        label_8 = new QLabel(modify_courses);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(810, 390, 341, 81));
        line_3 = new QFrame(modify_courses);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(740, 390, 571, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_currentInfo = new QPushButton(modify_courses);
        pushButton_currentInfo->setObjectName(QStringLiteral("pushButton_currentInfo"));
        pushButton_currentInfo->setGeometry(QRect(350, 750, 151, 23));
        label_5 = new QLabel(modify_courses);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 60, 61, 16));
        pushButton_load = new QPushButton(modify_courses);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setGeometry(QRect(820, 700, 75, 23));
        Text_instructorEmployeeID = new QLineEdit(modify_courses);
        Text_instructorEmployeeID->setObjectName(QStringLiteral("Text_instructorEmployeeID"));
        Text_instructorEmployeeID->setGeometry(QRect(460, 210, 161, 20));
        label_4 = new QLabel(modify_courses);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 140, 61, 16));
        pushButton_Add_modify_studentList = new QPushButton(modify_courses);
        pushButton_Add_modify_studentList->setObjectName(QStringLiteral("pushButton_Add_modify_studentList"));
        pushButton_Add_modify_studentList->setGeometry(QRect(750, 360, 241, 21));
        date_startDate = new QDateEdit(modify_courses);
        date_startDate->setObjectName(QStringLiteral("date_startDate"));
        date_startDate->setGeometry(QRect(460, 100, 110, 22));
        Text_instructorName = new QLineEdit(modify_courses);
        Text_instructorName->setObjectName(QStringLiteral("Text_instructorName"));
        Text_instructorName->setGeometry(QRect(460, 170, 161, 20));
        date_endDate = new QDateEdit(modify_courses);
        date_endDate->setObjectName(QStringLiteral("date_endDate"));
        date_endDate->setGeometry(QRect(460, 140, 110, 22));
        line_2 = new QFrame(modify_courses);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(733, 10, 20, 791));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Ta_list = new QTableWidget(modify_courses);
        if (Ta_list->columnCount() < 2)
            Ta_list->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Ta_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Ta_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Ta_list->setObjectName(QStringLiteral("Ta_list"));
        Ta_list->setGeometry(QRect(350, 300, 211, 341));
        Ta_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Courses = new QTableWidget(modify_courses);
        if (Courses->columnCount() < 2)
            Courses->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Courses->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Courses->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        Courses->setObjectName(QStringLiteral("Courses"));
        Courses->setGeometry(QRect(20, 10, 271, 721));
        Student_List = new QTableWidget(modify_courses);
        if (Student_List->columnCount() < 4)
            Student_List->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Student_List->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        Student_List->setObjectName(QStringLiteral("Student_List"));
        Student_List->setGeometry(QRect(860, 60, 411, 251));
        pushButton_A_M_studentList = new QPushButton(modify_courses);
        pushButton_A_M_studentList->setObjectName(QStringLiteral("pushButton_A_M_studentList"));
        pushButton_A_M_studentList->setGeometry(QRect(1090, 360, 221, 23));
        pushButton_Add_tas = new QPushButton(modify_courses);
        pushButton_Add_tas->setObjectName(QStringLiteral("pushButton_Add_tas"));
        pushButton_Add_tas->setGeometry(QRect(820, 760, 251, 21));
        pushButton_LoadCourse = new QPushButton(modify_courses);
        pushButton_LoadCourse->setObjectName(QStringLiteral("pushButton_LoadCourse"));
        pushButton_LoadCourse->setGeometry(QRect(20, 750, 141, 23));
        label_6 = new QLabel(modify_courses);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 200, 71, 41));
        pushButton_Modify = new QPushButton(modify_courses);
        pushButton_Modify->setObjectName(QStringLiteral("pushButton_Modify"));
        pushButton_Modify->setGeometry(QRect(590, 750, 75, 23));
        label_3 = new QLabel(modify_courses);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 100, 61, 16));
        Ta_list_2 = new QTableWidget(modify_courses);
        if (Ta_list_2->columnCount() < 2)
            Ta_list_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Ta_list_2->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Ta_list_2->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        Ta_list_2->setObjectName(QStringLiteral("Ta_list_2"));
        Ta_list_2->setGeometry(QRect(820, 470, 201, 211));
        Ta_list_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        line = new QFrame(modify_courses);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(723, 10, 20, 791));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(modify_courses);

        QMetaObject::connectSlotsByName(modify_courses);
    } // setupUi

    void retranslateUi(QDialog *modify_courses)
    {
        modify_courses->setWindowTitle(QApplication::translate("modify_courses", "Dialog", 0));
        label_7->setText(QApplication::translate("modify_courses", "Instructors Name", 0));
        label_8->setText(QApplication::translate("modify_courses", "* to assign TA's click select the TA ID row that identifies the Ta\n"
" *for multiple TA's click TA ID rows while holding the key Ctrl", 0));
        pushButton_currentInfo->setText(QApplication::translate("modify_courses", "Load current information", 0));
        label_5->setText(QApplication::translate("modify_courses", "Couse Name", 0));
        pushButton_load->setText(QApplication::translate("modify_courses", "load TAs", 0));
        label_4->setText(QApplication::translate("modify_courses", "End Date", 0));
        pushButton_Add_modify_studentList->setText(QApplication::translate("modify_courses", "load Student List", 0));
        QTableWidgetItem *___qtablewidgetitem = Ta_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("modify_courses", "TA NAME", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Ta_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("modify_courses", "TA ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Courses->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("modify_courses", "Course ID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Courses->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("modify_courses", "Couse Name", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Student_List->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("modify_courses", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = Student_List->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("modify_courses", "Middle Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = Student_List->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("modify_courses", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem7 = Student_List->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("modify_courses", "Student ID", 0));
        pushButton_A_M_studentList->setText(QApplication::translate("modify_courses", "Add/Modify Student List", 0));
        pushButton_Add_tas->setText(QApplication::translate("modify_courses", "Add TA", 0));
        pushButton_LoadCourse->setText(QApplication::translate("modify_courses", "Load courses", 0));
        label_6->setText(QApplication::translate("modify_courses", "Instrucor\n"
"EmployeerID", 0));
        pushButton_Modify->setText(QApplication::translate("modify_courses", "modify ", 0));
        label_3->setText(QApplication::translate("modify_courses", "Start Date", 0));
        QTableWidgetItem *___qtablewidgetitem8 = Ta_list_2->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("modify_courses", "TA NAME", 0));
        QTableWidgetItem *___qtablewidgetitem9 = Ta_list_2->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("modify_courses", "TA ID", 0));
    } // retranslateUi

};

namespace Ui {
    class modify_courses: public Ui_modify_courses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_COURSES_H
