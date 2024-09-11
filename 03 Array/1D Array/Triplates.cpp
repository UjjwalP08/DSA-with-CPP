#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void elementTriplets(int arr[], int size)
{
    int ans[2];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; j < size; j++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
            }
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 50};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    cout << "Triplets of the given Array is " << endl;
    elementTriplets(arr, size);
    cout << endl;
    cout << endl;

    return 0;
}