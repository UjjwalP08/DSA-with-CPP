#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        for (int col = 0; col < n - row - 1; col += 1)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col += 1)
        {
            if (row != n - 1)
            {
                if (col == 0 || col == row + 1 - 1)
                {
                    cout << "* ";
                }
                else
                {
                    // 2 space here
                    cout << "  ";
                }
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}