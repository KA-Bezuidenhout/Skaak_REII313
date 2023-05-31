#include "Leaderboard.h"
#include <QHeaderView>
#include <QVBoxLayout>

Leaderboard::Leaderboard(QWidget *parent) : QDialog(parent)
{
    setupTable();
}

void Leaderboard::setupTable()
{
    leaderboardTable = new QTableWidget(this);
    leaderboardTable->setColumnCount(2);
    leaderboardTable->setRowCount(5);

    // Set table headers
    leaderboardTable->setHorizontalHeaderLabels(QStringList() << "Player" << "Wins");

    // Populate the table with dummy data (replace with actual data)
    for (int row = 0; row < leaderboardTable->rowCount(); ++row)
    {
        QTableWidgetItem *playerItem = new QTableWidgetItem("Player " + QString::number(row + 1));
        QTableWidgetItem *winsItem = new QTableWidgetItem(QString::number(row * 2));

        leaderboardTable->setItem(row, 0, playerItem);
        leaderboardTable->setItem(row, 1, winsItem);
    }

    // Set table properties
    leaderboardTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    leaderboardTable->setSelectionMode(QAbstractItemView::NoSelection);
    leaderboardTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(leaderboardTable);

    setLayout(layout);
}
