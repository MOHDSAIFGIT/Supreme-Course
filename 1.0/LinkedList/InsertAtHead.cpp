#include <iostream>
using namespace std ;


class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


void insertAtHead(Node * &head ,Node* &tail, int data){
     
    // step 1 : Create a Node 
    Node* newNode = new Node(data);
    //Step 2 : NewNode-> next = head
    newNode -> next = head;
    //Step 3 : head = newNode
    //first node
    if(head == NULL){
        tail = newNode;
    }
    head = newNode;
}

void insertAtTail(Node * &head,Node* &tail , int data){
    //step 1: Create the Node
    Node* newNode = new Node(data);

    //step 2: Connect with tail node
    if(tail==NULL){
        tail = newNode;
    }
    else{
        tail->next = newNode;
        head = newNode;
    }
    
    //step 3: update tail

    if(head == NULL){
        head = newNode; 
    }
    tail = newNode;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,50);
    // insertAtHead(head,tail,60);
    // insertAtHead(head,tail,90);
    insertAtTail(head,tail,77);

    print(head);
    return 0;
}