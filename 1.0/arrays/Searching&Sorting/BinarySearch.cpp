#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;    this is wromg method to find mid (interger overflow issue occur)
    int mid = start + (end-start)/2;

    while(start<=end){
        int ele = arr[mid];

        if(ele ==key){
            return mid;
        }
        else if(key<ele){
            end = mid-1;
        }
        else{
            start = mid +1;
        }

        mid = (start+end)/2;
    }

    //element not found 
    return -1;

}

int main(){

    int arr[]={2,4,6,8,10,12,16};
    int size=7;
    int key=2;

    int indexOftarget = binarySearch(arr,size,key);

    if(indexOftarget == -1){
        cout<<"key not found";
    }
    else{
        cout<<"key found at "<<indexOftarget<<" index"<< endl;
    }
    return 0;
}