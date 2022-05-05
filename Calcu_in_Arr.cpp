#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {11, 22, 33, 44, 55};
    int sum = 0;
    for (int x = 0; x < 5; x++)
    {
        sum += arr[x];

    }
    cout << sum << endl;

    return 0;
}