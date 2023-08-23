#include <iostream>
using namespace std;

void print(int arr[], int n, int i)
{
    // base case
    if (i >= n)
        return;
    //ek case solve krdiya
    cout << arr[i] << " ";

    //baaki recursion sambhal lega
    print(arr, n, i + 1);
}

int main()
{
    cout << "Enter the size of array: ";
    // cin >> n;
    int i = 0;
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array are : " << endl;
    print(arr, n, i);
    return 0;
}