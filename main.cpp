#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
using namespace std;

int main()
{
    BarreCarree carre(10,10,"BC1",10,"monCarre");
    BarreRonde ronde(10,15,"BR1",12,"unCercle");
    BarreRectangle rectangle(15,10,"BR1",20,18,"unRectangle");

     cout<<"La masse de la barre carre est de  : "<<carre.CalculerMasse()<<endl;
     cout<<"La masse de la barre ronde est de  : "<<ronde.CalculerMasse()<<endl;
     cout<<"La masse de la barre rectangle est de  : "<<rectangle.CalculerMasse()<<endl;

     carre.Barre::AfficherCaracteristiques();
     ronde.Barre::AfficherCaracteristiques();
     rectangle.Barre::AfficherCaracteristiques();
}
