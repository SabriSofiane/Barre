#include "barrecarree.h"

/**
 * @brief BarreCarree::BarreCarree
 * @param _longueur
 * @param _densite
 * @param _reference
 * @param _cote
 * @param _nom
 */


BarreCarree::BarreCarree(const int _longueur, const float _densite, const string _reference, const float _cote, const string _nom):Barre(_longueur,_densite,_reference,_nom),cote(_cote)
{
    cout << "constructeur de la barreCarree"<<endl;
}

BarreCarree::~BarreCarree()
{
    cout << "destructeur de la barreCarree"<<endl;
}

/**
 * @brief BarreCarree::CalculerSection
 * @return section
 */
float BarreCarree::CalculerSection()
{
    return cote * cote;
}

/**
 * @brief BarreCarree::CalculerMasse
 * @return la masse
 */
float BarreCarree::CalculerMasse()
{
    return longueur* CalculerSection()*densite;
}
