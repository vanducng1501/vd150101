#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int i;
    srand(time(0));
    for (i=1; i<4; i++)
    {
        cout << rand()%6 << endl;
    }

    return 0;
}