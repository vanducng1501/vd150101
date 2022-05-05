#include <iostream>
using namespace std;

int recursion (int r)
{
    if (r == 1) {
        return r;
    } else return r * recursion(r - 1);
}
int main ()
{
    cout << recursion(10) << endl;

    return 0;
}