#include "viewregistercourses.h"
#include "ui_viewregistercourses.h"
#include "Gvariables.h"
#include <vector>
viewRegisterCourses::viewRegisterCourses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewRegisterCourses)
{
    ui->setupUi(this);
    vector <string> InProgress = currentUser->InProgressCourses;
    auto iter = InProgress.begin();
    for (iter ; iter != InProgress.end();iter++)
    {
        ui->coursesList->addItem(strToQstr(*iter));
    }
    ui->StudName->setText(strToQstr( currentUser->name));
    ui->StudLvl->setText( strToQstr( to_string(currentUser->Level)));

}
viewRegisterCourses::~viewRegisterCourses()
{
    delete ui;
}
