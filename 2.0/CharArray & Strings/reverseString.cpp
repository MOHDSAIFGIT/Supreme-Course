#include <iostream>
#include<string.h>

using namespace std;

string reverseString(string s,int size){

    int start = 0;
    int end = size -1;

    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}

int main(){

    char ch[100];

    cin>>ch;
    int len = strlen(ch);
    cout<<"Before : "<<ch<<endl;
    cout <<"After : " <<reverseString(ch,len);


    return 0;
}