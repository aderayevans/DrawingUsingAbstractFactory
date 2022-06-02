#include "shape2drectdialog.h"
#include "ui_shape2drectdialog.h"

Shape2DRectDialog::Shape2DRectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shape2DRectDialog)
{
    ui->setupUi(this);
    ui->lne_x->setFocus();
}

Shape2DRectDialog::~Shape2DRectDialog()
{
    delete ui;
}

void Shape2DRectDialog::on_btnB_accepted()
{
    x = ui->lne_x->text().toFloat();
    y = ui->lne_y->text().toFloat();
    width = ui->lne_width->text().toFloat();
    height = ui->lne_height->text().toFloat();
    accept();
}
