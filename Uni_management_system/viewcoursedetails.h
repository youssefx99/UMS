#ifndef VIEWCOURSEDETAILS_H
#define VIEWCOURSEDETAILS_H

#include <QDialog>

namespace Ui {
class viewCourseDetails;
}

class viewCourseDetails : public QDialog
{
    Q_OBJECT

public:
    explicit viewCourseDetails(QWidget *parent = nullptr);
    ~viewCourseDetails();

private slots:
    void on_comboBoxCourse_currentTextChanged(const QString &arg1);

private:
    Ui::viewCourseDetails *ui;
};

#endif // VIEWCOURSEDETAILS_H
