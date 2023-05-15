#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H

#include <QDialog>

namespace Ui {
class StudentType;
}

class StudentType : public QDialog
{
    Q_OBJECT

public:
    explicit StudentType(QWidget *parent = nullptr);
    ~StudentType();

private:
    Ui::StudentType *ui;
};

#endif // STUDENTTYPE_H
