#include "OnlineGame.h"
#include "board.h"
#include "Moves.h"
#include <QDebug>

#include <QApplication>
#include <QGraphicsView>
#include <QMainWindow>

OnlineGame::OnlineGame(QWidget *parent)
{
    setupBoard();
    connect(scene, &Board_scene::mouseClick, this, &OnlineGame::mouseClick);
}

QString pieceUpDown = "Down";

void OnlineGame::mouseClick(QString posisie)
{

    if(pieceUpDown == "Up"){
        movePiece(stringToPos(posisie), pieces[0][1]);

        pieceUpDown = "Down";
    }
    else if(pieceUpDown == "Down"){


        pieceUpDown = "Up";
    }
    //
    //qDebug();
}

void OnlineGame::setupBoard()
{
    // create a scene
    scene = new Board_scene();
    background = new Background();
    background->fillBackgroundWithSquares(scene);

    // add a view1
    view = new QGraphicsView();
    view->setScene(scene);
    view->setAlignment(Qt::AlignLeft|Qt::AlignTop);
    view->setGeometry(0, 0, 90*8, 90*8);
    view->show();

    Piece *whitepawn = new Piece("white", "pawn", posToString({0, 6}));
    pieces[0][6] = whitepawn;
    showPieceAt(whitepawn);

    Piece *whitepawn2 = new Piece("white", "pawn", posToString({1, 6}));
    pieces[1][6] = whitepawn2;
    showPieceAt(whitepawn2);

    Piece *whitepawn3 = new Piece("white", "pawn", posToString({2, 6}));
    pieces[2][6] = whitepawn3;
    showPieceAt(whitepawn3);

    Piece *whitepawn4 = new Piece("white", "pawn", posToString({3, 6}));
    pieces[3][6] = whitepawn4;
    showPieceAt(whitepawn4);

    Piece *whitepawn5 = new Piece("white", "pawn", posToString({4, 6}));
    pieces[4][6] = whitepawn5;
    showPieceAt(whitepawn5);

    Piece *whitepawn6 = new Piece("white", "pawn", posToString({5, 6}));
    pieces[5][6] = whitepawn6;
    showPieceAt(whitepawn6);

    Piece *whitepawn7 = new Piece("white", "pawn", posToString({6, 6}));
    pieces[6][6] = whitepawn7;
    showPieceAt(whitepawn7);

    Piece *whitepawn8 = new Piece("white", "pawn", posToString({7, 6}));
    pieces[7][6] = whitepawn8;
    showPieceAt(whitepawn8);

    Piece *whiteking = new Piece("white", "king", posToString({3, 7}));
    pieces[4][7] = whiteking;
    showPieceAt(whiteking);

    Piece *whitequeen = new Piece("white", "queen", posToString({4, 7}));
    pieces[3][7] = whitequeen;
    showPieceAt(whitequeen);

    Piece *whiterook = new Piece("white", "rook", posToString({0, 7}));
    pieces[0][7] = whiterook;
    showPieceAt(whiterook);

    Piece *whiterook2 = new Piece("white", "rook", posToString({7, 7}));
    pieces[7][7] = whiterook2;
    showPieceAt(whiterook2);

    Piece *whiteknight = new Piece("white", "knight", posToString({1, 7}));
    pieces[1][7] = whiteknight;
    showPieceAt(whiteknight);

    Piece *whiteknight2 = new Piece("white", "knight", posToString({6, 7}));
    pieces[6][7] = whiteknight2;
    showPieceAt(whiteknight2);

    Piece *whitebishop = new Piece("white", "bishop", posToString({2, 7}));
    pieces[2][7] = whitebishop;
    showPieceAt(whitebishop);

    Piece *whitebishop2 = new Piece("white", "bishop", posToString({5, 7}));
    pieces[5][7] = whitebishop2;
    showPieceAt(whitebishop2);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Piece *blackpawn = new Piece("black", "pawn", posToString({0, 1}));
    pieces[0][1] = blackpawn;
    showPieceAt(blackpawn);

    Piece *blackpawn2 = new Piece("black", "pawn", posToString({1, 1}));
    pieces[1][1] = blackpawn2;
    showPieceAt(blackpawn2);

    Piece *blackpawn3 = new Piece("black", "pawn", posToString({2, 1}));
    pieces[2][1] = blackpawn3;
    showPieceAt(blackpawn3);

    Piece *blackpawn4 = new Piece("black", "pawn", posToString({3, 1}));
    pieces[3][1] = blackpawn4;
    showPieceAt(blackpawn4);

    Piece *blackpawn5 = new Piece("black", "pawn", posToString({4, 1}));
    pieces[4][1] = blackpawn5;
    showPieceAt(blackpawn5);

    Piece *blackpawn6 = new Piece("black", "pawn", posToString({5, 1}));
    pieces[5][1] = blackpawn6;
    showPieceAt(blackpawn6);

    Piece *blackpawn7 = new Piece("black", "pawn", posToString({6, 1}));
    pieces[6][1] = blackpawn7;
    showPieceAt(blackpawn7);

    Piece *blackpawn8 = new Piece("black", "pawn", posToString({7, 1}));
    pieces[7][1] = blackpawn8;
    showPieceAt(blackpawn8);

    Piece *blackking = new Piece("black", "king", posToString({3, 0}));
    pieces[3][0] = blackking;
    showPieceAt(blackking);

    Piece *blackqueen = new Piece("black", "queen", posToString({4, 0}));
    pieces[4][0] = blackqueen;
    showPieceAt(blackqueen);

    Piece *blackrook = new Piece("black", "rook", posToString({0, 0}));
    pieces[0][0] = blackrook;
    showPieceAt(blackrook);

    Piece *blackrook2 = new Piece("black", "rook", posToString({7, 0}));
    pieces[7][0] = blackrook2;
    showPieceAt(blackrook2);

    Piece *blackknight = new Piece("black", "knight", posToString({1, 0}));
    pieces[1][0] = blackknight;
    showPieceAt(blackknight);

    Piece *blackknight2 = new Piece("black", "knight", posToString({6, 0}));
    pieces[6][0] = blackknight2;
    showPieceAt(blackknight2);

    Piece *blackbishop = new Piece("black", "bishop", posToString({2, 0}));
    pieces[2][0] = blackbishop;
    showPieceAt(blackbishop);

    Piece *blackbishop2 = new Piece("black", "bishop", posToString({5, 0}));
    pieces[5][0] = blackbishop2;
    showPieceAt(blackbishop2);

}

