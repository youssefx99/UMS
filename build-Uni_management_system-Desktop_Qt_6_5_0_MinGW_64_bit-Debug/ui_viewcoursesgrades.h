/********************************************************************************
** Form generated from reading UI file 'viewcoursesgrades.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCOURSESGRADES_H
#define UI_VIEWCOURSESGRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_viewcoursesgrades
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *Student_Id;
    QLabel *course_grade;
    QLabel *cgpa;
    QLabel *std_name;
    QComboBox *std_combo;

    void setupUi(QDialog *viewcoursesgrades)
    {
        if (viewcoursesgrades->objectName().isEmpty())
            viewcoursesgrades->setObjectName("viewcoursesgrades");
        viewcoursesgrades->resize(633, 329);
        label = new QLabel(viewcoursesgrades);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 60, 49, 16));
        label_2 = new QLabel(viewcoursesgrades);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 100, 49, 16));
        label_3 = new QLabel(viewcoursesgrades);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 140, 49, 16));
        label_4 = new QLabel(viewcoursesgrades);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 220, 49, 16));
        label_5 = new QLabel(viewcoursesgrades);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 180, 49, 16));
        Student_Id = new QLabel(viewcoursesgrades);
        Student_Id->setObjectName("Student_Id");
        Student_Id->setGeometry(QRect(310, 100, 91, 16));
        course_grade = new QLabel(viewcoursesgrades);
        course_grade->setObjectName("course_grade");
        course_grade->setGeometry(QRect(310, 180, 49, 16));
        cgpa = new QLabel(viewcoursesgrades);
        cgpa->setObjectName("cgpa");
        cgpa->setGeometry(QRect(310, 220, 49, 16));
        std_name = new QLabel(viewcoursesgrades);
        std_name->setObjectName("std_name");
        std_name->setGeometry(QRect(310, 60, 49, 16));
        std_combo = new QComboBox(viewcoursesgrades);
        std_combo->setObjectName("std_combo");
        std_combo->setGeometry(QRect(310, 140, 161, 24));

        retranslateUi(viewcoursesgrades);

        QMetaObject::connectSlotsByName(viewcoursesgrades);
    } // setupUi

    void retranslateUi(QDialog *viewcoursesgrades)
    {
        viewcoursesgrades->setWindowTitle(QCoreApplication::translate("viewcoursesgrades", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("viewcoursesgrades", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("viewcoursesgrades", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("viewcoursesgrades", "Course:", nullptr));
        label_4->setText(QCoreApplication::translate("viewcoursesgrades", "CGPA", nullptr));
        label_5->setText(QCoreApplication::translate("viewcoursesgrades", "Grade:", nullptr));
        Student_Id->setText(QCoreApplication::translate("viewcoursesgrades", "TextLabel", nullptr));
        course_grade->setText(QString());
        cgpa->setText(QString());
        std_name->setText(QCoreApplication::translate("viewcoursesgrades", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewcoursesgrades: public Ui_viewcoursesgrades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCOURSESGRADES_H
