#ifndef IO_HPP
#define IO_HPP

#include <QWidget>

enum color
{
    BLACK,
    RED,
    GREEN,
    BLUE,
    CYAN,
    MAGENTA,
    YELLOW,
    WHITE,
    COLOR_MAX
};

class IO : public QWidget
{
Q_OBJECT
    int width = 640;
    int height = 480;
public:
    explicit IO(QWidget *parent = 0);
    void DrawRectangle(int pX1, int pY1, int pX2, int pY2, enum color pC);
    void ClearScreen();
    int GetScreenHeight();
    int PollKey();
    int GetKey();
    int IsKeyDown(int pKey);
    void UpdateScreen();
signals:
public slots:
};


#endif // IO_HPP

