#include "Personnage.h"
#include<iostream>
#include<string>
using namespace std;

Personnage::Personnage():m_vie(100), m_mana(100){};
Personnage::Personnage(int vie, int mana, std::string nomArme, int degatsArme):
m_vie(vie), m_mana(mana), m_arme(nomArme,degatsArme){};

void Personnage::recevoirDegats(int nbDegats)
{
m_vie -= nbDegats;
if(m_vie < 0){m_vie =0;}
cout<<"ses poits sont devenus"<<m_vie<<endl;
}
void Personnage::attaquer(Personnage & cible)
{
cible.recevoirDegats(m_arme.getDegats());
}
void Personnage::boirePotionDevie(int quantitePotion)
{
m_vie += quantitePotion;
if(m_vie>100){m_vie = 100;};
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
m_arme.changer(nomNouvelleArme,degatsNouvelleArme);
}


bool Personnage::estVivant()const
{
return m_vie>0;
}

void Personnage::afficherEtat()const
{
cout << " Vie : "<< m_vie << endl;
cout << " Mana : "<< m_mana << endl;
m_arme.afficher();
}
