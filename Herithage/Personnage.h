#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>

class Personnage
{
    public:
        Personnage();
        Personnage(std::string name);
        void recevoirDegats(int degats);
        void coupDePoing(Personnage &cible) const;

        void sePresenter() const;
    private:
        int m_vie;
        std::string m_nom;
};

#endif
