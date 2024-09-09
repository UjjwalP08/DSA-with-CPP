#include <iostream>
#include <string>
using namespace std;

void getBinary(int decimal)
{
    string binary = "";
    int temp = decimal;
    int ans = 0;
    while (decimal > 0)
    {
        int r = decimal % 2;
        binary = binary + std::to_string(r);
        decimal = decimal / 2;
    }
    int start = 0;
    int end = binary.length() - 1;
    while (start < end)
    {

        swap(binary[start], binary[end]);

        start++;
        end--;
    }

    cout << "Binary value of Decimal " << temp << " is " << binary << endl;
}

int main()
{
    int decimal;
    cout << "Enter the Decimal Value: ";
    cin >> decimal;

    getBinary(decimal);

    return 0;
}