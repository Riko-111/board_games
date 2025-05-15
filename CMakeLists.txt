cmake_minimum_required(VERSION 3.30)
project(.)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        main.cpp
        Board.cpp
        Board.h
        Field.cpp
        Field.h
        Game.cpp
        Game.h
        Player.cpp
        Player.h
        Figure.cpp
        Figure.h
        Games/TickTackToe/TickTackToeFigure.cpp
        Games/TickTackToe/TickTackToeGameCore.cpp
        Games/TickTackToe/TickTackToeFigure.h
        Games/TickTackToe/TickTackToeGameCore.h
        )
