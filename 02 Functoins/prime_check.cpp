#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num > 1)
    {
        for (int i = 2; i < num; i += 1)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    return false;
}
int main()
{
    int num;
    cout << "Enter a Number:- ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is Prime Number" << endl;
    }
    else
    {
        cout << num << " is not Prime Number" << endl;
    }
    return 0;
}