#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) {
            cout << (n - i + 1) << " ";
        }

        cout << "\n";
    }

    return 0;
}