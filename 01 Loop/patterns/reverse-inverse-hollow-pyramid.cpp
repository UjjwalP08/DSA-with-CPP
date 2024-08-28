#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value of row: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        // For Space
        for (int space = 0; space < row; space += 1)
        {
            cout << " ";
        }
        // For Star
        for (int col = 0; col < n - row; col += 1)
        {
            if (row == 0 || row == n - 1)
            {
                cout << "*";
                // cout << row + 1;
                // cout << char(row + 'A');
            }
            else
            {
                if (col == 0 || col == n - row - 1)
                {
                    cout << "*";
                    // cout << col + 1;
                    // cout << char(col + 'A');
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}