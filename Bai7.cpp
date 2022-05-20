// Tinh S(n) = 1/2 + 2/3 + ... + n/(n+1)

#include <iostream>
using namespace std;
int main() {
    int n;
    float S = 0;
    cin >> n;
    if (n <= 1) {
        cout << "Error";
    } else {
        for (float i = 1.0; i <= n; i++) {
            S = S + i/(i+1);
        }
    }
    cout << S << endl;
    return 0;
}