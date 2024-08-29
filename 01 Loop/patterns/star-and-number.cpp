#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of row: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        // 1st method

        // for (int col = 1; col <= 2 * row + 1; col += 1)
        // {
        //     if (col % 2 == 0)
        //     {
        //         cout << "* ";
        //     }
        //     else
        //     {
        //         cout << row + 1 << " ";
        //     }
        // }

        // 2nd Method
        for (int col = 0; col < 2 * row + 1; col += 1)
        {
            if ((col + 1) % 2 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << row + 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}