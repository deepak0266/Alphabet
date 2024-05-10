#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((j == 1 || j == n) && i != n || (i == n && (j > 1 && j < n))) {
                cout << "U";
            } else if (i == n && (j == 1 || j == n)) {
                cout << "U";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
