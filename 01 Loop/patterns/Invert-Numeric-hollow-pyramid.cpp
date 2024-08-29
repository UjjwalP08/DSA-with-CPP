#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        int temp = row + 1;
        for (int col = 0; col < n - row; col += 1)
        {
            // cout << temp;
            if (row == n - 1 || row == 0)
            {
                cout << " " << temp;
            }

            else
            {
                if (col == 0 || col == n - row - 1)
                {
                    cout << " " << temp;
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
            ++temp;
        }
        cout << endl;
    }

    return 0;
}