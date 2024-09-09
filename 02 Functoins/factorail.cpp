#include <iostream>
using namespace std;

int getFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i += 1)
    {
        fact *= i;
    }

    return fact;
}

int main()
{

    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int fact = getFactorial(num);

    cout << "Factorial of " << num << " is " << fact << endl;

    return 0;
}