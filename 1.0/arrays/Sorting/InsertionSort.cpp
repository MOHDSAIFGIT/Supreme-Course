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

    // for (int i = 1; i < n; i++)
    // {

    //     int current = arr[i];
    //     int j = i - 1;

    //     while (arr[j] > current && j>=0)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = current;
    // }

    // using for loop (Love Babbar)

    for(int round = 1 ; round<n;round++){
        // Step A : Fetch
        int val = arr[round];

        int j = round-1 ;
        // Step B : Compare
        for(; j>=0;j--){
            if(arr[j]>val){
                //Step C : shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        //Step D : Copy
        arr[j+1] = val;
    }

    cout << "The sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}