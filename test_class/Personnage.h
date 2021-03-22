#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include"Arme.h"
#include<string>
#include<iostream>


class Personnage{
public:
Personnage();
Personnage(int vie, int mana, std::string nomArme, int degatsArme);
~Personnage();

void recevoirDegats(int nbDegats);
void attaquer(Personnage & cible);
void boirePotionDevie(int quantitePotion);
void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
bool estVivant()const;
void afficherEtat()const;

private:
int m_vie ;
int m_mana;
Arme m_arme;
};



#endif // PERSONNAGE_H_INCLUDED
