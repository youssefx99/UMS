#include "studentlogin.h"
#include "ui_studentlogin.h"
#include "Gvariables.h"
#include "qmessagebox.h"
#include "studentmainpage.h"
#include <qmainwindow.h>
using namespace std;

StudentLogIn::StudentLogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentLogIn)
{
    ui->setupUi(this);
}

StudentLogIn::~StudentLogIn()
{
    delete ui;
}

void StudentLogIn::on_LoginButton_clicked()
{
    string email = toUtf8(ui->EmailTXT->text());
    string password = toUtf8(ui->PasswordTXT->text());
    int ID = stoi(email.substr(0, 11));
    Student *s = &StudentData[ID];
    if(email == s->EMAIL && password == s->password)
    {
        this->close();
        currentUser = s;
        StudentMainPage sMp;
        sMp.setModal(true);
        sMp.exec();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("ERROR");
        msgBox.setInformativeText("Invalid Login");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
}


void StudentLogIn::on_ForceLIbutton_clicked()
{
    this->close();
    int ID = 2023170100 + stoi(toUtf8(ui->Identifier->text()));
    Student *s = &StudentData[ID];
    currentUser = s;

    StudentMainPage sMp;
    sMp.setModal(true);
    sMp.exec();
}

