#include "shape3dcircledialog.h"
#include "ui_shape3dcircledialog.h"

Shape3DCircleDialog::Shape3DCircleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shape3DCircleDialog)
{
    ui->setupUi(this);
    ui->lne_x->setFocus();
}

Shape3DCircleDialog::~Shape3DCircleDialog()
{
    delete ui;
}

void Shape3DCircleDialog::on_btnB_accepted()
{
    x = ui->lne_x->text().toFloat();
    y = ui->lne_y->text().toFloat();
    radius = ui->lne_radius->text().toFloat();
    accept();
}
