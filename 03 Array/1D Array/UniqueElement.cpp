#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int size)
{
    int ele = 0;
    for (int i = 0; i < size; i++)
    {
        ele = ele ^ arr[i];
    }

    return ele;
}
int main()
{
    int arr[] = {2, 10, 11, 11, 2, 13, 15, 13, 15, 10, 1};
    int size = sizeof(arr) / sizeof(int);
    int ele = findUniqueElement(arr, size);
    cout << endl;
    if (ele == 0)
    {
        cout << "No Unique Element exist in array" << endl;
        cout << endl;
    }
    else
    {
        cout << "Unique element is " << ele << endl;
        cout << endl;
    }

    return 0;
}