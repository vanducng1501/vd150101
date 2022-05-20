// Tính S(n) = 1^2 + 2^2 + ... + n^2

#include <iostream>
using namespace std;

int main() {
    int n,i;
    int S = 0;
    cin >> n;

    for (i = 0;i <= n;i++) {
        S = S + i*i;
    }
    cout << S << endl;
    return 0;
}