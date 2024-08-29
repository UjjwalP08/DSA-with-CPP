#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        for (int col = 0; col <= row; col += 1)
        {
            if (row == 0 || row == n - 1)
            {
                cout << " " << col + 1;
            }
            else
            {
                if (col == 0 || col == row)
                {
                    cout << " " << col + 1;
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}