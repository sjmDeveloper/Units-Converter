#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //application for default
    QApplication a(argc, argv);
    //setup window
    MainWindow w;
    w.show();
    //set parameters
    w.setWindowTitle("unit converter");
    w.setWindowIcon(QIcon("icon.ico"));
    //retunring
    return a.exec();
}
