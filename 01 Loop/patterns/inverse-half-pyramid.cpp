#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            // cout << "* ";
            // cout << col + 1 << " ";
            cout << char(col + 'A') << " ";
        }
        cout << endl;
    }

    return 0;
}