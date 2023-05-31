#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QDialog>
#include <QTableWidget>

class Leaderboard : public QDialog
{
    Q_OBJECT

public:
    explicit Leaderboard(QWidget *parent = nullptr);

private:
    QTableWidget *leaderboardTable;

    void setupTable();
};

#endif // LEADERBOARD_H
