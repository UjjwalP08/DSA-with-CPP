#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < row + 1; col = col + 1)
        {
            // cout << "* ";
            // cout << col + 1 << " ";
            cout << char(col + 'A') << " ";
        }
        cout << endl;
    }

    return 0;
}