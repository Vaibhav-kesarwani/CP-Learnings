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

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j >= 1; j--) {
            cout << "  ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << "\n";
    }

    return 0;
}