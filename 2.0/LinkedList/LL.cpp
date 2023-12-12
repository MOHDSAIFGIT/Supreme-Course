#include<iostream>

using namespace std ;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            cout<<"i am inside default constructor"<<endl; 
            this-> next = NULL;
        }

        Node(int data){
            cout<<"Inside the param constructor"<<endl;
            this-> data = data;
            this->next = NULL;
        }
};

int main(){

    // creation of node
    // Node a;

    // Node* head = new Node();

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);


    return 0;
}