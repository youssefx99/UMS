/********************************************************************************
** Form generated from reading UI file 'courseedit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEEDIT_H
#define UI_COURSEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CourseEdit
{
public:
    QComboBox *CoursesNamesCB;
    QLabel *label;
    QLineEdit *Ccode;
    QLineEdit *CmaxStuds;
    QLineEdit *Chours;
    QLineEdit *Cinst;
    QLineEdit *CPR;
    QRadioButton *Creq;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QPushButton *EditCourseButton;
    QLabel *label_6;
    QLineEdit *CLevelTXT;

    void setupUi(QDialog *CourseEdit)
    {
        if (CourseEdit->objectName().isEmpty())
            CourseEdit->setObjectName("CourseEdit");
        CourseEdit->resize(506, 420);
        CoursesNamesCB = new QComboBox(CourseEdit);
        CoursesNamesCB->setObjectName("CoursesNamesCB");
        CoursesNamesCB->setGeometry(QRect(300, 30, 111, 24));
        label = new QLabel(CourseEdit);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 81, 16));
        Ccode = new QLineEdit(CourseEdit);
        Ccode->setObjectName("Ccode");
        Ccode->setGeometry(QRect(300, 70, 113, 24));
        CmaxStuds = new QLineEdit(CourseEdit);
        CmaxStuds->setObjectName("CmaxStuds");
        CmaxStuds->setGeometry(QRect(300, 110, 113, 24));
        Chours = new QLineEdit(CourseEdit);
        Chours->setObjectName("Chours");
        Chours->setGeometry(QRect(300, 150, 113, 24));
        Cinst = new QLineEdit(CourseEdit);
        Cinst->setObjectName("Cinst");
        Cinst->setGeometry(QRect(300, 190, 113, 24));
        CPR = new QLineEdit(CourseEdit);
        CPR->setObjectName("CPR");
        CPR->setGeometry(QRect(252, 280, 201, 24));
        Creq = new QRadioButton(CourseEdit);
        Creq->setObjectName("Creq");
        Creq->setGeometry(QRect(310, 330, 91, 22));
        label_2 = new QLabel(CourseEdit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 80, 81, 16));
        label_3 = new QLabel(CourseEdit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 120, 81, 16));
        label_4 = new QLabel(CourseEdit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 160, 81, 16));
        label_5 = new QLabel(CourseEdit);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 200, 91, 20));
        label_7 = new QLabel(CourseEdit);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 290, 81, 16));
        EditCourseButton = new QPushButton(CourseEdit);
        EditCourseButton->setObjectName("EditCourseButton");
        EditCourseButton->setGeometry(QRect(170, 370, 80, 24));
        label_6 = new QLabel(CourseEdit);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 240, 91, 20));
        CLevelTXT = new QLineEdit(CourseEdit);
        CLevelTXT->setObjectName("CLevelTXT");
        CLevelTXT->setGeometry(QRect(300, 230, 113, 24));

        retranslateUi(CourseEdit);

        QMetaObject::connectSlotsByName(CourseEdit);
    } // setupUi

    void retranslateUi(QDialog *CourseEdit)
    {
        CourseEdit->setWindowTitle(QCoreApplication::translate("CourseEdit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CourseEdit", "Course Name", nullptr));
        Creq->setText(QCoreApplication::translate("CourseEdit", "Required", nullptr));
        label_2->setText(QCoreApplication::translate("CourseEdit", "Course Code", nullptr));
        label_3->setText(QCoreApplication::translate("CourseEdit", "Max Students", nullptr));
        label_4->setText(QCoreApplication::translate("CourseEdit", "Course Hours", nullptr));
        label_5->setText(QCoreApplication::translate("CourseEdit", "Course Instructor", nullptr));
        label_7->setText(QCoreApplication::translate("CourseEdit", "Pre-Requisits", nullptr));
        EditCourseButton->setText(QCoreApplication::translate("CourseEdit", "Edit", nullptr));
        label_6->setText(QCoreApplication::translate("CourseEdit", "Course Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseEdit: public Ui_CourseEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEEDIT_H
