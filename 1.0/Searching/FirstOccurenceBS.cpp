#include<iostream>
#include<vector>

using namespace std ;

int firstOccurence(vector<int> v, int target){
    int s = 0;
    int e = v.size() - 1;

    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(v[mid] == target){
            //answer store and move left
            ans = mid;
            e = mid -1;
        }
        else if(target > v[mid]){
            //move right side
            s = mid+1;
        }
        else if(target < v[mid]){
            //move left side
            e = mid -1;
        }

        mid = (s+e)/2;
    }
    return ans;
}

int main (){

    vector<int> v{1,3,4,4,4,4,6,7};
    int target = 4;
    int indexOfFirstOcc = firstOccurence(v,target);

    cout<<" ans is : "<<indexOfFirstOcc <<endl;

    return 0;
}