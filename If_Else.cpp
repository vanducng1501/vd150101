#include <iostream>
using namespace std;

int main()
{
    int age = 22;

    if (age >= 18) 
    {
        cout << " Adult" << endl;
    }
        else if (age > 14)
        {
            cout << "Teenager" << endl;
        }
        else if (age > 0)
        {
            cout << "Child" << endl;
        }
     else 
        {
         cout << "Wrong!" << endl;

        }
     return 0;
    
}