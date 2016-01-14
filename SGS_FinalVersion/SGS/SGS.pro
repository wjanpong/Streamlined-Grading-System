#-------------------------------------------------
#
# Project created by QtCreator 2015-07-19T16:24:21
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SGS
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    rolesel.cpp \
    astadmin.cpp \
    instructor.cpp \
    ta.cpp \
    marker.cpp \
    changepass.cpp \
    accountcreate.cpp \
    systemadminview.cpp \
    markingdash.cpp \
    createactivity.cpp \
    createrubric.cpp \
    programming.cpp \
    programmingfile.cpp \
    createbonuspenalty.cpp \
    modifyactivity.cpp \
    create_course.cpp \
    modify_courses.cpp \
    view_course.cpp \
    modifyprogramming.cpp \
    modifyrubric.cpp \
    viewbp.cpp \
    modifybp.cpp \
    programdetail.cpp \
    modifyprogrammingfile.cpp \
    gradingprogammingasm.cpp \
    administrator.cpp

HEADERS  += login.h \
    rolesel.h \
    astadmin.h \
    instructor.h \
    ta.h \
    marker.h \
    changepass.h \
    accountcreate.h \
    systemadminview.h \
    markingdash.h \
    createactivity.h \
    createrubric.h \
    programming.h \
    programmingfile.h \
    createbonuspenalty.h \
    modifyactivity.h \
    create_course.h \
    modify_courses.h \
    view_course.h \
    modifyprogramming.h \
    modifyrubric.h \
    viewbp.h \
    modifybp.h \
    programdetail.h \
    modifyprogrammingfile.h \
    gradingprogammingasm.h \
    administrator.h

FORMS    += login.ui \
    rolesel.ui \
    astadmin.ui \
    instructor.ui \
    ta.ui \
    marker.ui \
    changepass.ui \
    accountcreate.ui \
    systemadminview.ui \
    markingdash.ui \
    createactivity.ui \
    createrubric.ui \
    programming.ui \
    programmingfile.ui \
    createbonuspenalty.ui \
    modifyactivity.ui \
    create_course.ui \
    modify_courses.ui \
    view_course.ui \
    modifyprogramming.ui \
    modifyrubric.ui \
    viewbp.ui \
    modifybp.ui \
    programdetail.ui \
    modifyprogrammingfile.ui \
    gradingprogammingasm.ui \
    administrator.ui
