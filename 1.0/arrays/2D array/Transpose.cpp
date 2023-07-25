#include <iostream>
#include <limits.h>
using namespace std;

void Transpose(int arr[][3], int rows, int cols)
{
    // cout << "Printing  : " << endl;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

}

void printArray(int arr[][3], int rows , int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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

    cout<<"Printing Array :"<<endl;
    printArray(arr,rows,cols);
    cout<<"After Transpose :"<<endl;
    Transpose(arr, rows, cols);
    cout<<"Printing Array : "<<endl;
    printArray(arr,rows,cols);

    return 0;
}