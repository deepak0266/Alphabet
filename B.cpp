#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
        {
            if (i == 1|| j==1|| i == n || (i == (n + 1) / 2 && j != n) || (j == 1 && i <= n / 2) || (j == n && i > n / 2)|| (j == n && i < n / 2)) {
                cout << "B";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
