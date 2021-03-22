#include<deque>
#include<map>
#include<iostream>
using namespace std;

int main()
{
deque<int> d(5,6);
deque<int>::iterator it;

for(it = d.begin(); it!= d.end(); ++it)
{
    cout << *it << endl;
}


map<string, double> poids;
poids["souris"] = 0.05;
poids["tigre"] = 200;
poids["chat"] = 3;
poids["elephant"] = 10000;



  for(map<string, double>::iterator it=poids.begin(); it!=poids.end(); ++it)
  {
    cout<<it->first<<" pèse: "<< it->second<<endl;
  }
    return 0;
}



