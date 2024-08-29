#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value:- ";
    cin >> num;

    for (int row = 0; row < num; row += 1)
    {
        for (int col = 0; col <= row; col += 1)
        {
            cout << " "
                 << "*";
        }

        // Space
        for (int space = 0; space < 2 * (num - row) - 2; space += 1)
        {
            cout << " "
                 << " ";
        }
        for (int col = 0; col <= row; col += 1)
        {
            cout << " "
                 << "*";
        }

        cout << endl;
    }
    for (int row = num; row > 0; row -= 1)
    {

        for (int col = 0; col < row; col += 1)
        {
            cout << " "
                 << "*";
        }
        for (int space = 0; space < 2 * (num - row); space += 1)
        {
            cout << " "
                 << " ";
        }
        for (int col = 0; col < row; col += 1)
        {
            cout << " "
                 << "*";
        }
        cout << endl;
    }

    return 0;
}