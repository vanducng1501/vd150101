// Liệt kê tất cả các "ước số" của số nguyên dương n

/* #include <iostream>
using namespace std;
int main() {
    int n;
    int UOC;
    cout << "Nhap n: "; cin >> n;
    if (n < 0) {
        cout << "Error" << endl;
    }
    for (UOC = 1; UOC <= n; UOC++) {
        if (n % UOC == 0) {
            cout << UOC << " ";
        }
    }
    return 0;
} */
// lam bai duoi dang đệ quy.

#include <iostream>
using namespace std;
int uoc_so(int n,int UOC = 1)
{
    if (n <= 0) {
        cout << "Error" << endl;
    } else {
        if (n % UOC == 0) {
            cout << UOC << endl;
        }
        if (UOC <= n) {
            uoc_so(n,UOC + 1);
        }
    }
    return UOC;
}
int main() {
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Uoc so cua n: "; uoc_so(n);
    return 0;
}
// 2 tuan sau viet lai code ngan gon hon.