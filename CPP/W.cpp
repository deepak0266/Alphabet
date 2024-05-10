#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((j == 1 || j == n) || (i == j && i > n / 2) || (i + j == n + 1 && i > n / 2)) {
                cout << "W";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
