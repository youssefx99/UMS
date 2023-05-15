/********************************************************************************
** Form generated from reading UI file 'viewstudentsinacourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSTUDENTSINACOURSE_H
#define UI_VIEWSTUDENTSINACOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_viewstudentsinacourse
{
public:
    QListWidget *ViewList;
    QComboBox *Course_name;
    QPushButton *pushButton;

    void setupUi(QDialog *viewstudentsinacourse)
    {
        if (viewstudentsinacourse->objectName().isEmpty())
            viewstudentsinacourse->setObjectName("viewstudentsinacourse");
        viewstudentsinacourse->resize(779, 508);
        ViewList = new QListWidget(viewstudentsinacourse);
        ViewList->setObjectName("ViewList");
        ViewList->setGeometry(QRect(103, 160, 511, 281));
        Course_name = new QComboBox(viewstudentsinacourse);
        Course_name->setObjectName("Course_name");
        Course_name->setGeometry(QRect(108, 50, 201, 31));
        pushButton = new QPushButton(viewstudentsinacourse);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 50, 141, 31));

        retranslateUi(viewstudentsinacourse);

        QMetaObject::connectSlotsByName(viewstudentsinacourse);
    } // setupUi

    void retranslateUi(QDialog *viewstudentsinacourse)
    {
        viewstudentsinacourse->setWindowTitle(QCoreApplication::translate("viewstudentsinacourse", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("viewstudentsinacourse", "View Students", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewstudentsinacourse: public Ui_viewstudentsinacourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTUDENTSINACOURSE_H
