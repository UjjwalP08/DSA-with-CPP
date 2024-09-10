#include <iostream>
using namespace std;

void count0_1(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
    }
    cout << "In array 0 count is " << zeroCount << " and 1 count is " << oneCount;
}
int main()
{
    int arr[10] = {0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int);
    count0_1(arr, size);
    return 0;
}