#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of rows: ";
    cin >> num;

    // we divide by two because we want to print exact same no of row which we gave in input
    int n = num / 2;

    for (int row = 0; row < n; row += 1)
    {
        for (int col = 0; col < n - row - 1; col += 1)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row += 1)
    {
        for (int col = 0; col < row; col += 1)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}