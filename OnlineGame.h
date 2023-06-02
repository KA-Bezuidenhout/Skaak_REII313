#ifndef ONLINEGAME_H
#define ONLINEGAME_H

#include <QMainWindow>
#include <QObject>
#include "board_scene.h"
#include "board.h"
#include "piece.h"
#include "Tipes.h"

class OnlineGame: public QObject
{
    Q_OBJECT
public:
    explicit OnlineGame(QWidget *parent = nullptr);

public slots:
    void mouseClick(QString posisie);

private:
    Board_scene * scene;
    QGraphicsView * view;
    QGraphicsPixmapItem *pictures[8][8];
    Piece *pieces[8][8];
    Background * background;
    void setupBoard();
    void showPieceAt(Piece *piece);
    void movePiece(posisie pos, Piece *piece);
    posisie getPiecePosition(Piece *piece);
    QString posToString(posisie pos);
    posisie stringToPos(QString str);
};



#endif // ONLINEGAME_H

