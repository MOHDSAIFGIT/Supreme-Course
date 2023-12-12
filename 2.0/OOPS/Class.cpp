#include<iostream>
#include<string>
#include<vector>

using namespace std ;

class Student{
    int id;
    int age ;
    string name;
    int nos;

    void study(){
        cout<< "studing"<<endl;
    }

    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk (){
        cout<<"bunking"<<endl;
    }
};

int main(){
    Student s1;
    Student s2;

    
    return 0;
}