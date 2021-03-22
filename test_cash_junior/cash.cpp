#include<iostream>
using namespace std;

typedef struct {
long coin2;
long bill5;
long bill10;
} Change;

class Answer
{
public:
static bool optimalChange(long s, Change &c)
{
    c.coin2 = 0;
    c.bill5 = 0;
    c.bill10 = 0;

    if( s ==1 || s == 3 )
    return false;

    if (s >= 20)
    {
    c.bill10 = (s/10)-1;
    s = (s%10) + 10;
    cout <<"else if s>20, donc s = "<< s<<endl;
    }

    if(s % 2 == 0)
    {
    c.bill10 += s/10;
    c.coin2 = (s%10)/2;
    cout <<"else if s%2, s = "<< s<<endl;
    }

    else if ((s % 5)== 1 || (s % 5) == 3)
    {
    c.bill5 = 1;
    c.coin2 = (s - 5) /2;
    cout <<"else if s%5 , s = "<< s<<endl;
    }

    else
    {
    c.bill10 += s / 10;
    c.bill5 = (s % 10)/5;
    c.coin2 = (s % 5)/2;
    cout <<"else, s = "<< s<<endl;
    }


cout << "s final " << s << endl;

}
};


int main()

{
Change c;
long s = 10;
bool found = Answer::optimalChange(s, c);


cout << "Coin(s) 2£ = " << c.coin2 << endl;
cout << "bill(s) 5£ = " << c.bill5 << endl;
cout << "bill(s) 10£ = " << c.bill10 << endl;
}
