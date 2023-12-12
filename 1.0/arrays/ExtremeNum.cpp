#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};

    int start = 0;
    int end = n - 1;

    while (start<=end)
    {
        if (start > end)
            break;

        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {

            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }

    return 0;
}