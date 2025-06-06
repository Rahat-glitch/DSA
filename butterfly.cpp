#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the total number of rows: ";
    cin >> n;
    n=n/2;
    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
