#include "piece.h"

Piece::Piece(QString kleur, QString tipe, QString posisie)
{
    this->kleur = kleur;
    this->tipe = tipe;
    this->posisie = posisie;
}

const QString &Piece::getKleur() const
{
    return kleur;
}

void Piece::setKleur(const QString &newKleur)
{
    kleur = newKleur;
}

const QString &Piece::getTipe() const
{
    return tipe;
}

void Piece::setTipe(const QString &newTipe)
{
    tipe = newTipe;
}

const QString &Piece::getPosisie() const
{
    return posisie;
}

void Piece::setPosisie(const QString &newPosisie)
{
    posisie = newPosisie;
}
