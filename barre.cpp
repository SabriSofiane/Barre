#include "barre.h"
/**
 * @brief Barre::Barre
 * @param _longueur
 * @param _densite
 * @param _reference
 * @param _nom
 */


Barre::Barre(const int _longueur, const float _densite, const string _reference, const string _nom):longueur(_longueur),densite(_densite),reference(_reference),nom(_nom)
{
    cout << "constructeur de la barre"<<endl;
}

Barre::~Barre()
{
    cout << "destructeur de la barre" << endl;
}

/**
 * @brief Barre::AfficherCaracteristiques
 */
void Barre::AfficherCaracteristiques()
{
    cout << "Nom : "<<nom<<endl;
    cout << "reference : "<<reference<<endl;
    cout<<"La longeur de la barre est de : "<<longueur<<" avec une densité de : "<<densite<<endl;
}
