#include <iostream>

using namespace std;




int main()
{
    MyClass array[5];

    for(int i = 0; i<5; i++){
        array[i].SetVar(i);
    }
    return 0;
};

