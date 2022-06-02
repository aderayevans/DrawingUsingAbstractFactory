#include "shape2dcircledialog.h"
#include "ui_shape2dcircledialog.h"

Shape2DCircleDialog::Shape2DCircleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shape2DCircleDialog)
{
    ui->setupUi(this);
    ui->lne_x->setFocus();
}

Shape2DCircleDialog::~Shape2DCircleDialog()
{
    delete ui;
}

void Shape2DCircleDialog::on_btnB_accepted()
{
    x = ui->lne_x->text().toFloat();
    y = ui->lne_y->text().toFloat();
    radius = ui->lne_radius->text().toFloat();
    accept();
}
