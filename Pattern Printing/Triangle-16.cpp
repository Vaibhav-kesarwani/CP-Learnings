#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        int cnt{1};

        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << cnt << " ";
            cnt = cnt * (i - j) / j;
        }

        cout << "\n";
    }

    return 0;
}