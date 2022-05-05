#include <iostream>
using namespace std;

int main() 
{
    int Arr[5]={21,12,33,45,68};
    int Max = Arr[0];
    int Min = Arr[0];

    for (int i = 0; i < 5; i++) 
    {
        
        if (Max < Arr[i])
        {
            Max = Arr[i];
        }
        if (Min > Arr[i])
        {
            Min = Arr[i];
        }
       
    }
    cout << "Max:" << Max << endl;
    cout << "Min:" << Min << endl;
    return 0;
}