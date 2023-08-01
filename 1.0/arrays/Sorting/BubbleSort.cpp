#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Write the size array : ";
    cin >> n;
    int arr[n], UI;

    cout << "Write the values of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> UI;
        arr[i] = UI;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}