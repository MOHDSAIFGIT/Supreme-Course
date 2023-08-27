#include<iostream>
using namespace std;
    
void printDigits(int n){
    //base case
    if(n==0){
        return;
    }

    //solve 1 case 
    int digits = n%10;
    
    //baaki recursion sambhal lega

    printDigits(n/10);

    cout<<digits<<" "<<endl;
}

int main(){

    int n = 647;

    printDigits(n);

    return 0;
}