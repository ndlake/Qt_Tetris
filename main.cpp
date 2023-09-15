#include <QApplication>
#include <QPushButton>
#include "IO.hpp"
int main(int argc, char* argv[]) {
    QApplication app (argc, argv);
    IO io;
    io.show();
    return app.exec();
}
