#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << "\n";
    }

    return 0;
}