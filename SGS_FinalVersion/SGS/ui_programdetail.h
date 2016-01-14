/********************************************************************************
** Form generated from reading UI file 'programdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMDETAIL_H
#define UI_PROGRAMDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgramDetail
{
public:
    QLabel *label_2;
    QPushButton *pushButton_ModifyPT;
    QPushButton *pushButton_Display;
    QPushButton *pushButton_3;
    QPushButton *pushButton_createPT;
    QTableWidget *tableWidget_progTest;
    QPushButton *pushButton_DeletePT;
    QLabel *label;
    QFrame *line;
    QTableWidget *tableWidget_fileInSys;
    QPushButton *pushButton_createFIS;
    QPushButton *pushButton_ModifyFIS;

    void setupUi(QDialog *ProgramDetail)
    {
        if (ProgramDetail->objectName().isEmpty())
            ProgramDetail->setObjectName(QStringLiteral("ProgramDetail"));
        ProgramDetail->resize(782, 603);
        label_2 = new QLabel(ProgramDetail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 350, 71, 16));
        pushButton_ModifyPT = new QPushButton(ProgramDetail);
        pushButton_ModifyPT->setObjectName(QStringLiteral("pushButton_ModifyPT"));
        pushButton_ModifyPT->setGeometry(QRect(610, 140, 75, 23));
        pushButton_Display = new QPushButton(ProgramDetail);
        pushButton_Display->setObjectName(QStringLiteral("pushButton_Display"));
        pushButton_Display->setGeometry(QRect(160, 10, 331, 23));
        pushButton_3 = new QPushButton(ProgramDetail);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 510, 75, 23));
        pushButton_createPT = new QPushButton(ProgramDetail);
        pushButton_createPT->setObjectName(QStringLiteral("pushButton_createPT"));
        pushButton_createPT->setGeometry(QRect(610, 90, 75, 23));
        tableWidget_progTest = new QTableWidget(ProgramDetail);
        if (tableWidget_progTest->columnCount() < 5)
            tableWidget_progTest->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_progTest->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_progTest->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_progTest->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_progTest->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_progTest->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_progTest->setObjectName(QStringLiteral("tableWidget_progTest"));
        tableWidget_progTest->setGeometry(QRect(60, 80, 511, 192));
        tableWidget_progTest->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_DeletePT = new QPushButton(ProgramDetail);
        pushButton_DeletePT->setObjectName(QStringLiteral("pushButton_DeletePT"));
        pushButton_DeletePT->setGeometry(QRect(610, 180, 75, 23));
        label = new QLabel(ProgramDetail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 91, 16));
        line = new QFrame(ProgramDetail);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 310, 1051, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget_fileInSys = new QTableWidget(ProgramDetail);
        if (tableWidget_fileInSys->columnCount() < 5)
            tableWidget_fileInSys->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_fileInSys->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_fileInSys->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_fileInSys->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_fileInSys->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_fileInSys->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_fileInSys->setObjectName(QStringLiteral("tableWidget_fileInSys"));
        tableWidget_fileInSys->setGeometry(QRect(60, 380, 511, 192));
        tableWidget_fileInSys->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_createFIS = new QPushButton(ProgramDetail);
        pushButton_createFIS->setObjectName(QStringLiteral("pushButton_createFIS"));
        pushButton_createFIS->setGeometry(QRect(620, 410, 75, 23));
        pushButton_ModifyFIS = new QPushButton(ProgramDetail);
        pushButton_ModifyFIS->setObjectName(QStringLiteral("pushButton_ModifyFIS"));
        pushButton_ModifyFIS->setGeometry(QRect(620, 460, 75, 23));

        retranslateUi(ProgramDetail);

        QMetaObject::connectSlotsByName(ProgramDetail);
    } // setupUi

    void retranslateUi(QDialog *ProgramDetail)
    {
        ProgramDetail->setWindowTitle(QApplication::translate("ProgramDetail", "Dialog", 0));
        label_2->setText(QApplication::translate("ProgramDetail", "File In System", 0));
        pushButton_ModifyPT->setText(QApplication::translate("ProgramDetail", "Modify", 0));
        pushButton_Display->setText(QApplication::translate("ProgramDetail", "Display", 0));
        pushButton_3->setText(QApplication::translate("ProgramDetail", "Delete", 0));
        pushButton_createPT->setText(QApplication::translate("ProgramDetail", "Create", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_progTest->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProgramDetail", "testID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_progTest->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProgramDetail", "testNum", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_progTest->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ProgramDetail", "numOfInputFiles", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_progTest->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ProgramDetail", "numOfOutputFiles", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_progTest->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ProgramDetail", "environment", 0));
        pushButton_DeletePT->setText(QApplication::translate("ProgramDetail", "Delete", 0));
        label->setText(QApplication::translate("ProgramDetail", "Programming Test", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_fileInSys->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ProgramDetail", "fileID", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_fileInSys->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ProgramDetail", "fileTypeID", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_fileInSys->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ProgramDetail", "testNum", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_fileInSys->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("ProgramDetail", "pathToFile", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_fileInSys->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("ProgramDetail", "Type", 0));
        pushButton_createFIS->setText(QApplication::translate("ProgramDetail", "Create", 0));
        pushButton_ModifyFIS->setText(QApplication::translate("ProgramDetail", "Modify", 0));
    } // retranslateUi

};

namespace Ui {
    class ProgramDetail: public Ui_ProgramDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMDETAIL_H
