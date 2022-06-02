#include "shape3drectdialog.h"
#include "ui_shape3drectdialog.h"

Shape3DRectDialog::Shape3DRectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shape3DRectDialog)
{
    ui->setupUi(this);
    ui->lne_x->setFocus();
}

Shape3DRectDialog::~Shape3DRectDialog()
{
    delete ui;
}

void Shape3DRectDialog::on_btnB_accepted()
{
    x = ui->lne_x->text().toFloat();
    y = ui->lne_y->text().toFloat();
    width = ui->lne_width->text().toFloat();
    height = ui->lne_height->text().toFloat();
    accept();
}
