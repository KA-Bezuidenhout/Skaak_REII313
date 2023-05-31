#include "board.h"
#include <QApplication>
#include <QGraphicsRectItem>

board::board()
{

}


Background::Background()
{

}

void Background::fillBackgroundWithSquares(QGraphicsScene *scene)
{
    // create an item to put into the scene
    Square *squares[8][8];


    // add squares to the scene
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            squares[i][j] = new Square(i*90,j*90);
            scene->addItem(squares[i][j]);
        }
}


Square::Square(int x, int y)
{
    // draw a square
    setRect(x,y,90,90);
    pen.setBrush(Qt::black);
    setBrush(Qt::gray);
//    setBrush(QColor(225,0,0,127));
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::LeftButton);
    show();
}

void Square::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{

    if ( brush().color() != Qt::black && QApplication::mouseButtons() == Qt::LeftButton)
    {
        setBrush( Qt::black );
        update();
    }

}
