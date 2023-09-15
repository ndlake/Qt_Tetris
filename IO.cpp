//https://doc.qt.io/qt-6/qtwidgets-widgets-tetrix-example.html
#include "IO.hpp"

static long long int mColors[COLOR_MAX] = {0x000000ff, // Colors
                                    0xff0000ff, 0x00ff00ff, 0x0000ffff,
                                    0x00ffffff, 0xff00ffff, 0xffff00ff,
                                    0xffffffff};

/*
======================================
Init
======================================
*/
IO::IO(QWidget *parent): QWidget(parent) {
    setFixedSize(width, height);
}

/*
======================================
Clear the screen to black
======================================
*/
void IO::ClearScreen()
{
    //boxColor(mScreen, 0, 0, mScreen->w - 1, mScreen->h - 1, mColors[BLACK]);
}


void IO::DrawRectangle(int pX1, int pY1, int pX2, int pY2, enum color pC)
{
   // boxColor(mScreen, pX1, pY1, pX2, pY2 - 1, mColors[pC]);
}

/*
======================================
Return the screen height
======================================
*/
int IO::GetScreenHeight()
{
    //return screen height
    return 0;
}

/*
======================================
Update screen
======================================
*/
void IO::UpdateScreen()
{
    //update screen

}

/*
======================================
Keyboard Input
======================================
*/
int IO::PollKey()
{
    //check for keys
    return -1;
}

/*
======================================
Keyboard Input
======================================
*/
int IO::GetKey()
{
    //check keyboard input
    return 0;
}

/*
======================================
Keyboard Input
======================================
*/
int IO::IsKeyDown(int pKey)
{
    //check if key is down

    return 0;
}




