#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        char alpha = 'a';
        for (int j = 1; j <= i; j++) {
            cout << alpha++ << " ";
        }

        cout << "\n";
    }

    return 0;
}