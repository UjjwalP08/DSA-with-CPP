#include <iostream>
using namespace std;

void km_to_miles(float km)
{
    cout << km << " is equivalent to " << km * 1.61 << " miles";
}

int main()
{
    float km;
    cout << "Enter the km: ";
    cin >> km;
    km_to_miles(km);

    return 0;
}