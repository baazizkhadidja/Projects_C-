#include"polymorphisme.h"
#include<iostream>
using namespace std;



int main()
{
    Vehicule *v(0);
    v = new Voiture;
    //On crée une Voiture et on met son adresse dans un pointeur de Vehicule

    v->affiche();  //On affiche "Ceci est une voiture."

    delete v;      //Et on détruit la voiture

    return 0;
}
