#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include"revision.h"
using namespace std;

int main()
{
    Personnage david, goliath("Epee aiguisée", 20);
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranche vénéneuse de la mort", 40);
    goliath.attaquer(david);

    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}
