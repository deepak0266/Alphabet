#include <iostream>

using namespace std;

int main() {
    int  i,j,n;
    cout << "Enter the Odd number only: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n||i==(n+1)/2)
                cout << "H";
            else 
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
