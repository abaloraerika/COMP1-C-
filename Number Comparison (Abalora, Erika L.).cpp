#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //Ask the user a number and identify if it is lower than 200.
    int x;
    cout << "Type a number: ";
    cin >> x;
    if (x < 200){
        cout << x << " is lower than 200.\n";
    }
    cout<<"End of the Program.";
    return 0;
}
