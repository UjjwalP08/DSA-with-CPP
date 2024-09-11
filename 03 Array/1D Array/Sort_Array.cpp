#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Method 1
void sortUsingSwap(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[right] == 1)
        {
            right--;
        }
        else if (arr[left] == 0)
        {
            left++;
        }
        else
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    cout << endl;
    cout << "Array Before Sort" << endl;
    printArray(arr, size);

    cout << endl;
    cout << endl;
    cout << "Array Before Sort" << endl;
    sortUsingSwap(arr, size);
    cout << endl;
    // sortUsingCount(arr, size);
    return 0;
}