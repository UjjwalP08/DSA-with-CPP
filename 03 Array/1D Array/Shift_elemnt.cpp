#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

//  Left Side Shifting
void leftShift(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < (size - 1); i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
    printArray(arr, size);
}
//  Right Side Shifting
void rightShift(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    printArray(arr, size);
}
int main()
{
    int arr[] = {
        1, 2, 5, 76, 34, 23, -102, 45, 23, -200};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    cout << "Original Array" << endl;
    printArray(arr, size);
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Right Side Shift of Element" << endl;
    rightShift(arr, size);
    cout << endl;
    cout << endl;

    cout << endl;
    cout << "Left Side Shift of Element" << endl;
    leftShift(arr, size);
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}