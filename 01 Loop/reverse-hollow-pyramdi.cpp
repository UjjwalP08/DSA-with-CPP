#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        // For Space
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        // For star
        for (int col = 0; col <= row; col += 1)
        {
            if (row == 0 || row == n - 1)
            {
                cout << "*";
                // cout << row + 1;
                // cout << char(row + 'A');
            }
            else
            {
                if (col == 0 || col == row)
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

    return 0;
}