#include<iostream>
#include"Personnage.h"
#include<string>
using namespace std;



int main()
{   //Création des personnages
    Personnage david, goliath(100,100, "Epée aiguisée", 20);

    //Au combat!
    goliath.attaquer(david);
    david.boirePotionDevie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    //Temps mort! Voyons voir la vie de chacun

    cout << "David"<<endl;
    david.afficherEtat();
    cout << "Goliath"<<endl;
    goliath.afficherEtat();


    return 0;
}
