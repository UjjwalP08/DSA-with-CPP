#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of row: ";
    cin >> num;

    int n = num / 2;

    for (int row = 0; row < n; row += 1)
    {
        // invert half pyramid 1
        for (int col = 0; col < n - row; col += 1)
        {
            cout << "*";
        }
        // Center Space Triangle
        for (int space = 0; space < 2 * row + 1; space += 1)
        {
            cout << " ";
        }
        // inverted reverse half pyramid 2
        for (int col = 0; col < n - row; col += 1)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int row = 0; row < n; row += 1)
    {
        // half pyramid 1
        for (int col = 0; col < row + 1; col += 1)
        {
            cout << "*";
        }
        // Inverted center space triangle
        for (int space = 0; space < 2 * n - 2 * row - 1; space += 1)
        {
            cout << " ";
        }

        // reverse Half pyramid 2
        for (int col = 0; col < row + 1; col += 1)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}