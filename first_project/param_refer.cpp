#include<iostream>;
#include<string>;
using namespace std;

void echange(double & a, double & b){

double temporaire(a);

a = b;
b = temporaire;

}

int main(){

double a(1.2), b(4.5);

cout <<"a vaut "<<a<<" et b vaut "<<b<<endl;

echange(a,b);

cout<<"a vaut "<<a<<" et b vaut "<<b<<endl;

return 0;
}
