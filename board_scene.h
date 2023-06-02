#ifndef BOARD_SCENE_H
#define BOARD_SCENE_H

#include <QObject>
#include <QString>
#include <QGraphicsScene>
#include "Tipes.h"


class Board_scene: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Board_scene(QObject *parent = nullptr);
    ~Board_scene();

 protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

signals:
    void mouseClick(QString posisie);

private:
    QString posToString(posisie pos);
};

#endif // BOARD_SCENE_H
