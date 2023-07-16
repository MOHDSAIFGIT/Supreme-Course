#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    cout<<"\nEnter the elemrnt of array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<< "\nThe given array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}