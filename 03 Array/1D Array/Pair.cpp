#include <iostream>
using namespace std;

void elementPair(int arr[], int size, int target)
{
    int ans[2];
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}
int main()
{
    int arr[] = {40, 20, 30, 10};
    int size = sizeof(arr) / sizeof(int);
    elementPair(arr, size, 50);

    return 0;
}