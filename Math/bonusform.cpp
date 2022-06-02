#include "bonusform.h"
#include "ui_bonusform.h"

BonusForm::BonusForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BonusForm)
{
    ui->setupUi(this);

    ui->rbtn_2d_factory->setChecked(true);
    ui->rbtn_circle_shape->setChecked(true);
}

BonusForm::~BonusForm()
{
    delete ui;
}

void BonusForm::on_btn_OK_clicked()
{
    this->close();
    emit btn_OK();
}

FactoryType BonusForm::get_factory()
{
    return ui->rbtn_2d_factory->isChecked() ? FactoryType::Shape2D : FactoryType::Shape3D;
}

ShapeType BonusForm::get_shape()
{
    return ui->rbtn_circle_shape->isChecked() ? ShapeType::Circle : ShapeType::Rect;
}
