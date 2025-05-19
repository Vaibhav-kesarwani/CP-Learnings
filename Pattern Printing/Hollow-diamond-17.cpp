#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if (i + j < n) cout << "*";
            else cout << " ";

            if (i + n <= j) cout << "*";
            else cout << " "; 
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if (i >= j) cout << "*";
            else cout << " ";

            if (i >= (2 * n - 1) - j) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}