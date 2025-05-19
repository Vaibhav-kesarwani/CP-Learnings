#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;
    char alpha = 'a';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j<= i; j++) {
            cout << alpha++ << " ";
        }

        cout << "\n";
    }

    return 0;
}