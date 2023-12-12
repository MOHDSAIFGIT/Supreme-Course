#include <iostream>
#include<limits.h>
using namespace std ;

void findMax(int arr[],int n , int i, int& max){

    //base case 
    if(i>=n){
        return;
    }

    if(arr[i]>max){
        max = arr[i];
    }

    findMax(arr,n,i+1,max);
}

int main(){
    int arr[]={10,30,21,44,32,17,19,66};
    int n = 8;

    int max = INT_MIN;
    int i = 0;
    findMax(arr,n,i,max);

    cout<<"Max number is :"<<max<<endl;



    return 0;
}