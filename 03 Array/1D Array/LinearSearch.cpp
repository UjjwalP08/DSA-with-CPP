#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int ele;
    cout << "Enter a Element: ";
    cin >> ele;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 4, 3, 10};
    int size = sizeof(arr) / sizeof(int);
    int isExist = linearSearch(arr, size, ele);

    isExist ? cout << "Element is exist in array" : cout << "Element is does not exist in array";

    return 0;
}