#include"Arme.h"
#include<iostream>
#include<string>
using namespace std;


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


