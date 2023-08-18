#include <iostream>
using namespace std;

void print (int arr[],int n , int i){
    //base case
    if(i>=n)
        return ;

    cout<<arr[i];
    print(arr,n,i+1);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int i = 0;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array are : "<<endl;
    print(arr,n,i);
    return 0;
}