#include <iostream>
using namespace std;

int main()
{
    int height  = 180;
    int weight = 50;
    
    if (height > 160 && height < 200 || weight > 40)
    {
        cout << "Accepted drive car!" << endl;

    }

    return 0;
}