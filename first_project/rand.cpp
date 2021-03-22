#include<iostream>;
#include<ctime>;
#include<cstdlib>;
#include<string>;
using namespace std;

int main(){
string mot = "khadidja";
int a;

srand(time(0)) ;

a = rand() % mot.size();
cout<<mot[a]<<endl;
string mot1;

while(mot.size() != 0)
{int a;
a = rand() % mot.size();
mot1 += mot[a];

 }; cout <<mot;

}
