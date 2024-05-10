#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 1 && j != n) ||(j==n/4 && i<(3/4*n)) ||(j == n / 2+1 && i != n) || (i == n && j <= n / 2 + 1&& j >= n / 4 + 1)||(i>(3*n/4)  && j == n / 4  )) {
                cout << "J";
            } 
            
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
