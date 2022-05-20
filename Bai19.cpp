// Tính S(n) = 1 + x + x^3/3! + x^5/5! + .. + x^(2n+1)/(2n+1)!

#include <iostream>
using namespace std;
int main() {
    int n,x;
    float S = 1;
    float tuso, mauso;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap n: "; cin >> n;
    tuso = x;
    mauso = 1;
    if (n < 0) {
        cout << "Error" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            tuso = tuso * x * x;
            mauso = mauso * (2*i +1) * 2*i;
            S = S + tuso/mauso;
        }
        cout << "S = " << S << endl;
    }
    return 0;
}
// giai quyet TH n = 0 nhung ma duoi dang tong quat.