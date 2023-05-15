#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewCoursesPage
{
public:
    QComboBox *filterBox;
    QComboBox *filterSpecific;
    QListWidget *coursesView;
    QLabel *label;

    void setupUi(QDialog *ViewCoursesPage)
    {
        if (ViewCoursesPage->objectName().isEmpty())
            ViewCoursesPage->setObjectName("ViewCoursesPage");
        ViewCoursesPage->resize(544, 382);
        filterBox = new QComboBox(ViewCoursesPage);
        filterBox->setObjectName("filterBox");
        filterBox->setGeometry(QRect(170, 50, 72, 24));
        filterSpecific = new QComboBox(ViewCoursesPage);
        filterSpecific->setObjectName("filterSpecific");
        filterSpecific->setGeometry(QRect(310, 50, 72, 24));
        coursesView = new QListWidget(ViewCoursesPage);
        coursesView->setObjectName("listWidget");
        coursesView->setGeometry(QRect(150, 130, 256, 192));
        label = new QLabel(ViewCoursesPage);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 50, 51, 20));

        retranslateUi(ViewCoursesPage);

        QMetaObject::connectSlotsByName(ViewCoursesPage);
    } // setupUi

    void retranslateUi(QDialog *ViewCoursesPage)
    {
        ViewCoursesPage->setWindowTitle(QCoreApplication::translate("ViewCoursesPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewCoursesPage", "Filter by", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewCoursesPage: public Ui_ViewCoursesPage {};
} // namespace Ui

QT_END_NAMESPACE

