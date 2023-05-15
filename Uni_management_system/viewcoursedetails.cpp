#include "ui_viewcoursedetails.h"
#include "viewcoursedetails.h"
#include "Gvariables.h"
#include "Courses.h"
#include "sstream"


viewCourseDetails::viewCourseDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewCourseDetails)
{
    ui->setupUi(this);


    int Size = currentUser->InProgressCourses.size();
    QString* courseNames = new QString[Size];
    auto iter = currentUser->InProgressCourses.begin();
    QString* ptr = courseNames;
    while(iter!= currentUser->InProgressCourses.end()){
        *ptr = QString::fromStdString(*iter);
        ptr++;
        ++iter;
    }
    ptr = courseNames;
    while(Size--)
        ui->comboBoxCourse->addItem(*ptr++);
    delete [] courseNames;



}

viewCourseDetails::~viewCourseDetails()
{
    delete ui;
}





void viewCourseDetails::on_comboBoxCourse_currentTextChanged(const QString &arg1)
{
    Course current = CoursesData.at(toUtf8(arg1));

    ui->codeCourse->setText(strToQstr(to_string(current.code)));
    ui->lvlCourse->setText(strToQstr(to_string(current.level)));
    vector<string> preReqsTemp = current.pre_req;

    stringstream ss;
    for(string &s: preReqsTemp)
    {
        ss << s << ",";
        string str = ss.str();
        str = str.substr(0, str.length()-1);
        ui->pre_reqCourse->setText(strToQstr(str));
        ss.str("");
    }

    ui->instructorCourse->setText(strToQstr((current.instructor)));
    ui->hoursCourse->setText(strToQstr(to_string(current.hours)));
}

