#ifndef Grid_h
#define Grid_h

#include <iostream>
#include <cstdlib>

const int GRID_SIZE = 4;

struct Grid {
    int* board[GRID_SIZE][GRID_SIZE];
    int score = 0;
    Grid();
    void addScore(int n);
    bool win();
    void printScore();
    void printGrid();
    void generate();
    bool isGameOver();
    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();
    void clearGrid();
    ~Grid();
};

#endif