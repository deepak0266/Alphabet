#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || (i+j==(3*n/5+1))||(i-j==(55*n/100))) {
                cout << "K";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
