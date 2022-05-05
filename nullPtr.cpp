#include <iostream>
using namespace std;

int main() 
{
    int *p = NULL;
    p = new int[20];

    delete [] p;

    return 0;
}