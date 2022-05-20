#include <iostream>
using namespace std;

void myFunction (int *f){ *f = 20;}

int main ()
{
    int var = 30;
    myFunction(&var);
    cout << var << endl;

    return 0;
}