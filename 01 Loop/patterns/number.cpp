#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of row: ";
    cin >> n;

    for (int row = 0; row < n; row += 1)
    {

        char ch;
        for (int col = 0; col < row + 1; col += 1)
        {
            int number = row + 1;
            ch = col + 1 + 'A' - 1;
            cout << ch << " ";
        }
        for (char cha = ch; cha > 'A';)
        {
            cha = cha - 1;
            cout << cha << " ";
        }
        cout << endl;
    }

    return 0;
}