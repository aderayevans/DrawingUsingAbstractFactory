#ifndef SHAPE2DCIRCLEDIALOG_H
#define SHAPE2DCIRCLEDIALOG_H

#include <QDialog>

namespace Ui {
class Shape2DCircleDialog;
}

class Shape2DCircleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Shape2DCircleDialog(QWidget *parent = nullptr);
    ~Shape2DCircleDialog();

    float x, y, radius;

private slots:
    void on_btnB_accepted();

private:
    Ui::Shape2DCircleDialog *ui;
};

#endif // SHAPE2DCIRCLEDIALOG_H
