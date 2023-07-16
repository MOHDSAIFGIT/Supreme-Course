#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int n = 5;
    int Max = INT_MIN;
    int arr[n] = {-4,-3,-6,-3,-22};

    for(int i=0;i<n;i++){

        if(arr[i]>Max){
            Max = arr[i];
            
        }
    
    }
    cout<<"The Greatest element of the array is :"<<Max;
    return 0;
}