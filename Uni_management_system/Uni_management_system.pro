QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addTransStudent.cpp \
    add_new_student.cpp \
    addcourse.cpp \
    addgradesforstudent.cpp \
    adminlogin.cpp \
    adminmainpage.cpp \
    courseedit.cpp \
    editstudentdata.cpp \
    main.cpp \
    mainwindow.cpp \
    registercourse.cpp \
    removecourse.cpp \
    removestudent.cpp \
    studentlogin.cpp \
    studentmainpage.cpp \
    viewcoursedetails.cpp \
    viewcourses.cpp \
    viewcoursesgrades.cpp \
    viewcoursesofastudent.cpp \
    viewregistercourses.cpp \
    viewstudentsinacourse.cpp

HEADERS += \
    Courses.h \
    Gvariables.h \
    Student.h \
    addTransStudent.h \
    add_new_student.h \
    addcourse.h \
    addgradesforstudent.h \
    adminlogin.h \
    adminmainpage.h \
    courseedit.h \
    editstudentdata.h \
    mainwindow.h \
    registercourse.h \
    removecourse.h \
    removestudent.h \
    studentlogin.h \
    studentmainpage.h \
    viewcoursedetails.h \
    viewcourses.h \
    viewcoursesgrades.h \
    viewcoursesofastudent.h \
    viewregistercourses.h \
    viewstudentsinacourse.h

FORMS += \
    addTransStudent.ui \
    add_new_student.ui \
    addcourse.ui \
    addgradesforstudent.ui \
    adminlogin.ui \
    adminmainpage.ui \
    courseedit.ui \
    editstudentdata.ui \
    mainwindow.ui \
    registercourse.ui \
    removecourse.ui \
    removestudent.ui \
    studentlogin.ui \
    studentmainpage.ui \
    viewcoursedetails.ui \
    viewcourses.ui \
    viewcoursesgrades.ui \
    viewcoursesofastudent.ui \
    viewregistercourses.ui \
    viewstudentsinacourse.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
