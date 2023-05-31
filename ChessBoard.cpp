#include <iostream>
#include <vector>
#include <ChessBoard.h>

// Initialize the chessboard with starting positions
Chessboard initializeChessboard() {
    Chessboard board(8, std::vector<ChessPiece>(8));

    // Initialize pieces on the board

    // White pieces
    board[0][0] = {PieceType::Rook, PieceColor::White};
        board[0][1] = {PieceType::Knight, PieceColor::White};
        board[0][2] = {PieceType::Bishop, PieceColor::White};
        board[0][3] = {PieceType::Queen, PieceColor::White};
        board[0][4] = {PieceType::King, PieceColor::White};
        board[0][5] = {PieceType::Bishop, PieceColor::White};
        board[0][6] = {PieceType::Knight, PieceColor::White};
        board[0][7] = {PieceType::Rook, PieceColor::White};

        for (int col = 0; col < 8; ++col) {
            board[1][col] = {PieceType::Pawn, PieceColor::White};
        }

        // Black pieces
        board[7][0] = {PieceType::Rook, PieceColor::Black};
        board[7][1] = {PieceType::Knight, PieceColor::Black};
        board[7][2] = {PieceType::Bishop, PieceColor::Black};
        board[7][3] = {PieceType::Queen, PieceColor::Black};
        board[7][4] = {PieceType::King, PieceColor::Black};
        board[7][5] = {PieceType::Bishop, PieceColor::Black};
        board[7][6] = {PieceType::Knight, PieceColor::Black};
        board[7][7] = {PieceType::Rook, PieceColor::Black};

        for (int col = 0; col < 8; ++col) {
            board[6][col] = {PieceType::Pawn, PieceColor::Black};
        }
    return board;
}

bool isValidMove(const Chessboard& board, int sourceRow, int sourceCol, int targetRow, int targetCol) {
    // Check if the source position is valid
    if (sourceRow < 0 || sourceRow >= 8 || sourceCol < 0 || sourceCol >= 8)
        return false;

    // Check if the target position is valid
    if (targetRow < 0 || targetRow >= 8 || targetCol < 0 || targetCol >= 8)
        return false;

    // Check if the target position is occupied by a piece of the same color
    if (board[targetRow][targetCol].color == board[sourceRow][sourceCol].color)
        return false;

    // Add more specific move validation logic based on the piece type
    // ...

    return true;
}

void makeMove(Chessboard& board, int sourceRow, int sourceCol, int targetRow, int targetCol) {
    // Move the chess piece from the source position to the target position
    board[targetRow][targetCol] = board[sourceRow][sourceCol];
//    board[sourceRow][sourceCol] = { PieceType::None, PieceColor::None };
}

void printChessboard(const Chessboard& board) {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            const ChessPiece& piece = board[row][col];
            if (piece.type == PieceType::None) {
                std::cout << " - ";
            } else {
                char symbol;
                switch (piece.type) {
                    case PieceType::Pawn:
                        symbol = 'P';
                        break;
                    case PieceType::Rook:
                        symbol = 'R';
                        break;
                    case PieceType::Knight:
                        symbol = 'N';
                        break;
                    case PieceType::Bishop:
                        symbol = 'B';
                        break;
                    case PieceType::Queen:
                        symbol = 'Q';
                        break;
                    case PieceType::King:
                        symbol = 'K';
                        break;
                    default:
                        symbol = ' ';
                        break;
                }
                std::cout << " " << symbol << " ";
            }
        }
        std::cout << std::endl;
    }
}

