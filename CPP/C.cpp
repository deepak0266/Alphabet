#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 1 || i == n) && j != 1) {
                cout << "C";
            } else if (j == 1 && (i != 1 && i != n)) {
                cout << "C";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
