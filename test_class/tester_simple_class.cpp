#include<iostream>
#include<string>
using namespace std;


class Personnage
{
public:
void recevoirDegat(int nbDegats)
{
m_vie -= nbDegats;
cout<<"ton solde de points de vie est descendu a: "<<m_vie<<endl;
};

void boirLotion(int lotion)
{
m_vie += lotion;
cout<<"ton solde de points de vie est monté a: "<<m_vie<<endl;
}



private:
int m_vie = 100;

};

int main()
{
Personnage david;
david.recevoirDegat(5);
david.boirLotion(100);
}
