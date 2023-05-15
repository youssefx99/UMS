#include "registercourse.h"
#include "ui_registercourse.h"
#include "qlistwidget.h"
#include "Gvariables.h"
#include <vector>
#include <algorithm>
#include<qmessagebox.h>
using namespace std;


registercourse::registercourse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterCourse)
{
    ui->setupUi(this);


    auto iter = CoursesData.begin();
    vector<string> finishedCourses = currentUser->FinishedCourses;
    for(iter; iter!=CoursesData.end(); iter++){
        string s = iter->first;
        bool flag = false;
        for(int i = 0 ; i < finishedCourses.size(); i++){
            if (finishedCourses[i] == s){
                flag = true;
                break;
            }
        }
        if(isSubsetOf(iter->second.pre_req ,finishedCourses) && !flag){
            ui->Available->addItem(strToQstr(iter->first));
        }
    }


}

registercourse::~registercourse()
{
    delete ui;
}

void registercourse::on_pushButton_clicked()
{


}


void registercourse::on_pushButton_2_clicked()
{

}

void registercourse::on_Add_clicked()
{
    QString qs =  ui->Available->currentItem()->text();
    ui->Selected->addItem(qs);
    QListWidgetItem *it = ui->Available->takeItem(ui->Available->currentRow());
    delete  it;
}


void registercourse::on_Remove_clicked()
{
    QString qs1 =  ui->Selected->currentItem()->text();
    ui->Available->addItem(qs1);
    QListWidgetItem *it = ui->Selected->takeItem(ui->Selected->currentRow());
    delete  it;
}

void registercourse::on_submit_clicked()
{
    vector<string> *inProgressCourses = &(currentUser->InProgressCourses);

    for(int row = 0; row < ui->Selected->count(); row++)
    {
        QListWidgetItem *item = ui->Selected->item(row);
        string course = toUtf8(item->text());

        auto finder = std::find(inProgressCourses->begin(),inProgressCourses->end(), course);
        if(finder == inProgressCourses->end())
            inProgressCourses->push_back(course);
    }
    QMessageBox msgBox;
    msgBox.setWindowTitle("Message");
    msgBox.setInformativeText("Registration Successful");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}


