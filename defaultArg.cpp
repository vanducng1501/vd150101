#include <iostream>
using namespace std;

int macdinh(int x=1, int y=1, int z=1)
{
    return x*y*z;
}
int main()
{
    cout << macdinh() << endl;
    cout << macdinh(3) << endl;
    cout << macdinh(3, 5) << endl;
    cout << macdinh(3, 5, 7) << endl;

    return 0;
}