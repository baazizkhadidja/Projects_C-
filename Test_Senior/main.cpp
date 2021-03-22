#include <iostream>
# include <string>

using namespace std;

class Algorithm
{
public:

    static int findLargest(int numbers[], int lenght){
    int maxi = numbers[0];
    for(int i=0; i<lenght; i++)
    {
        if(numbers[i]>maxi){
            maxi = numbers[i];}

    }
    return maxi;
    }
};




int main()
{
    int numbers[] = {1, -28, 88, 200, 7};
    int result = Algorithm::findLargest(numbers, 5);

    cout << result;
}
