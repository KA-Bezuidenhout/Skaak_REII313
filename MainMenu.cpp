#include "MainMenu.h"
#include "OptionsMenu.h"
#include "Leaderboard.h"
#include "OnlineGame.h"
#include "board.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <stdlib.h>

MainMenu::MainMenu(QWidget *parent) : QWidget(parent)
{
    // Create a background image for the main menu
//    QPixmap mainbackgroundImage(":/images/mainbackground.png");

    // Set the background image for the main menu
//     setBackgroundImage(mainbackgroundImage);



//    // Create a separator for the main menu

//     separator->setFrameShape(QFrame::HLine);
//     separator->setFrameShadow(QFrame::Sunken);

//     // Add the separator to the main menu






    // Create buttons for different menu options
//    QFrame *separator = new QFrame;
    QPushButton *startOnlineButton = new QPushButton("Start Online Game");
    QPushButton *startEngineButton = new QPushButton("Start Engine Game");
    QPushButton *optionsButton = new QPushButton("Options");
    QPushButton *leaderboardButton = new QPushButton("Leaderboard");
    QPushButton *exitButton = new QPushButton("Exit");

    // Connect button signals to slots
    connect(startOnlineButton, &QPushButton::clicked, this, &MainMenu::startOnlineGame);
    connect(startEngineButton, &QPushButton::clicked, this, &MainMenu::startEngineGame);
    connect(optionsButton, &QPushButton::clicked, this, &MainMenu::openOptions);
    connect(leaderboardButton, &QPushButton::clicked, this, &MainMenu::viewLeaderboard);
    connect(exitButton, &QPushButton::clicked, this, &MainMenu::exitGame);

    // Layout for the main menu
    QVBoxLayout *layout = new QVBoxLayout;
//    layout()->addWidget(separator);
    layout->addWidget(startOnlineButton);
    layout->addWidget(startEngineButton);
    layout->addWidget(optionsButton);
    layout->addWidget(leaderboardButton);
    layout->addWidget(exitButton);

    setLayout(layout);
}



void MainMenu::startOnlineGame()
{
    // Implement the logic to start the game here
    // Open the Online Game
    OnlineGame *onlineGame = new OnlineGame;
//    onlineGame->onlineGame->show();
}

void MainMenu::startEngineGame()
{
    // Implement the logic to start the game here
    // Open the Engine Game
//    EngineGame *engineGame = new EngineGame;
//    EngineGame->exec();
}

void MainMenu::openOptions()
{
    // Open the options menu
    OptionsMenu *optionsMenu = new OptionsMenu;
    optionsMenu->exec();
}

void MainMenu::viewLeaderboard()
{
    // Open the leaderboard
    Leaderboard *leaderboard = new Leaderboard;
    leaderboard->exec();
}

void MainMenu::exitGame()
{
    // Close the game
    exit(0);
}

//void MainMenu::setBackgroundImage()
//{
    // Display Backround Image same size of Window
//    *mbackgroundImage.size();
//    cout() << mbackgroundImage;


//}

//void MainMenu::separator()
//{

    // Display Separator



//}
