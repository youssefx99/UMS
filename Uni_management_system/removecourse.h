#ifndef REMOVECOURSE_H
#define REMOVECOURSE_H

#include <QDialog>

namespace Ui {
class RemoveCourse;
}

class RemoveCourse : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveCourse(QWidget *parent = nullptr);
    ~RemoveCourse();

private slots:
    void on_RemoveCourseButton_clicked();

private:
    Ui::RemoveCourse *ui;
};

#endif // REMOVECOURSE_H