void OnlineGame::showPieceAt(Piece *piece)
{
    posisie pos = getPiecePosition(piece);
    QPixmap picture(QString(":/%1_%2.png").arg(piece->getKleur()).arg(piece->getTipe()));
    QGraphicsPixmapItem *pictureItem = new QGraphicsPixmapItem(picture);
    pictureItem->setPos(pos.ry * 90, pos.kol * 90);
    pictureItem->setScale(0.12);
    scene->addItem(pictureItem);
    pictures[pos.ry][pos.kol] = pictureItem;
}

void OnlineGame::movePiece(posisie to, Piece *piece)
{

    posisie from = getPiecePosition(piece);
    pieces[from.ry][from.kol] = nullptr;
    piece->setPosisie(posToString(to));
    pieces[to.ry][to.kol] = piece;
    showPieceAt(piece);

    pictures[to.ry][to.kol]=pictures[from.ry][from.kol];
    pictures[from.ry][from.kol]->setPos(QPointF(to.ry*90, to.kol*90));
    pictures[from.ry][from.kol] = nullptr;

    scene->update();
}

posisie OnlineGame::getPiecePosition(Piece *piece)
{
    return {piece->getPosisie()[0].toLatin1()-64,  piece->getPosisie()[1].toLatin1()-48};
}

posisie OnlineGame::stringToPos(QString str)
{
    return {str[0].toLatin1()-65,  str[1].toLatin1()-49};
}

QString OnlineGame::posToString(posisie pos)
{
    return QString("%1%2").arg(char(pos.ry+64)).arg(char(pos.kol+48));
}







