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

    for (int i = 0; i <= num; i += 1)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}