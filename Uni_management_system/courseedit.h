#ifndef COURSEEDIT_H
#define COURSEEDIT_H

#include <QDialog>

namespace Ui {
class CourseEdit;
}

class CourseEdit : public QDialog
{
    Q_OBJECT

public:
    explicit CourseEdit(QWidget *parent = nullptr);
    ~CourseEdit();

private slots:
    void on_EditCourseButton_clicked();

    void on_CoursesNamesCB_currentTextChanged(const QString &arg1);

private:
    Ui::CourseEdit *ui;
};

#endif // COURSEEDIT_H
