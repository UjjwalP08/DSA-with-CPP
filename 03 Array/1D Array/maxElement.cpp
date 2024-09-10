#include <iostream>
#include <limits.h>
using namespace std;

int maxElement(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int arr[10] = {
        1, -2, -511, -76, -34, -23, -102, -45, -23, -23};
    int size = sizeof(arr) / sizeof(int);

    int maxEle = maxElement(arr, size);

    cout << "Maximum Element in array is " << maxEle;

    return 0;
}