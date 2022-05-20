// Tìm số ước lẻ lớn nhất của số nguyên dương n

/* #include <iostream>
using namespace std;
int main() {
    int n,UOC;
    cout << "Nhap n: "; cin >> n;
    int Max = 1;
    if (n <= 0) {
        cout << "Error" << endl;
    } else {
        for (UOC = 1; UOC <= n; UOC++) {
            if (n % UOC == 0 && UOC % 2 == 1) {
                if (Max < UOC) {
                    Max = UOC;
                }
            }
        }
        cout << "Uoc so le lon nhat cua n: " << Max << endl;
    }
    return 0;
} */
// lam de quy

#include <iostream>
using namespace std;
int uoc_soMAX(int n,int Max = 1,int UOC = 1) {
    if (n <= 0) {
        cout << "Error" << endl;
    } else {
        if (n % UOC == 0 && UOC % 2 == 1) {
            if (Max < UOC) {
                Max = UOC;
            }              
        }
        if (UOC <= n) {
            uoc_soMAX(n,Max,UOC + 1);
        } else {
            cout << Max << endl;
        }
    }
    return Max;
}
int main() {
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Uoc so le lon nhat cua n: "; uoc_soMAX(n);
    return 0;
}
