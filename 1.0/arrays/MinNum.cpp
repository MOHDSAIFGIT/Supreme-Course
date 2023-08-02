#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int n = 5;
    int Min = INT_MAX;
    int arr[n] = {-4, -33, -6, -3, -22};

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    cout << "The Greatest element of the array is :" << Min;
    return 0;
}