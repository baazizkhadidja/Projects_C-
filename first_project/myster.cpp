#include<iostream>;
#include<string>
using namespace std;

main(){

cout<<"saisissez un mot"<<endl;
string mot;
cin>>mot;
cout<<"c est quoi le mot"<<endl;
string mot1;
cin>>mot1;
while(mot1 != mot){

if(mot1==mot)
{cout<<"Bravo"<<endl;return 0;}
else{
cout<<"ce n est pas le mot"<<endl;
cout<<"Quel est ce mot ?"<< mot1<<endl;
}

}}
