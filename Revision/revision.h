#ifndef REVISION_H_INCLUDED
#define REVISION_H_INCLUDED
#include<string>
#include"arme.h"
class Personnage
{
    public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage();



    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat();




    private:

    int m_vie;
    int m_mana;

    Arme m_arme;



};


#endif // REVISION_H_INCLUDED
