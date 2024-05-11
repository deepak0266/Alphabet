#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (n % 2 == 0) {
                if (i == 1 || j == 1 || i == n / 2 + 1 || ((i == n / 2 + 1)) || i == n)
                    cout << "E";
                else
                    cout << " ";
            } else {
                if (i == 1 || j == 1 || j == n + 1 || i == (n + 1) / 2 || i == n)
                    cout << "E";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
   return 0;
}