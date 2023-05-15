#ifndef ADDCOURSE_H
#define ADDCOURSE_H

#include <QDialog>

namespace Ui {
class AddCourse;
}

class AddCourse : public QDialog
{
    Q_OBJECT

public:
    explicit AddCourse(QWidget *parent = nullptr);
    ~AddCourse();

private slots:
    void on_AddCourseButton_clicked();

private:
    Ui::AddCourse *ui;
};

#endif // ADDCOURSE_H
