#include <utility>
#include <iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

string str2="doody";

 static bool isTwin(string a, string b){
        map<string, string> twins;
        map<string, string>::iterator it;

        twins[a]=b;
        for(it=twins.begin(); it!=twins.end(); it++)
        {string val = it->first;
        cout<< val <<endl;}

 }

int main()
{
isTwin("doody", "oody");
}
