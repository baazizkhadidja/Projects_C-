#include"personne.h"

void personne::set_nom(std::string n)
{
m_nom = n;
}

std::string personne::get_nom()
{
    return m_nom;
}

personne::personne(std::string n): m_nom(n)
{
}
