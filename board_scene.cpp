#include "board_scene.h"
#include <QGraphicsSceneMouseEvent>

Board_scene::Board_scene(QObject *parent): QGraphicsScene(parent)
{

}

Board_scene::~Board_scene()
{

}

void Board_scene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    int ry = event->scenePos().x()/90;
    int kol = event->scenePos().y()/90;
    emit mouseClick(posToString({ry, kol}));
}

QString Board_scene::posToString(posisie pos)
{
    return QString("%1%2").arg(char(pos.ry+65)).arg(char(pos.kol+49));
}
