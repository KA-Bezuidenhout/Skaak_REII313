#ifndef PIECE_H
#define PIECE_H

#include "QString"
#include "QGraphicsPixmapItem"

class Piece
{
public:
    Piece(QString kleur, QString tipe, QString posisie);

    const QString &getKleur() const;
    void setKleur(const QString &newKleur);

    const QString &getTipe() const;
    void setTipe(const QString &newTipe);

    const QString &getPosisie() const;
    void setPosisie(const QString &newPosisie);


private:
    QString kleur;
    QString tipe;
    QString posisie;

};

#endif // PIECE_H
