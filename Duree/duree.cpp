#include<iostream>
#include<string>
#include"duree.h"
using namespace std;

//le constructeur
Duree::Duree(int heures, int minutes, int secondes):m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{};

bool Duree::estEgal(Duree const& a, Duree const& b)
{
if(a.m_heures == b.m_heures && a.m_minutes == b.m_minutes && a.m_secondes == b.m_secondes)
    return true;
else
    return false;

};

