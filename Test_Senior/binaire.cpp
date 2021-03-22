#include<iostream>
#include<vector>

#include<map>
using namespace std;

class Answer
{
public:
static int getBit(unsigned int value, int pos)
{
   vector<int> tab(32);

   for(int i(0); i<32; i++){
    tab[i]=value%2;

    value= value/2;
   }
   return tab[pos];



}
};


int main(){
cout<<Answer::getBit(17,0)<<endl;
cout<<Answer::getBit(17,1)<<endl;
cout<<Answer::getBit(17,2)<<endl;
cout<<Answer::getBit(17,3)<<endl;
cout<<Answer::getBit(17,4)<<endl;
}

