#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsView>
#include "board_scene.h"

class board
{

public:
    board();

};

#endif // BOARD_H

#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <QGraphicsScene>
//#include <QLabel>

class Background
{
public:
    Background();
    void fillBackgroundWithSquares(Board_scene *scene);
//    void addPictureToBlock(Board_scene *scene, int blockX, int blockY, const QString &picturePath);
//private:
//    QLabel *thelabel;

};

#endif // BACKGROUND_H

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
