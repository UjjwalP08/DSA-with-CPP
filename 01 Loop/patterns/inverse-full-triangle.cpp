#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of row:";
    cin >> n;

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