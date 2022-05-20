// Tinh S(n) = 1/2 + 3/4 + 5/6 + .. + (2*n +1)/(2*n +2)

#include <iostream>
using namespace std;
int main() {
    int n;
    float S = 0;
    cin >> n;
    if (n <= 1) {
        cout << "Error";
    } else {
        for (float i = 0; i <= n; i++) {
            S = S + (2*i +1)/(2*i +2);
        }
    }
    cout << S << endl;
    return 0;
}