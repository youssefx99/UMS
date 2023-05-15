#include "viewcoursesgrades.h"
#include "ui_viewcoursesgrades.h"

#include "Gvariables.h"
#include "Courses.h"
#include "sstream"
#include "Student.h"

viewcoursesgrades::viewcoursesgrades(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewcoursesgrades)
{
    ui->setupUi(this);

    vector <string> InProgress = currentUser->FinishedCourses;
    ui->std_name->setText(strToQstr( currentUser->name));
    ui->Student_Id->setText( strToQstr( to_string(currentUser->ID)));


    int Size = currentUser->FinishedCourses.size();
    QString* courseNames = new QString[Size];
    auto iter = currentUser->FinishedCourses.begin();
    QString* ptr = courseNames;
    while(iter!= currentUser->FinishedCourses.end()){
        *ptr = QString::fromStdString(*iter);
        ptr++;
        ++iter;
    }
    ptr = courseNames;
    while(Size--)
        ui->std_combo->addItem(*ptr++);
    delete [] courseNames;

    //-------------------------------------------------------

    ui->cgpa->setText(strToQstr(to_string(currentUser->GPA)));
}

viewcoursesgrades::~viewcoursesgrades()
{
   delete ui;
}

void viewcoursesgrades::on_std_combo_currentTextChanged(const QString &arg1)
{
    Student* stud;
    int stud_id=stoi(toUtf8(ui->Student_Id->text()));
    stud=&StudentData[stud_id];

    string currentCourse=toUtf8(ui->std_combo->currentText());
    ui->course_grade->setText( strToQstr( to_string(stud->CoursesGrades[currentCourse])));
}

