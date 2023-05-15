#ifndef VIEWCOURSESOFASTUDENT_H
#define VIEWCOURSESOFASTUDENT_H

#include <QDialog>

namespace Ui {
class viewcoursesofastudent;
}

class viewcoursesofastudent : public QDialog
{
    Q_OBJECT

public:
    explicit viewcoursesofastudent(QWidget *parent = nullptr);
    ~viewcoursesofastudent();

private slots:
    void on_viewCourses_btn_clicked();

private:
    Ui::viewcoursesofastudent *ui;
};

#endif // VIEWCOURSESOFASTUDENT_H
