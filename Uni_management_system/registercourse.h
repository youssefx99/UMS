#ifndef REGISTERCOURSE_H
#define REGISTERCOURSE_H

#include <QDialog>

namespace Ui {
class RegisterCourse;
}

class registercourse : public QDialog
{
    Q_OBJECT

public:
    explicit registercourse(QWidget *parent = nullptr);
    ~registercourse();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Add_clicked();

    void on_Remove_clicked();

    void on_submit_clicked();

private:
    Ui::RegisterCourse *ui;
};

#endif // REGISTERCOURSE_H
