#include <iostream>
#include <limits.h>
using namespace std;

int minElement(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}
int main()
{
    int arr[10] = {
        1, 2, 5, 76, 314, 23, -1, 45, 23, -23};
    int size = sizeof(arr) / sizeof(int);

    int minEle = minElement(arr, size);

    cout << "Minimum Element in array is " << minEle;
    return 0;
}