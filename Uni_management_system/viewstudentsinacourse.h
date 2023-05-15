#ifndef VIEWSTUDENTSINACOURSE_H
#define VIEWSTUDENTSINACOURSE_H

#include <QDialog>

namespace Ui {
class viewstudentsinacourse;
}

class viewstudentsinacourse : public QDialog
{
    Q_OBJECT

public:
    explicit viewstudentsinacourse(QWidget *parent = nullptr);
    ~viewstudentsinacourse();

private slots:
    void on_pushButton_clicked();

private:
    Ui::viewstudentsinacourse *ui;
};

#endif // VIEWSTUDENTSINACOURSE_H
