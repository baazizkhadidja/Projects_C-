#include "math.h"
#include<iostream>
using namespace std;


int nombreDeSecondes(int heures, int minutes, int secondes)
{
int total = 0;

total = heures * 60 *60;
total += minutes * 60;
total += secondes;
return total;

}

int main(){

cout<< nombreDeSecondes(1,10,25)<<endl;
cout<<(1*60*60)+(10*60)+25<<endl;

}
