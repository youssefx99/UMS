#include "viewcoursespage.h"
#include "ui_viewcoursespage.h"

ViewCoursesPage::ViewCoursesPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewCoursesPage)
{
    ui->setupUi(this);
}

ViewCoursesPage::~ViewCoursesPage()
{
    delete ui;
}
