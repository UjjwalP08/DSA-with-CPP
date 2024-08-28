#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        for (int col = 0; col < n - row; col += 1)
        {
            if (row == 0 || row == n - 1)
            {
                // cout << "* ";
                // cout << row + 1 << " ";
                cout << char(row + 'A') << " ";
            }
            else
            {
                if (col == 0 || col == n - row - 1)
                {
                    // cout << "* ";
                    // cout << col + 1 << " ";
                    cout << char(col + 'A') << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}