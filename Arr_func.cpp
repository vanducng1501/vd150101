#include <iostream>
using namespace std;

int printArr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return arr[i];
}

int main ()
{
    int myArr[3] = {15, 29, 25};
    printArr(myArr, 3);

    return 0;
}