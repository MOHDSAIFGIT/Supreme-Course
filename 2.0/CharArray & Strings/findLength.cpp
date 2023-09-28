#include <iostream>
using namespace std;


int findLength(string ch, int size){

    int length = 0;

    for(int i = 0; i<size; i++){

        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return (length);
}
int main(){

    char ch[100];
    cin >> ch;

    int len = findLength(ch,100);

    cout<< "Length is :"<<len ;
    return 0;

}