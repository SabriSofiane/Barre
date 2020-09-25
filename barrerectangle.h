#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

/**
 @file barre.h
 @brief déclaration de la classe BarreRectangle
 @version 1.0
 @author Sofiane SABRI
 @date 24/09/2020
 */
class BarreRectangle : public Barre
{
public:
    BarreRectangle(const int _longueur,const float _densite,const string _reference,const int _largeur,const int _hauteur,const string _nom);
    ~BarreRectangle();
    float CalculerSection();
    float CalculerMasse();
private:
    int largeur;
    int hauteur;
};

#endif // BARRERECTANGLE_H
