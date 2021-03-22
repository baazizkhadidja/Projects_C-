#include <iostream>
#include<string>
using namespace std;

using namespace std;

//class Arme:
class Arme
{
public:
Arme();
Arme(std::string nom,int degats);
int getDegats();
void changer(std::string nom, int degats);
void afficher() const;

private:
std::string m_nom;
int m_degats;

};

Arme::Arme(string nom,int degats): m_nom(nom),m_degats(degats){};
int Arme::getDegats(){return m_degats;};
void Arme::changer(string nom, int degats)
{
m_nom = nom;
m_degats = degats;
};
void Arme::afficher() const
{
cout << "Arme: "<< m_nom << "(Dégats: " << m_degats << ")" << endl;
};




//class Personnage
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




int main()
{
      //Création des personnages
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
