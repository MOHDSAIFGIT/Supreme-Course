#include<iostream>
#include<vector>
#include<limits.h>

using namespace std ;

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9,10};
    vector<int>ans;
    int sum = 18;

    for(int i=0;i<arr.size();i++){
        int ele = arr[i];
        for(int j=i+1;j<arr.size();j++){

            if(arr[i]+arr[j]== sum){
                // arr[j]=INT_MIN;
                cout<< "pair found "<< ele << ","<<arr[j]<<endl;
            }
            
        }
    }

    
}