#ifndef MOVES_H
#define MOVES_H

#include "board.h"
// C++ program to implement
// for the above approach
#include <bits/stdc++.h>
using namespace std;

class Moves: public Background
{
public:
    Moves();

private:
    void king();
    void queen();
    void bishop();
    void knight();
    void pawn();
    string rook(int current_row, int current_col,
              int destination_row, int destination_col);

};

#endif // MOVES_H
