#include "mainwindow.h"
#include <QApplication>

// komentarz1



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
