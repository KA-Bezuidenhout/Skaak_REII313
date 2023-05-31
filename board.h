#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsView>


class board
{

public:
    board();


};

#endif // BOARD_H

/////////////////////////////////
#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <QGraphicsScene>

class Background
{
public:
    Background();
    void fillBackgroundWithSquares(QGraphicsScene *scene);

};

#endif // BACKGROUND_H


/////////////////////////////////
#ifndef SQUARE_H
#define SQUARE_H
#include <QGraphicsRectItem>


class Square : public QGraphicsRectItem
{
public:
    Square(int x, int y);

private:
    QPen pen;

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event);


};

#endif // SQUARE_H
