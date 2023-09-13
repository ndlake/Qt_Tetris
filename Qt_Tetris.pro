TEMPLATE = app
TARGET = QT_Tetris

QT = core widgets gui

greaterThan(QT_MAJOR_VERSION, 4): QT +=
widgets

SOURCES += \
    IO.cpp \
    board.cpp \
    game.cpp \
    main.cpp \
    pieces.cpp

HEADERS += \
    IO.hpp \
    board.hpp \
    game.hpp \
    pieces.hpp
