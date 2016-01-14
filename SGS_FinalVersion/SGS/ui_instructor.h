/********************************************************************************
** Form generated from reading UI file 'instructor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTOR_H
#define UI_INSTRUCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instructor
{
public:
    QLabel *label_status;
    QPushButton *pushButton_mark;
    QPushButton *pushButton_DeleteActivity;
    QPushButton *pushButton_ModifyWin;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *show_course;
    QScrollBar *horizontalScrollBar_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *show_activity;
    QScrollBar *horizontalScrollBar_2;
    QPushButton *pushButtonDisplay;
    QPushButton *pushButton_CreateActivityWin;
    QPushButton *pushButton_CreateRubricWin;
    QLabel *label;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_ChangePass;
    QPushButton *pushButton_modifyRubric;
    QPushButton *pushButton_viewBP;
    QPushButton *pushButton_viewProgAct;

    void setupUi(QDialog *Instructor)
    {
        if (Instructor->objectName().isEmpty())
            Instructor->setObjectName(QStringLiteral("Instructor"));
        Instructor->resize(1065, 775);
        label_status = new QLabel(Instructor);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 700, 181, 21));
        pushButton_mark = new QPushButton(Instructor);
        pushButton_mark->setObjectName(QStringLiteral("pushButton_mark"));
        pushButton_mark->setGeometry(QRect(910, 70, 91, 21));
        pushButton_DeleteActivity = new QPushButton(Instructor);
        pushButton_DeleteActivity->setObjectName(QStringLiteral("pushButton_DeleteActivity"));
        pushButton_DeleteActivity->setGeometry(QRect(880, 670, 111, 23));
        pushButton_ModifyWin = new QPushButton(Instructor);
        pushButton_ModifyWin->setObjectName(QStringLiteral("pushButton_ModifyWin"));
        pushButton_ModifyWin->setGeometry(QRect(760, 670, 101, 23));
        label_3 = new QLabel(Instructor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 370, 101, 31));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        layoutWidget_2 = new QWidget(Instructor);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 100, 991, 211));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        show_course = new QTableWidget(layoutWidget_2);
        if (show_course->columnCount() < 5)
            show_course->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        show_course->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        show_course->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        show_course->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        show_course->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        show_course->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        show_course->setObjectName(QStringLiteral("show_course"));
        show_course->setLineWidth(3);
        show_course->setSelectionMode(QAbstractItemView::SingleSelection);
        show_course->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(show_course);

        horizontalScrollBar_3 = new QScrollBar(layoutWidget_2);
        horizontalScrollBar_3->setObjectName(QStringLiteral("horizontalScrollBar_3"));
        horizontalScrollBar_3->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalScrollBar_3);


        horizontalLayout_3->addLayout(verticalLayout_3);

        layoutWidget = new QWidget(Instructor);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 410, 991, 241));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        show_activity = new QTableWidget(layoutWidget);
        if (show_activity->columnCount() < 9)
            show_activity->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QFont font1;
        font1.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        show_activity->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        show_activity->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        QFont font2;
        font2.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font2);
        show_activity->setHorizontalHeaderItem(8, __qtablewidgetitem13);
        show_activity->setObjectName(QStringLiteral("show_activity"));
        show_activity->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(show_activity);

        horizontalScrollBar_2 = new QScrollBar(layoutWidget);
        horizontalScrollBar_2->setObjectName(QStringLiteral("horizontalScrollBar_2"));
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalScrollBar_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButtonDisplay = new QPushButton(Instructor);
        pushButtonDisplay->setObjectName(QStringLiteral("pushButtonDisplay"));
        pushButtonDisplay->setGeometry(QRect(10, 70, 75, 23));
        pushButton_CreateActivityWin = new QPushButton(Instructor);
        pushButton_CreateActivityWin->setObjectName(QStringLiteral("pushButton_CreateActivityWin"));
        pushButton_CreateActivityWin->setGeometry(QRect(410, 330, 211, 23));
        pushButton_CreateRubricWin = new QPushButton(Instructor);
        pushButton_CreateRubricWin->setObjectName(QStringLiteral("pushButton_CreateRubricWin"));
        pushButton_CreateRubricWin->setGeometry(QRect(180, 670, 101, 23));
        label = new QLabel(Instructor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 0, 131, 41));
        label->setFont(font);
        layoutWidget1 = new QWidget(Instructor);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 77, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_logout = new QPushButton(layoutWidget1);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        verticalLayout->addWidget(pushButton_logout);

        pushButton_ChangePass = new QPushButton(layoutWidget1);
        pushButton_ChangePass->setObjectName(QStringLiteral("pushButton_ChangePass"));

        verticalLayout->addWidget(pushButton_ChangePass);

        pushButton_modifyRubric = new QPushButton(Instructor);
        pushButton_modifyRubric->setObjectName(QStringLiteral("pushButton_modifyRubric"));
        pushButton_modifyRubric->setGeometry(QRect(180, 710, 101, 23));
        pushButton_viewBP = new QPushButton(Instructor);
        pushButton_viewBP->setObjectName(QStringLiteral("pushButton_viewBP"));
        pushButton_viewBP->setGeometry(QRect(30, 670, 141, 23));
        pushButton_viewProgAct = new QPushButton(Instructor);
        pushButton_viewProgAct->setObjectName(QStringLiteral("pushButton_viewProgAct"));
        pushButton_viewProgAct->setGeometry(QRect(540, 670, 201, 23));

        retranslateUi(Instructor);

        QMetaObject::connectSlotsByName(Instructor);
    } // setupUi

    void retranslateUi(QDialog *Instructor)
    {
        Instructor->setWindowTitle(QApplication::translate("Instructor", "Dialog", 0));
        label_status->setText(QApplication::translate("Instructor", "...", 0));
        pushButton_mark->setText(QApplication::translate("Instructor", "Mark", 0));
        pushButton_DeleteActivity->setText(QApplication::translate("Instructor", "Delete Activity", 0));
        pushButton_ModifyWin->setText(QApplication::translate("Instructor", "Modify Acitivity", 0));
        label_3->setText(QApplication::translate("Instructor", "Activity", 0));
        QTableWidgetItem *___qtablewidgetitem = show_course->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Instructor", "Course Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = show_course->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Instructor", "Course ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = show_course->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Instructor", "Start Date", 0));
        QTableWidgetItem *___qtablewidgetitem3 = show_course->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Instructor", "End Date", 0));
        QTableWidgetItem *___qtablewidgetitem4 = show_course->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Instructor", "Employee ID", 0));
        QTableWidgetItem *___qtablewidgetitem5 = show_activity->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("Instructor", "Activity Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = show_activity->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("Instructor", "Activity ID", 0));
        QTableWidgetItem *___qtablewidgetitem7 = show_activity->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("Instructor", "Course ID", 0));
        QTableWidgetItem *___qtablewidgetitem8 = show_activity->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("Instructor", "Activity Type", 0));
        QTableWidgetItem *___qtablewidgetitem9 = show_activity->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("Instructor", "Due Date", 0));
        QTableWidgetItem *___qtablewidgetitem10 = show_activity->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("Instructor", "Language", 0));
        QTableWidgetItem *___qtablewidgetitem11 = show_activity->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("Instructor", "Path to Submissions", 0));
        QTableWidgetItem *___qtablewidgetitem12 = show_activity->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("Instructor", "Num Tests", 0));
        QTableWidgetItem *___qtablewidgetitem13 = show_activity->horizontalHeaderItem(8);
        ___qtablewidgetitem13->setText(QApplication::translate("Instructor", "Path to Solution", 0));
        pushButtonDisplay->setText(QApplication::translate("Instructor", "Display", 0));
        pushButton_CreateActivityWin->setText(QApplication::translate("Instructor", "Create Activity On Selected Course", 0));
        pushButton_CreateRubricWin->setText(QApplication::translate("Instructor", "Create Rubric", 0));
        label->setText(QApplication::translate("Instructor", "Instructor", 0));
        pushButton_logout->setText(QApplication::translate("Instructor", "Logout", 0));
        pushButton_ChangePass->setText(QApplication::translate("Instructor", "Change Pass", 0));
        pushButton_modifyRubric->setText(QApplication::translate("Instructor", "Modify Rubric", 0));
        pushButton_viewBP->setText(QApplication::translate("Instructor", "View Bonus/Penalty", 0));
        pushButton_viewProgAct->setText(QApplication::translate("Instructor", "View Programming Activity Details", 0));
    } // retranslateUi

};

namespace Ui {
    class Instructor: public Ui_Instructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTOR_H
