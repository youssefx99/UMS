#include "viewcourses.h"
#include "ui_viewcourses.h"
#include <set>
#include "Gvariables.h"
#include "Courses.h"
#include <algorithm>
#include <QString>
#include <string>

ViewCourses::ViewCourses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewCourses)
{
    ui->setupUi(this);


    QStringList list;
    ui->filterBox->addItem("None");
    ui->filterBox->addItem("Instructor");
    ui->filterBox->addItem("Level");
    ui->filterBox->addItem("Hours");
}

ViewCourses::~ViewCourses()
{
    delete ui;
}


void ViewCourses::on_coursesView_currentTextChanged(const QString &currentText)
{

}




void ViewCourses::on_filterBox_currentTextChanged(const QString &arg1)
{
    set<int> distinct_level;
    for (auto const&[cName,c] : CoursesData) {
        distinct_level.insert(c.level);
    }
    set<short> distinct_hours;
    for(auto const&[cName, c] : CoursesData)
    {
        distinct_hours.insert(c.hours);
    }
    set<string> distinct_instructors;
    for(auto const&[cName, c] : CoursesData)
    {
        distinct_instructors.insert(c.instructor);
    }
    ui->coursesView->clear();
    QStringList list;
    for(auto iter = CoursesData.begin();iter != CoursesData.end(); iter++)
    {
        if(ui->filterBox->currentText() == "None")
        {
            ui->filterSpecific->hide();
            string course = iter->first;
            ui->coursesView->addItem(strToQstr(course));
        }
    }
    if(ui->filterBox->currentText() == "Level")
    {
        ui->filterSpecific->show();
        ui->filterSpecific->clear();
        for(auto const& val : distinct_level)
        {
            ui->filterSpecific->addItem(strToQstr(to_string(val)));
        }
    }
    else if(ui->filterBox->currentText() == "Hours")
    {
        ui->filterSpecific->show();
        ui->filterSpecific->clear();
        for(auto const& val : distinct_hours)
        {
            ui->filterSpecific->addItem(strToQstr(to_string(val)));
        }
    }
    else if(ui->filterBox->currentText() == "Instructor")
    {
        ui->filterSpecific->show();
        ui->filterSpecific->clear();
        for(auto const& val : distinct_instructors)
        {
            ui->filterSpecific->addItem(strToQstr(val));
        }
    }
}




void ViewCourses::on_filterSpecific_currentTextChanged(const QString &arg1)
{
    ui->coursesView->clear();
    for(auto iter = CoursesData.begin();iter != CoursesData.end(); iter++)
    {
        if(ui->filterBox->currentText() == "Instructor")
        {
            if(iter->second.instructor == arg1.toStdString())
                ui->coursesView->addItem(strToQstr(iter->first));
        }
        else if(ui->filterBox->currentText() == "Level")
        {
            if(iter->second.level == arg1.toInt())
                ui->coursesView->addItem(strToQstr(iter->first));

        }
        else if(ui->filterBox->currentText() == "Hours")
        {
            if(iter->second.hours == arg1.toShort())
                ui->coursesView->addItem(strToQstr(iter->first));

        }
    }
}

