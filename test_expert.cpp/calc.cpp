#include <iostream>
#include<vector>
using namespace std;

class Answer
{
public:
    static int calc(const vector<int>& tab, int n1, int n2)
    {
    int c =0;
    for(int i = n1; i=n2; i++){
        c = c+tab[i];
    }
    return c;
    }
};

int main()
{   vector<int> tab {0,1,2,3,4,5,3};
    cout << Answer::calc(tab, 0, 1)<<endl;
    cout << Answer::calc(tab, 0, 5)<<endl;
    cout << Answer::calc(tab, 0, 0)<<endl;
    cout << Answer::calc(tab, 0, 6)<<endl;
};
