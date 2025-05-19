#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;
    int cnt{1};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << cnt++ << " ";
        }

        cout << "\n";
    }

    return 0;
}