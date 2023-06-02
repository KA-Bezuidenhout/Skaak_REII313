#include "board.h"
#include <QApplication>
#include <QGraphicsRectItem>
#include <QLabel>

board::board()
{

}


Background::Background()
{

}

void Background::fillBackgroundWithSquares(Board_scene *scene)
{
    // create an item to put into the scene
    Square *squares[8][8];

    // add squares to the scene
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            squares[i][j] = new Square(i*90,j*90);
            if ((i + j) % 2 == 0)
                squares[i][j]->setBrush(QColor(0,16,51,0));
            else
                squares[i][j]->setBrush(QColor(94,45,0,40));

//            squares[i][j]->setBrush(Qt::green);
            scene->addItem(squares[i][j]);
        }

}

//void Background::addPictureToBlock(Board_scene *scene, int blockX, int blockY, const QString &picturePath)
//{
//    // Load and set the picture for the specified block
//    QPixmap picture(picturePath);
//    QGraphicsPixmapItem *pictureItem = new QGraphicsPixmapItem(picture);
//    pictureItem->setPos(blockX * 90, blockY * 90);
////    pictureItem->st
//    scene->addItem(pictureItem);
//}

Square::Square(int x, int y)
{
    // draw a square
    setRect(x,y,90,90);
    pen.setBrush(Qt::black);
//    setBrush(Qt::gray);
//    setBrush(QColor(225,0,0,127));
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::LeftButton);
    show();
}

void Square::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{

    if ( brush().color() != Qt::black && QApplication::mouseButtons() == Qt::LeftButton)
    {
        setBrush( Qt::black);
        update();
    }

}
