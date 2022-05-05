#include <iostream>
using namespace std;

int main() 
{
    int Arr[2][3]= {{2,3,4},{8,9,10}};
    int cviArr[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << Arr[2][3];
            if (j == 3 - 1)
            {
                cout << endl << endl;
            }
            
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cviArr[3][2] = Arr[2][3];
            cout << " " << cviArr[3][2];
            if (i == 3 - 1)
            {
                cout << endl << endl;
            }

        }
    }

    return 0;
}