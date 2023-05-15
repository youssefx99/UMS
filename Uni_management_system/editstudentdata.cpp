#include "editstudentdata.h"
#include "ui_editstudentdata.h"
#include "Gvariables.h"
#include <QMessagebox.h>
using namespace std;
editStudentData::editStudentData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editStudentData)
{
    ui->setupUi(this);
    ui->StudName->setText(strToQstr(currentUser->name));
    ui->StudPass->setText(strToQstr(currentUser->password));
}

editStudentData::~editStudentData()
{
    delete ui;
}

void editStudentData::on_ChangeDataBTN_clicked()
{
    string name = toUtf8(ui->StudName->text());
    string pass = toUtf8(ui->StudPass->text());
    currentUser->name = name;
    currentUser->password = pass;
    QMessageBox msgBox;
    msgBox.setText("DEBUG");
    msgBox.setInformativeText("Data Edited");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

