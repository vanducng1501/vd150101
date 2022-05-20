// tính S(n) = 1 + 2 + 3 +...+ n

#include <iostream>
using namespace std;

int main() {
    int S = 0;
    int i,n;
    cin >> n;
    
    for (i = 0; i <= n; i++) {
        S = S + i;
    }
cout << S << endl;
return 0;
}
