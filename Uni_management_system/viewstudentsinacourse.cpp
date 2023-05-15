#include "viewstudentsinacourse.h"
#include "ui_viewstudentsinacourse.h"
#include <set>
#include "Gvariables.h"
#include "Courses.h"
#include <algorithm>
#include <QString>
#include <string>

viewstudentsinacourse::viewstudentsinacourse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewstudentsinacourse)
{
    ui->setupUi(this);
    int Size = CoursesData.size();
    QString* courseNames = new QString[Size];
    auto iter = CoursesData.begin();
    QString* ptr = courseNames;
    while(iter!= CoursesData.end()){
        *ptr = QString::fromStdString(iter->first);
        ptr++;
        ++iter;
    }
    ptr = courseNames;
    while(Size--)
        ui->Course_name->addItem(*ptr++);
    delete [] courseNames;
}

viewstudentsinacourse::~viewstudentsinacourse()
{
    delete ui;
}

void viewstudentsinacourse::on_pushButton_clicked()
{
    auto iter = StudentData.begin();
    ui->ViewList->clear();
    for(iter; iter!=StudentData.end(); iter++){
        vector<string> inProgressCourses = iter->second.InProgressCourses;
        if(isSubsetOf({ui->Course_name->currentText().toStdString()},inProgressCourses)){
            ui->ViewList->addItem(strToQstr(iter->second.name));
        }
    }
}

