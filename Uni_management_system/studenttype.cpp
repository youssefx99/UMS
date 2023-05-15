#include "studenttype.h"
#include "ui_studenttype.h"

StudentType::StudentType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentType)
{
    ui->setupUi(this);
}

StudentType::~StudentType()
{
    delete ui;
}
