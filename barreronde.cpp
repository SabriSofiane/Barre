#include "barreronde.h"

/**
 * @brief BarreRonde::BarreRonde
 * @param _longueur
 * @param _densite
 * @param _reference
 * @param _diametre
 * @param _nom
 */

BarreRonde::BarreRonde(const int _longueur, const float _densite, const string _reference, const float _diametre, const string _nom):Barre(_longueur,_densite,_reference,_nom),diametre(_diametre)
{
    cout << "constructeur de la barreRonde"<<endl;
}

BarreRonde::~BarreRonde()
{
    cout << "destructeur de la barreRonde"<<endl;
}

float BarreRonde::CalculerSection()
{
    return (3.14*(diametre*diametre))/4;
}

float BarreRonde::CalculerMasse()
{
    return longueur* CalculerSection()*densite;
}
