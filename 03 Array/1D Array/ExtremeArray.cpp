#include <iostream>
using namespace std;

void extremeArray(int arr[], int size)
{

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
}

int main()
{

    int arr[10] = {
        1, 2, 5, 76, 34, 23, -102, 45, 23, -23};
    int size = 10;

    extremeArray(arr, size);

    return 0;
}