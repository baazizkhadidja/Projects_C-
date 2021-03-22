#include<iostream>
#include<string>
#include"arme.h"
using namespace std;

Arme::Arme(): m_nom("Epee rouillée"), m_degats(10){}
Arme::Arme(string nom, int degats): m_nom(nom), m_degats(degats){}


int Arme::getDegats()const
{
    return m_degats;
}

void Arme::afficher()
{
    cout << "Arme : " << "(Degats: " << m_degats << ")" << endl;
}



void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}



