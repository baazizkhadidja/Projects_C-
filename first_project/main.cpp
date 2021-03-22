#include <iostream>
#include"personne.h"
using namespace std;


int main(){

personne jojo("zahra");
//jojo.set_nom("zahra");
personne hichem("hachouma");
personne nefou(hichem);

        cout << jojo.get_nom()<<endl;
        cout << hichem.get_nom()<<endl;
         cout << nefou.get_nom()<<endl;

        cout << "hello";
}


