#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char* argv[]) {
    QApplication app (argc, argv);
    QWidget window;
    window.setFixedSize(640, 400);
    QPushButton *button = new QPushButton("Hi Mark", &window);
    button->setGeometry(300,200,80,30);
    QFont font("Courier");
    button->setToolTip("this is a tip");
    button->setFont(font);
    window.show();
    return app.exec();
}
