#ifndef VIEWREGISTERCOURSES_H
#define VIEWREGISTERCOURSES_H

#include <QDialog>

namespace Ui {
class viewRegisterCourses;
}

class viewRegisterCourses : public QDialog
{
    Q_OBJECT

public:
    explicit viewRegisterCourses(QWidget *parent = nullptr);
    ~viewRegisterCourses();

private:
    Ui::viewRegisterCourses *ui;
};

#endif // VIEWREGISTERCOURSES_H
