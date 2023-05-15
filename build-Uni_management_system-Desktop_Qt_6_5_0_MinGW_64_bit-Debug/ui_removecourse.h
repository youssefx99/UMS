/********************************************************************************
** Form generated from reading UI file 'removecourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECOURSE_H
#define UI_REMOVECOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemoveCourse
{
public:
    QPushButton *RemoveCourseButton;
    QLineEdit *CourseName;
    QLabel *label;

    void setupUi(QDialog *RemoveCourse)
    {
        if (RemoveCourse->objectName().isEmpty())
            RemoveCourse->setObjectName("RemoveCourse");
        RemoveCourse->resize(489, 117);
        RemoveCourseButton = new QPushButton(RemoveCourse);
        RemoveCourseButton->setObjectName("RemoveCourseButton");
        RemoveCourseButton->setGeometry(QRect(339, 50, 91, 24));
        CourseName = new QLineEdit(RemoveCourse);
        CourseName->setObjectName("CourseName");
        CourseName->setGeometry(QRect(180, 50, 113, 24));
        label = new QLabel(RemoveCourse);
        label->setObjectName("label");
        label->setGeometry(QRect(48, 50, 71, 20));

        retranslateUi(RemoveCourse);

        QMetaObject::connectSlotsByName(RemoveCourse);
    } // setupUi

    void retranslateUi(QDialog *RemoveCourse)
    {
        RemoveCourse->setWindowTitle(QCoreApplication::translate("RemoveCourse", "Dialog", nullptr));
        RemoveCourseButton->setText(QCoreApplication::translate("RemoveCourse", "Remove Course", nullptr));
        label->setText(QCoreApplication::translate("RemoveCourse", "Course Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveCourse: public Ui_RemoveCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECOURSE_H
