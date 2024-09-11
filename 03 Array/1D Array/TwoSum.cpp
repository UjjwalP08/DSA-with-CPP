#include <iostream>
using namespace std;

void elementPair(int arr[], int size, int target)
{
    int ans[2];
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // cout << arr[i] << "," << arr[j] << endl;
            if (arr[i] + arr[j] == target)
            {
                ans[0] = i;
                ans[1] = j;
                cout << i << j << endl;
                break;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[3] = {10, 20, 30};
    int size = 3;
    cout << endl;
    cout << "Triplets of the Array is " << endl;
    elementPair(arr, size, 50);

    return 0;
}