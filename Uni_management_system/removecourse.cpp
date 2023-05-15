#include "removecourse.h"
#include "ui_removecourse.h"
#include "Gvariables.h"
#include <QMessageBox>
RemoveCourse::RemoveCourse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveCourse)
{
    ui->setupUi(this);
}

RemoveCourse::~RemoveCourse()
{
    delete ui;
}

void RemoveCourse::on_RemoveCourseButton_clicked()
{
    string name = toUtf8(ui->CourseName->text());
    auto iter = CoursesData.find(name);
    if(iter != CoursesData.end()){
        CoursesData.erase(iter);
        QMessageBox msgBox;
        msgBox.setWindowTitle("Message");
        msgBox.setInformativeText("Course Deleted");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
    else{
        QMessageBox msgBox;
            msgBox.setText("Error");
            msgBox.setInformativeText("Course Not Found");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
    }

}

