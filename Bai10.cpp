// Tinh T(x,n) = x^n

#include <iostream>
using namespace std;
int main() {
    float x,n;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap n: "; cin >> n;
    float T = 1;
    while (n) {
        if (n > 0) {
            T = T*x;
            n--;
        } else {
            T = T* (1/x);
            n++;
        }
    }
    cout << T << endl;
    return 0;
}
// tim cach khac de giai quyet TH n < 0.