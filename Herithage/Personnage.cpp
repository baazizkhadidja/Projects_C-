#include "Personnage.h"

using namespace std;

Personnage::Personnage(string nom) : m_vie(100), m_nom(nom)
{

}

void Personnage::recevoirDegats(int degats)
{
    m_vie -= degats;
    cout <<m_vie<<endl;
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

void Personnage::sePresenter() const
{
cout << "Bonjour, je m'appelle: " << m_nom << endl;
cout << "J'ai encore: " << m_vie << " points de vie." <<endl;
}
