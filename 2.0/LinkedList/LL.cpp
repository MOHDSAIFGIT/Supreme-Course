#include<iostream>

using namespace std ;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            // cout<<"i am inside default constructor"<<endl; 
            this-> next = NULL;
        }

        Node(int data){
            // cout<<"Inside the param constructor"<<endl;
            this-> data = data;
            this->next = NULL;
        }
};

 void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
 }

 int getLength(Node* head){
    Node* temp = head ;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
 }

void insertAtHead(Node* &head,Node* tail,int data){

    if(head == NULL){
        //empty LL

        //step 1: create new node
        Node* newNode = new Node(data);

        //step 2: update head
        head = newNode;
        tail = newNode;
    }
    else{
        //non-empty LL
        // create a new Node
        Node* newNode = new Node(data);
        //attach new node to head node 
        newNode -> next = head;
        //update head
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail,int data){
    if(head == NULL){
        //empty LL

        //step 1: create new node
        Node* newNode = new Node(data);

        //step 2: update head
        head = newNode;
        tail = newNode;
    }

    else{
        //non empty LL

        //step 1: create new Node
        Node* newNode = new Node(data);
        //step 2 : tail node ko attach kro new node se
        tail->next = newNode;
        //step 3: update tail
        tail = newNode;
    }
}

void insertAtMiddle(Node* &head,Node* &tail,int data , int position){
if(position < 1){
    cout << "cannot insert, please enter a valid position"<<endl;
    return;
}

int length = getLength(head);
if(position > length){
    cout << "cannot insert, please enter a valid position"<<endl;
    return;
}

if(position == 1){
    insertAtHead(head,tail,data);
}
else if(position == length +1){
    insertAtHead(head,tail,data);
}
else{
    // insert at middle
    // step1 : create a node
    Node* newNode = new Node(data);
    //step2:traverse prev / curr to position
    Node* prev = NULL;
    Node* curr = head;
    while(position != 1){
        prev = curr;
        curr = curr->next;
        position--;
    }
    // step 3: attach prev to new node
    prev -> next = newNode;
    // step 4: attach new node to current 
    newNode -> next = curr;
}
}

int main(){

    // creation of node
    // Node a;

    // Node* head = new Node();

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* tail = fifth;

//Cretaing the linked list by connecting all nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;


    Node * head = first;
    cout<<"Printing ka entire array"<<endl;
    printLL(head);
    // cout<<"Length of the linked list is : "<<getLength(head)<<endl;

    //Tail
    insertAtTail(head,tail,500);
    printLL(head);

    // MIDDLE
    insertAtMiddle(head,tail,1000,4);
    printLL(head);
    return 0;
}