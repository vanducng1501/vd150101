#include <iostream>
using namespace std;

int main()
{
    int pizza = 250;
    switch (pizza)
    {
    case 125:
        cout << "Not enough" << endl;
        break;
    case 250:
        cout << "Enough" << endl;
        break;
    case 300:
        cout << "redundant" << endl;
        break;
    
    default:
        cout << "This is the default case" << endl;
        break;
    }

    return 0;
}