#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    cout << "Array Before Reverse" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Array After Reverse" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[10] = {
        1, 2, 5, 76, 34, 23, -102, 45, 23, -23};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);

    return 0;
}