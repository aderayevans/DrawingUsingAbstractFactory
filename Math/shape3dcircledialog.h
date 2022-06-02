#ifndef SHAPE3DCIRCLEDIALOG_H
#define SHAPE3DCIRCLEDIALOG_H

#include <QDialog>

namespace Ui {
class Shape3DCircleDialog;
}

class Shape3DCircleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Shape3DCircleDialog(QWidget *parent = nullptr);
    ~Shape3DCircleDialog();

    float x, y, radius;

private slots:
    void on_btnB_accepted();

private:
    Ui::Shape3DCircleDialog *ui;
};

#endif // SHAPE3DCIRCLEDIALOG_H
