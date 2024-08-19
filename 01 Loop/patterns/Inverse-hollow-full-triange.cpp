#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of rows : ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        // Space
        for (int col = 0; col < row; col += 1)
        {
            cout << " ";
        }

        for (int col = 0; col < n - row; col += 1)
        {
            if (row != 0)
            {
                if (col == 0 || col == n - row - 1)
                {

                    cout << "* ";
                }
                else
                {
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