// Doublly Linked List

#include <iostream>
using namespace std ;

class Node{
    public:
        int data ;
        Node* prev ;
        Node* next ;

        Node(){
            this->prev = NULL;
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
}; 

void print(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    // LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        
    }
    else{
        //LL is not empty
        Node* newNode = new Node(data);
        newNode -> next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    // LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else{
        //LL is not empty
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int data, int pos){
    // LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        int len = findLength(head);
        if(pos==1){
            insertAtHead(head,tail,data);
        }
        else if(pos==len+1){
            insertAtTail(head,tail,data);
        }
        else{
            //insert at middle
            Node* newNode = new Node(data);
            //step 2: set prev and curr pointer
            Node* prevNode = NULL;
            Node* currNode = head;
            while(pos != 1){
                pos--;
                prevNode = currNode;
                currNode = currNode->next ;
            }
            //step 3: pointer updates
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

void deleteNode(Node* head, Node* tail){
    
}

int main(){

    Node* head = 0;
    Node* tail = 0;
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);

    print(head);
    cout<<endl;
    // insertAtTail(head,tail,1000);
    insertAtPosition(head,tail,1000,5);
    print(head);
    return 0;
}