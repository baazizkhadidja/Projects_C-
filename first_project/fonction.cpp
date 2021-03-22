
#include<iostream>;
#include<string>;
#include<iostream>;
#include<string>;
using namespace std;


void dessineRect(int l , int h)
{
for(int ligne(0); ligne <h; ligne++)
    {
        for(int colonne(0); colonne <l; colonne++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){

int largeur, hauteur;
cout<<"Largeur du rectangle : ";
cin >> largeur;
cout << "Hauteur du rectangle : ";
cin >> hauteur;

dessineRect(largeur, hauteur);
return 0;

}
