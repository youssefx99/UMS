/********************************************************************************
** Form generated from reading UI file 'viewregistercourses.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWREGISTERCOURSES_H
#define UI_VIEWREGISTERCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_viewRegisterCourses
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *StudName;
    QLabel *StudLvl;
    QListWidget *coursesList;

    void setupUi(QDialog *viewRegisterCourses)
    {
        if (viewRegisterCourses->objectName().isEmpty())
            viewRegisterCourses->setObjectName("viewRegisterCourses");
        viewRegisterCourses->resize(755, 451);
        label = new QLabel(viewRegisterCourses);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 50, 81, 20));
        label_2 = new QLabel(viewRegisterCourses);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 110, 81, 20));
        StudName = new QLabel(viewRegisterCourses);
        StudName->setObjectName("StudName");
        StudName->setGeometry(QRect(400, 50, 81, 20));
        StudLvl = new QLabel(viewRegisterCourses);
        StudLvl->setObjectName("StudLvl");
        StudLvl->setGeometry(QRect(400, 110, 81, 20));
        coursesList = new QListWidget(viewRegisterCourses);
        coursesList->setObjectName("coursesList");
        coursesList->setGeometry(QRect(240, 180, 256, 192));

        retranslateUi(viewRegisterCourses);

        QMetaObject::connectSlotsByName(viewRegisterCourses);
    } // setupUi

    void retranslateUi(QDialog *viewRegisterCourses)
    {
        viewRegisterCourses->setWindowTitle(QCoreApplication::translate("viewRegisterCourses", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("viewRegisterCourses", "Student Name", nullptr));
        label_2->setText(QCoreApplication::translate("viewRegisterCourses", "Student Level", nullptr));
        StudName->setText(QCoreApplication::translate("viewRegisterCourses", "Student Name", nullptr));
        StudLvl->setText(QCoreApplication::translate("viewRegisterCourses", "Student Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewRegisterCourses: public Ui_viewRegisterCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWREGISTERCOURSES_H
