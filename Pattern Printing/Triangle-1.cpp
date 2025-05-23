/*
    *
    * *
    * * *
    * * * *
    * * * * *

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main(void) {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}