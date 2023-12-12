#include<iostream>
#include<vector>
using namespace std ;

int binarySearch(vector<int>arr,int s,int e,int key){

    //base case
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==key){
        return mid;
    }

    // 1 case solve krna h
    //arr[mid]<key -> right m search
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    // arr[mid]>key -> left m search
    else{
        return binarySearch(arr,s,mid-1,key);
        }

}

int main(){

    vector<int>v{10,20,40,60,70,90,99};
    int target = 99;

    int n = v.size();
    int s = 0;
    int e = n-1;
    int ans = binarySearch(v,s,e,target);

    cout<<"Answer is "<<ans<<endl;

    return 0;
}