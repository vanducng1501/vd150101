// Liêt kê tất cẩ các "ước số lẻ" của số nguyên dương n

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
        if (n % UOC == 0 && UOC % 2 != 0) 
        cout << UOC << " ";
    }
    return 0;
} */
// làm bài dưới dạng đệ quy.
#include <iostream>
using namespace std;
int uoc_so(int n,int UOC = 1)
{
    if (n <= 0) {
        cout << "Error" << endl;
    } else {
        if (n % UOC == 0 && UOC % 2 == 1) {
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
    cout << "Uoc so le cua n: "; uoc_so(n);
    return 0;
}