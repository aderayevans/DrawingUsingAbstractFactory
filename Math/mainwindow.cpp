#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QLabel>
#include "shape.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bonusForm = new BonusForm();
    connect (bonusForm, SIGNAL (btn_OK()), this, SLOT(after_btn_add_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::after_btn_add_clicked()
{
    AbstractFactory* factory = factory_maker.get_factory(bonusForm->get_factory());
    Shape * a = factory->get_shape(bonusForm->get_shape());
    add_shape(a);
}

void MainWindow::backup()
{
    backupVectorOfShape.clear();
    for (auto &val:vectorOfShape)
        backupVectorOfShape.push_back(val);

    backupListOfItems.clear();

    for (auto i = 0; i < vectorOfShape.size(); i++)
    {
        backupListOfItems.append(ui->listWidget->item(i));
    }
}

void MainWindow::add_shape(Shape *shape)
{
    if (shape->getCoordinate())
    {
        backup();
        vectorOfShape.push_back(shape);
        ui->wdg_graphics->update(vectorOfShape);
        ui->listWidget->addItem(shape->stamp);
    }
}

void MainWindow::on_btn_add_clicked()
{
    displayForm();
}

void MainWindow::on_btn_remove_clicked()
{
    backup();
    QList<QListWidgetItem*> items = ui->listWidget->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        vectorOfShape.erase(vectorOfShape.begin()+ui->listWidget->row(item));
        delete ui->listWidget->takeItem(ui->listWidget->row(item));
    }
    ui->wdg_graphics->update(vectorOfShape);

//    qDeleteAll(ui->listWidget->selectedItems());
}

void MainWindow::on_btn_undo_clicked()
{
//    ui->listWidget->clear();
//    for (auto i = 0; i < vectorOfShape.size(); i++)
//    {
//        ui->listWidget->push_back(backupListOfItems[i]);
//    }

//    vectorOfShape.clear();
//    for (auto &val:backupVectorOfShape)
//        vectorOfShape.push_back(val);

//    ui->wdg_graphics->update(vectorOfShape);
}

void MainWindow::on_btn_redo_clicked()
{

}

void MainWindow::on_btn_print_clicked()
{
    ui->wdg_graphics->update(vectorOfShape);
}

void MainWindow::displayForm()
{
    bonusForm->show();
}
