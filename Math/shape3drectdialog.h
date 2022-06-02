#ifndef SHAPE3DRECTDIALOG_H
#define SHAPE3DRECTDIALOG_H

#include <QDialog>

namespace Ui {
class Shape3DRectDialog;
}

class Shape3DRectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Shape3DRectDialog(QWidget *parent = nullptr);
    ~Shape3DRectDialog();

    float x, y, width, height;

private slots:
    void on_btnB_accepted();

private:
    Ui::Shape3DRectDialog *ui;
};

#endif // SHAPE3DRECTDIALOG_H
