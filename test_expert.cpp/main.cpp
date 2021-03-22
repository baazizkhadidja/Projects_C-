#include <iostream>
#include<vector>
using namespace std;

class Answer
{
public:
    static vector <vector<int> > sandpile(vector<vector<int>> pile, int n)
    {
    return pile[1][1];
    }

};

int main()
{   vector<vector<int>> pile{
    vector<int> {1,1,1},
    vector<int> {1,3,1},
    vector<int> {1,1,1}
    };

    cout << Answer::sandpile(pile,1)<<endl;

};
