#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "shape.h"
#include "bonusform.h"
#include "abstractfactory.h"
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void displayForm();
    void add_shape(Shape *shape);
    void backup();

private slots:
    void on_btn_add_clicked();
    void on_btn_remove_clicked();
    void on_btn_undo_clicked();
    void on_btn_redo_clicked();
    void on_btn_print_clicked();

    void after_btn_add_clicked();

private:
    Ui::MainWindow *ui;
    BonusForm *bonusForm;
    std::vector<Shape*> vectorOfShape, backupVectorOfShape;
    QList<QListWidgetItem*> backupListOfItems;
    FactoryMaker *factory_maker;
};
#endif // MAINWINDOW_H
