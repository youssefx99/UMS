/********************************************************************************
** Form generated from reading UI file 'viewcoursedetails.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCOURSEDETAILS_H
#define UI_VIEWCOURSEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_viewCourseDetails
{
public:
    QComboBox *comboBoxCourse;
    QLineEdit *codeCourse;
    QLineEdit *hoursCourse;
    QLineEdit *lvlCourse;
    QLineEdit *pre_reqCourse;
    QLineEdit *instructorCourse;
    QSplitter *splitter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;

    void setupUi(QDialog *viewCourseDetails)
    {
        if (viewCourseDetails->objectName().isEmpty())
            viewCourseDetails->setObjectName("viewCourseDetails");
        viewCourseDetails->resize(849, 533);
        comboBoxCourse = new QComboBox(viewCourseDetails);
        comboBoxCourse->setObjectName("comboBoxCourse");
        comboBoxCourse->setGeometry(QRect(390, 50, 72, 24));
        codeCourse = new QLineEdit(viewCourseDetails);
        codeCourse->setObjectName("codeCourse");
        codeCourse->setGeometry(QRect(370, 140, 113, 24));
        hoursCourse = new QLineEdit(viewCourseDetails);
        hoursCourse->setObjectName("hoursCourse");
        hoursCourse->setGeometry(QRect(370, 200, 113, 24));
        lvlCourse = new QLineEdit(viewCourseDetails);
        lvlCourse->setObjectName("lvlCourse");
        lvlCourse->setGeometry(QRect(370, 270, 113, 24));
        pre_reqCourse = new QLineEdit(viewCourseDetails);
        pre_reqCourse->setObjectName("pre_reqCourse");
        pre_reqCourse->setGeometry(QRect(370, 330, 113, 24));
        instructorCourse = new QLineEdit(viewCourseDetails);
        instructorCourse->setObjectName("instructorCourse");
        instructorCourse->setGeometry(QRect(370, 400, 113, 24));
        splitter = new QSplitter(viewCourseDetails);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(220, 120, 71, 321));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        label_2 = new QLabel(splitter);
        label_2->setObjectName("label_2");
        splitter->addWidget(label_2);
        label_3 = new QLabel(splitter);
        label_3->setObjectName("label_3");
        splitter->addWidget(label_3);
        label_5 = new QLabel(splitter);
        label_5->setObjectName("label_5");
        splitter->addWidget(label_5);
        label_4 = new QLabel(splitter);
        label_4->setObjectName("label_4");
        splitter->addWidget(label_4);

        retranslateUi(viewCourseDetails);

        QMetaObject::connectSlotsByName(viewCourseDetails);
    } // setupUi

    void retranslateUi(QDialog *viewCourseDetails)
    {
        viewCourseDetails->setWindowTitle(QCoreApplication::translate("viewCourseDetails", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("viewCourseDetails", "Code", nullptr));
        label_2->setText(QCoreApplication::translate("viewCourseDetails", "Hours", nullptr));
        label_3->setText(QCoreApplication::translate("viewCourseDetails", "Level", nullptr));
        label_5->setText(QCoreApplication::translate("viewCourseDetails", "Pre-req", nullptr));
        label_4->setText(QCoreApplication::translate("viewCourseDetails", "Instructor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewCourseDetails: public Ui_viewCourseDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCOURSEDETAILS_H
