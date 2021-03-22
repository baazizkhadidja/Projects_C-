#include <iostream>
#include<vector>
#include<math.h>

using namespace std;

typedef struct {
    double x;
    double y;
} Point;


class Pi {
public:
    static double approx(vector<Point> &pts);
};

double Pi:: approx(vector<Point> &pts){
    int compteur = 0;
    for (Point pt:pts){
    if((pt.x*pt.x) + (pt.y*pt.y) <1){
    compteur ++;
    }
    }
    return (4.0*compteur/pts.size());

}


int main()
{
    vector<Point> rands;
    for (int i =0; i< 100000; i++)
    {
    Point p;
    p.x = rand() / (double)RAND_MAX;
    p.y = rand() / (double)RAND_MAX;
    rands.push_back(p);
    }

    cout << Pi::approx(rands);
}

