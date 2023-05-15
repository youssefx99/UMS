/********************************************************************************
** Form generated from reading UI file 'studentmainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMAINPAGE_H
#define UI_STUDENTMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentMainPage
{
public:
    QPushButton *ViewCourses;
    QPushButton *RegCourse;
    QPushButton *LogOutBTN;
    QPushButton *EditDataBTN;
    QPushButton *ViewRegCourses;
    QPushButton *VeiwCourseDet;
    QPushButton *viewcoursesgrades;

    void setupUi(QDialog *StudentMainPage)
    {
        if (StudentMainPage->objectName().isEmpty())
            StudentMainPage->setObjectName("StudentMainPage");
        StudentMainPage->resize(664, 372);
        ViewCourses = new QPushButton(StudentMainPage);
        ViewCourses->setObjectName("ViewCourses");
        ViewCourses->setGeometry(QRect(240, 40, 141, 24));
        RegCourse = new QPushButton(StudentMainPage);
        RegCourse->setObjectName("RegCourse");
        RegCourse->setGeometry(QRect(240, 100, 141, 24));
        LogOutBTN = new QPushButton(StudentMainPage);
        LogOutBTN->setObjectName("LogOutBTN");
        LogOutBTN->setGeometry(QRect(270, 320, 75, 24));
        EditDataBTN = new QPushButton(StudentMainPage);
        EditDataBTN->setObjectName("EditDataBTN");
        EditDataBTN->setGeometry(QRect(240, 160, 141, 24));
        ViewRegCourses = new QPushButton(StudentMainPage);
        ViewRegCourses->setObjectName("ViewRegCourses");
        ViewRegCourses->setGeometry(QRect(240, 210, 141, 24));
        VeiwCourseDet = new QPushButton(StudentMainPage);
        VeiwCourseDet->setObjectName("VeiwCourseDet");
        VeiwCourseDet->setGeometry(QRect(240, 260, 141, 24));
        viewcoursesgrades = new QPushButton(StudentMainPage);
        viewcoursesgrades->setObjectName("viewcoursesgrades");
        viewcoursesgrades->setGeometry(QRect(450, 180, 141, 24));

        retranslateUi(StudentMainPage);

        QMetaObject::connectSlotsByName(StudentMainPage);
    } // setupUi

    void retranslateUi(QDialog *StudentMainPage)
    {
        StudentMainPage->setWindowTitle(QCoreApplication::translate("StudentMainPage", "Dialog", nullptr));
        ViewCourses->setText(QCoreApplication::translate("StudentMainPage", "View Available Courses", nullptr));
        RegCourse->setText(QCoreApplication::translate("StudentMainPage", "Register Course", nullptr));
        LogOutBTN->setText(QCoreApplication::translate("StudentMainPage", "Log Out", nullptr));
        EditDataBTN->setText(QCoreApplication::translate("StudentMainPage", "Edit Data", nullptr));
        ViewRegCourses->setText(QCoreApplication::translate("StudentMainPage", "View Register Courses", nullptr));
        VeiwCourseDet->setText(QCoreApplication::translate("StudentMainPage", "View Course Details", nullptr));
        viewcoursesgrades->setText(QCoreApplication::translate("StudentMainPage", "View Courses Grades", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMainPage: public Ui_StudentMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMAINPAGE_H
