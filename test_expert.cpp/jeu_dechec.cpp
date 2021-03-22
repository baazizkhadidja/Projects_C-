
#include <iostream>

using namespace std;

class Answer
{
public:
    static int count(int n)
    {
    if(n<2){return NULL;}
    else if(2<=n<=30000){return n*(n-1)/2;}
    }
};

int main()
{
    cout << Answer::count(4)<<endl;
    cout << Answer::count(10000)<<endl;
}
