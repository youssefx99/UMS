/********************************************************************************
** Form generated from reading UI file 'viewcourses.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCOURSES_H
#define UI_VIEWCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewCourses
{
public:
    QComboBox *filterBox;
    QComboBox *filterSpecific;
    QLabel *label;
    QListWidget *coursesView;

    void setupUi(QDialog *ViewCourses)
    {
        if (ViewCourses->objectName().isEmpty())
            ViewCourses->setObjectName("ViewCourses");
        ViewCourses->resize(512, 384);
        filterBox = new QComboBox(ViewCourses);
        filterBox->setObjectName("filterBox");
        filterBox->setGeometry(QRect(150, 70, 72, 24));
        filterSpecific = new QComboBox(ViewCourses);
        filterSpecific->setObjectName("filterSpecific");
        filterSpecific->setGeometry(QRect(270, 70, 72, 24));
        label = new QLabel(ViewCourses);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 49, 16));
        coursesView = new QListWidget(ViewCourses);
        coursesView->setObjectName("coursesView");
        coursesView->setGeometry(QRect(110, 140, 256, 192));

        retranslateUi(ViewCourses);

        QMetaObject::connectSlotsByName(ViewCourses);
    } // setupUi

    void retranslateUi(QDialog *ViewCourses)
    {
        ViewCourses->setWindowTitle(QCoreApplication::translate("ViewCourses", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewCourses", "Filter by", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewCourses: public Ui_ViewCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCOURSES_H
