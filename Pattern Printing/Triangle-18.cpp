#include<iostream>
using namespace std;

int main (void) {
    int n; cin >> n;
    char alpha = 'a';
    int cnt{};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cnt++;

            if (cnt % 2 == 0) {
                cout << char(alpha - 32) << " ";
            }
            else {
                cout << alpha << " ";
            }

            alpha++;
        }

        cout << "\n";
    }

    return 0;
}