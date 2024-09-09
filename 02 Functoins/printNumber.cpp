#include <iostream>
using namespace std;

void generateNumber(int digit)
{
    int number = 0;
    for (int i = 1; i <= digit; i += 1)
    {
        int digit_value = i;
        cout << "Enter the value of " << i << " digit: ";
        cin >> digit_value;
        number = number * 10 + digit_value;
    }
    cout << "Your Generated Number is " << number << endl;
}

int main()
{
    int totalDigits;

    cout << "Enter the Total Digits ";
    cin >> totalDigits;

    generateNumber(totalDigits);

    return 0;
}