#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include<string>

class Personnage
{

public:
Personnage(std::string nomArme, int degatsArme);
void recevoirDegats(int nbDegats);
void attaquer(Personnage &cible);
void boirePotionDeVie(int quantitePotion);
void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
bool estVivant();

private:
int m_vie = 100;
int m_mana = 100;
std::string m_nomArme = "Epée rouillée";
int m_degatsArme = 10;

};

#endif // PERSONNAGE_H_INCLUDED
