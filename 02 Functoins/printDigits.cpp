#include <iostream>
using namespace std;

void printDigits(int num)
{
    while (num > 0)
    {
        int r = num % 10;
        num = num / 10;
        cout << r << " ";
    }
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    cout << "Digits are " << endl;
    ;
    printDigits(num);

    return 0;
}