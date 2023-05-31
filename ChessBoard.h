#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <vector>

enum class PieceType {
    Pawn,
    Knight,
    Bishop,
    Rook,
    Queen,
    King,
    None
};

enum class PieceColor {
    White,
    Black
};

struct ChessPiece {
    PieceType type;
    PieceColor color;
};

using Chessboard = std::vector<std::vector<ChessPiece>>;

Chessboard initializeChessboard();
bool isValidMove(const Chessboard& board, int sourceRow, int sourceCol, int targetRow, int targetCol);
void makeMove(Chessboard& board, int sourceRow, int sourceCol, int targetRow, int targetCol);
void printChessboard(const Chessboard& board);

#endif // CHESSBOARD_H
