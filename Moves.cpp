#include "Moves.h"
#include "OnlineGame.h"


Moves::Moves()
{

}

void Moves::king()
{

}

void Moves::queen()
{

}

void Moves::bishop()
{

}

void Moves::knight()
{

}

void Moves::pawn()
{

}

string Moves::rook(int current_row, int current_col,
                 int destination_row, int destination_col)
{

    // Function to check if it is
    // possible to reach destination
    // in a single move by a rook
//    string check(int current_row, int current_col,
//                 int destination_row, int destination_col)
//    {

        if(current_row == destination_row)
            return "POSSIBLE";
        else if(current_col == destination_col)
            return "POSSIBLE";
        else
            return "NOT POSSIBLE";
//    }
}
