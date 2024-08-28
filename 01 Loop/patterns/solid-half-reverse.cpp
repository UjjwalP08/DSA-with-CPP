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
        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }
        // First Half Print
        for (int col = 0; col <= row; col += 1)
        {
            cout
                << "*";
            // cout
            //     << row + 1;
            // cout
            //     << col + 1;
            // cout
            //     << char(row + 'A');
            // cout
            //     << char(col + 'A');
        }

        cout << endl;
    }

    for (int row = n - 1; row > 0; row -= 1)
    {

        // Space
        for (int space = 0; space < n - row + 1; space++)
        {
            cout << " ";
        }
        // Second Half Print
        for (int col = 0; col < row; col += 1)
        {
            cout
                << "*";
            // cout
            //     << row + 1;
            // cout
            //     << col + 1;
            // cout
            //     << char(row + 'A');
            // cout
            //     << char(col + 'A');
        }

        cout
            << endl;
    }

    return 0;
}