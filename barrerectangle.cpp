#include "barrerectangle.h"
/**
 * @brief BarreRectangle::BarreRectangle
 * @param _longueur
 * @param _densite
 * @param _reference
 * @param _largeur
 * @param _hauteur
 * @param _nom
 */



BarreRectangle::BarreRectangle(const int _longueur, const float _densite, const string _reference, const int _largeur,const int _hauteur, const string _nom):Barre(_longueur,_densite,_reference,_nom),largeur(_largeur),hauteur(_hauteur)
{
    cout << "Constructeur de la barreRectangle" << endl;
}

BarreRectangle::~BarreRectangle()
{
    cout << "destructeur de la barreRectangle" << endl;
}

/**
 * @brief BarreRectangle::CalculerSection
 * @return section
 */
float BarreRectangle::CalculerSection()
{
    return largeur*hauteur;
}
/**
 * @brief BarreRectangle::CalculerMasse
 * @return masse
 */

float BarreRectangle::CalculerMasse()
{
    return longueur* CalculerSection()*densite;
}
