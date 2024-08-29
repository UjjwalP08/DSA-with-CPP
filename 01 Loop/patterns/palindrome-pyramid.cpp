#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of rows: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {
        // Space
        for (int space = 0; space < n - row; space += 1)
        {
            cout << " ";
        }
        // Print
        for (int col = 0; col <= row; col += 1)
        {
            cout << col + 1;
        }

        for (int col = row; col > 0; col -= 1)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}