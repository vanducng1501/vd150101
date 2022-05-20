#include <iostream>
using namespace std;

bool isPalindrome(int p)
{
    int number = p; //151
    int digit;
    int reverse = 0;
    while (p != 0) {
        digit = p %10; // (151%10=1) - (15%10=5) - (1%10=1)
        reverse = reverse *10 + digit; // (0+1=1) - (1*10+5=15) - (15*10 + 1=151)
        p = p /10; //(151/10=15) - (15/10=1) - (1/10=0)
    
    }

    if (reverse == number) { 
        return true; 
    } else { 
        return false; 
    }
}

int main() 
{
    int n;
    cin >> n;
    
    if(isPalindrome(n))     
    {
        cout << n <<" is a palindrome" << endl;
    }
    else 
    {
        cout << n <<" is NOT a palindrome" << endl;
    }
    return 0;
}