#ifndef SHAPE2DRECTDIALOG_H
#define SHAPE2DRECTDIALOG_H

#include <QDialog>

namespace Ui {
class Shape2DRectDialog;
}

class Shape2DRectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Shape2DRectDialog(QWidget *parent = nullptr);
    ~Shape2DRectDialog();

    float x, y, width, height;

private slots:
    void on_btnB_accepted();

private:
    Ui::Shape2DRectDialog *ui;
};

#endif // SHAPE2DRECTDIALOG_H
