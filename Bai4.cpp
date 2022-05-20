// Tính S(n) = 1/2 + 1/4 + ... + 1/2n

#include <iostream>
using namespace std; 
int main() {
    int n;
    float S = 0;
    cin >> n;
    if (n <= 1) {
        cout << "Error!";
    } else {
        for (int i = 1; i <= n; i++) {
            S = S + 1.0/(2*i);
        }
    }
    cout << S << endl;
    return 0;
}