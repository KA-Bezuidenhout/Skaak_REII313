#include <QApplication>
#include "mainwindow.h"
#include "board.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();



    return app.exec();
}
