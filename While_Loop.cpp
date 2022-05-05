#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int number;
    int sum = 0;
    while (num < 4)
    {
        
        cin >> number;
        sum += number;
        num++;
              

    }
       
    cout << sum << endl;
    return 0;
}