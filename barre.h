#ifndef BARRE_H
#define BARRE_H
#include <iostream>
#include <string>

/**
 @file barre.h
 @brief déclaration de la classe Barre
 @version 1.0
 @author Sofiane SABRI
 @date 24/09/2020
 */

using namespace std;


class Barre
{
public:
    Barre(const int _longueur,const float _densite,const string _reference,const string _nom);
    ~Barre();
    void AfficherCaracteristiques();

    protected:
    /** la longueur de la barre*/

    int longueur;
     /** la densité de la barre*/
    float densite;
     /** la référence de la barre*/
    string reference;
     /** le nom de la barre*/
    string nom;
};

#endif // BARRE_H
