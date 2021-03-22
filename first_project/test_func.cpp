#include<iostream>;
using namespace std;


//prototype de la fonction
int nombreDeSecondes(int heures, int minutes = 0, int secondes= 0);

//main
int main(){

cout<< nombreDeSecondes(1)<<endl;
cout<<(1*60*60)+(10*60)+25<<endl;

}

//définition de la fonction

int nombreDeSecondes(int heures, int minutes, int secondes){

int total =0;

total += heures*60*60;
total += minutes*60;
total += secondes;

return total;
}

