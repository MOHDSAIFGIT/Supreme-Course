#include <iostream>
#include<limits.h>
using namespace std;

void printMax(int arr[][3], int rows, int cols)
{
    int Max = INT_MIN;
    cout << "Printing row-wise Sum : " << endl;
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]>Max){
                Max = arr[i][j];
            }
        }
        
    }
    cout<< "Maximum is : "<<Max;
}

int main()
{

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // row wise input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "printing row wise " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printMax(arr, rows, cols);

    return 0;
}