#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value of n: ";
    cin >> n;

    int temp = 0;
    for (int row = 0; row < n; row += 1)
    {

        for (int col = 0; col <= row; col += 1)
        {
            // cout << "*";
            cout << " " << temp + 1;
            temp += 1;
        }
        cout << endl;
    }

    return 0;
}