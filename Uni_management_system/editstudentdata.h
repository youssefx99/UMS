#ifndef EDITSTUDENTDATA_H
#define EDITSTUDENTDATA_H

#include <QDialog>

namespace Ui {
class editStudentData;
}

class editStudentData : public QDialog
{
    Q_OBJECT

public:
    explicit editStudentData(QWidget *parent = nullptr);
    ~editStudentData();

private slots:
    void on_ChangeDataBTN_clicked();

private:
    Ui::editStudentData *ui;
};

#endif // EDITSTUDENTDATA_H
