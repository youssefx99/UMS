/********************************************************************************
** Form generated from reading UI file 'viewcoursesofastudent.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCOURSESOFASTUDENT_H
#define UI_VIEWCOURSESOFASTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_viewcoursesofastudent
{
public:
    QComboBox *students_cmb;
    QLabel *label;
    QSplitter *splitter;
    QListWidget *inProgress_lv;
    QListWidget *finished_lv;
    QLabel *label_2;
    QPushButton *viewCourses_btn;
    QLabel *label_3;

    void setupUi(QDialog *viewcoursesofastudent)
    {
        if (viewcoursesofastudent->objectName().isEmpty())
            viewcoursesofastudent->setObjectName("viewcoursesofastudent");
        viewcoursesofastudent->resize(636, 447);
        students_cmb = new QComboBox(viewcoursesofastudent);
        students_cmb->setObjectName("students_cmb");
        students_cmb->setGeometry(QRect(230, 50, 141, 24));
        label = new QLabel(viewcoursesofastudent);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 30, 111, 16));
        splitter = new QSplitter(viewcoursesofastudent);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(150, 120, 311, 191));
        splitter->setOrientation(Qt::Horizontal);
        inProgress_lv = new QListWidget(splitter);
        inProgress_lv->setObjectName("inProgress_lv");
        splitter->addWidget(inProgress_lv);
        finished_lv = new QListWidget(splitter);
        finished_lv->setObjectName("finished_lv");
        splitter->addWidget(finished_lv);
        label_2 = new QLabel(viewcoursesofastudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 100, 121, 16));
        viewCourses_btn = new QPushButton(viewcoursesofastudent);
        viewCourses_btn->setObjectName("viewCourses_btn");
        viewCourses_btn->setGeometry(QRect(260, 330, 101, 24));
        label_3 = new QLabel(viewcoursesofastudent);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 100, 141, 20));

        retranslateUi(viewcoursesofastudent);

        QMetaObject::connectSlotsByName(viewcoursesofastudent);
    } // setupUi

    void retranslateUi(QDialog *viewcoursesofastudent)
    {
        viewcoursesofastudent->setWindowTitle(QCoreApplication::translate("viewcoursesofastudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("viewcoursesofastudent", "Select a Student", nullptr));
        label_2->setText(QCoreApplication::translate("viewcoursesofastudent", "Finished Courses", nullptr));
        viewCourses_btn->setText(QCoreApplication::translate("viewcoursesofastudent", "View Courses", nullptr));
        label_3->setText(QCoreApplication::translate("viewcoursesofastudent", "In Progress Courses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewcoursesofastudent: public Ui_viewcoursesofastudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCOURSESOFASTUDENT_H
