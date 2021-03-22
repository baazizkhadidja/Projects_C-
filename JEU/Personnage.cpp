#include"Personnage.h"
using namespace std;

Personnage::Personnage(string nomArme, int degatsArme ): m_vie(100), m_mana(100), m_nomArme(nomArme), m_degatsArme(degatsArme){}

void Personnage::recevoirDegats(int nbDegats)
{
m_vie -= nbDegats;
if(m_vie<0)
{
    m_vie =0;
}
}

void Personnage::attaquer(Personnage &cible)
{
cible.recevoirDegats(m_degatsArme);
}

void boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if(m_vie > 100)
    {
        m_vie = 100;
    }
}

void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant()const
{
if(m_vie > 0){return true;}
else{return false;}
}

