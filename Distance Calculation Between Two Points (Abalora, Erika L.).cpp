#include<iostream>
#include<cmath>
using namespace std;

//distance
int main()
{
    float x1, x2, y1, y2, distance;
    cout << "Type the value of x1: ";
    cin >> x1;
    cout << "Type the value of x2: ";
    cin >> y1;
    cout << "Type the value of y1: ";
    cin >> x2;
    cout << "Type the value of y2: ";
    cin >> y2;

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    
    cout << "The computed distance is " << distance << ".";
    
    return 0;
}
