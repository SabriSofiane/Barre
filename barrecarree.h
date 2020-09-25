#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
/**
 @file barre.h
 @brief déclaration de la classe BarreCarree
 @version 1.0
 @author Sofiane SABRI
 @date 24/09/2020
 */

class BarreCarree : public Barre
{
public:
    BarreCarree(const int _longueur,const float _densite,const string _reference,const float _cote,const string _nom);
    ~BarreCarree();
    float CalculerSection();
    float CalculerMasse();
private:
    float cote;
};

#endif // BARRECARREE_H
