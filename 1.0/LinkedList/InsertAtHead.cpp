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


void insertAtHead(Node * &head , int data){

    // step 1 : Create a Node 
    Node* newNode = new Node(data);
    //Step 2 : NewNode-> next = head
    newNode -> next = head;
    //Step 3 : head = newNode
    head = newNode;
}

int main(){

    Node* head = new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,50);
    insertAtHead(head,60);
    insertAtHead(head,90);

    print(head);
    return 0;
}