#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include<string>


class personne
{
    std::string m_nom;

    public:
        personne(std::string n);
        void set_nom(std::string);
        std::string get_nom();

};



#endif // PERSONNE_H_INCLUDED
