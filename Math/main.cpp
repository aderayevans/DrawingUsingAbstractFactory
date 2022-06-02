#include "mainwindow.h"

//Qt_6_2_4_MinGW_64_bit

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
