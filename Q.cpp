#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 1 || i == n) && (j != 1 && j != n)) {
                cout << "Q";
            } else if ((j == 1 || j == n) && (i != 1 && i != n)) {
                cout << "Q";
            } else if (i == n / 2 + 1 && j == n / 2 + 1) {
                cout << "Q";
            } else if (i > n / 2 && j > n / 2 && i + j >= n + 1) {
                cout << "Q";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
