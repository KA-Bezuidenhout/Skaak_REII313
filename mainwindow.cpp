#include "mainwindow.h"
#include "MainMenu.h"
#include "OptionsMenu.h"
#include "Leaderboard.h"
#include "ChessBoard.h" // Include the header file for the chess board class
#include "StockfishPlayer.h" // Include the header file for the Stockfish player class


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    //    thelabel = new QLabel(this);
    //    thelabel->setPixmap(QPixmap(":/black_pawn.png").scaled(100,100));
    //    thelabel->setPixmap(QPixmap(":/white_pawn.png").scaled(200,200));
    //    thelabel->setFixedSize(thelabel->pixmap()->height(), thelabel->pixmap()->width());

    // Initialize UI elements and set up the main window
    // Create a main menu
    MainMenu *mainMenu = new MainMenu(this);

    // Set the main menu as the window's central widget
    setCentralWidget(mainMenu);

    // Create the chess board
//    ChessBoard chessBoard(this);

    // Create the Stockfish player
//    StockfishPlayer stockfishPlayer;

    // Implement game flow and state management logic
    // ...

    // Implement game rules, including valid moves and captures
    // ...

    // Implement networking functionality for multiplayer
    // ...

    // Implement computer player (Stockfish) logic
    // ...

    // Implement player rankings and leaderboard
    // ...

    // Add visual and interactive elements to enhance the game (animations, sounds, etc.)
    // ...
}
