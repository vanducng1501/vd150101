// Tính S(n) = 1 + 1/2 + 1/3 + ... + 1/n

#include <iostream>
using namespace std;

int main() {
    int n,i;
    float S = 0;
    cin >> n;
    if (n <= 1) {
        cout << "Error!" << endl;
    } else {
        for (i = 1; i <= n; i++) {
            S = S + 1.0/i;
        }
    }

    cout << S << endl;
    return 0;
}