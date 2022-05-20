// Tinh S(n) = 1/1*2 + 1/2*3 + ... + 1/n*(n+1)

#include <iostream>
using namespace std;
int main() {
    int n;
    float S = 0;
    cin >> n;
    if ( n <= 1) {
        cout << "Error";
    } else {
        for (int i = 1; i <= n; i++) {
            S = S + 1.0/(i*(i+1));
        }
    }
    cout << S << endl;
    return 0;
} 