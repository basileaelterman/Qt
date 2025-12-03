#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    QPushButton button("Hello, world!");
    button.show();
    window.show();
    return app.exec();
}
