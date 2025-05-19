#include<iostream>
using namespace std;

int main(void) {
    int n; cin >> n; 
    int cnt{1};

    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << cnt << " ";
        }
        
        cnt++;
        cout << "\n";
    }

    cout << "\n\n";

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << (n - i + 1) << " ";
        }

        cout << "\n";
    }

    return 0;
}