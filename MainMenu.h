#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);

private slots:
    void startOnlineGame();
    void startEngineGame();
    void openOptions();
    void viewLeaderboard();
    void exitGame();
};



#endif // MAINMENU_H
