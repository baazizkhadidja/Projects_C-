#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
map<string, double> poids;

poids["souris"] = 0.05;
poids["tigre"] = 200;
poids["chat"] = 3;
poids["elephant"] = 10000;

for(map<string, double>::iterator it= poids.begin(); it!=poids.end(); ++it)
{
    cout<< it->first << ", pèse: " <<it->second << " Kg."<<endl;
}

return 0;

}
