// Tinh T(n) = 1*2*3*...*n

#include <iostream>
using namespace std;
int main() {
    int n;
    int T = 1;
    cin >> n;
    if (n <= 0) {
        cout << "Error";
    } else {
        for (int i = 1; i <= n; i++) {
         T = T*i;   
        }
    }
    cout << T << endl;
    return 0;

}