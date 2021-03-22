#include<iostream>
#include"carre.h"
using namespace std;



int main()
{
carre objet;

objet.cote = 10;
double surf = objet.calcul_surface();

cout <<surf<<endl;


}
