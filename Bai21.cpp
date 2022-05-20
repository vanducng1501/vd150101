// Tính tổng tất cả các "ước số" của số nguyên dương n

/* #include <iostream>
using namespace std;
int main() {
    int n;
    int UOC;
    int sum = 0;
    cout << "Nhap n: "; cin >> n;
    if (n <= 0) {
        cout << "Error" << endl;
    } else {
        for (UOC = 1; UOC <= n; UOC++) {
            if (n % UOC == 0) {
                sum = sum + UOC;
            }
        }
        cout << "Tong cac uoc so cua n: " << sum << endl;
    }
    return 0;
} */
// làm bài dưới dạng đệ quy.
#include <iostream>
using namespace std;
int Tong_UocSo(int n, int sum = 0,int UOC = 1) {
    if (n <= 0) {
        cout << "Error" << endl;
    } else {
        if (n % UOC == 0) {
            sum = sum + UOC;
        }
        if (UOC <= n) {
            Tong_UocSo(n,sum,UOC + 1);
        } else {
            cout << sum << endl;
        }
    }
    return sum;
}
int main() {
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong cac uoc so cua n: "; Tong_UocSo(n);
    return 0;
}
// 2 tuan sau viet code ngan gon hon.