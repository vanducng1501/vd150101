// Tinh S(n)= 1 + 1/3 + 1/5 + ... + 1/(2n+1)

#include <iostream>
using namespace std;
int main() {
    int n;
    float S = 0;
    cin >> n;
    if (n <= 1) {
        cout << "Error";
    } else {
        for (int i = 0; i <= n; i++) {
            S = S + 1.0/(2*i +1) ;
        }
    }
    cout << S << endl;
    return 0;
}