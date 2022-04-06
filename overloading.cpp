#include <iostream>
using namespace std;

void print(int x){cout << x << endl;}
void print(float x){cout << x << endl;}

int main()
{
    int a = 3;
    float b = 3.5;
    print(a);
    print(b);

    return 0;
}