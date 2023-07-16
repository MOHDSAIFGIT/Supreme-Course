#include<iostream>
using namespace std;

int main()
{

    int numZero = 0,n=13,numOne = 0;
    int arr[n]={0,1,1,1,0,0,0,0,1,0,1,0,1};
    
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            numOne++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            numZero++;
        }
    }

    cout<<"The total zeros are : "<<numZero<<endl;
    cout<<"The total Ones are : "<<numOne<<endl;
    return 0;

}