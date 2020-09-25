#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
/**
 @file barre.h
 @brief déclaration de la classe BarreRonde
 @version 1.0
 @author Sofiane SABRI
 @date 24/09/2020
 */

class BarreRonde : public Barre
{
public:
    BarreRonde(const int _longueur,const float _densite,const string _reference,const float _diametre,const string _nom);
    ~BarreRonde();
    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
};

#endif // BARRERONDE_H
