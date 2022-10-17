#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data= data; 
        this->next= NULL;  
    }
};


void insertAtTail(Node* &Tail,int d){
    // new node create
    Node* temp = new Node(d);
    Tail->next=temp;        // jo initially tail(last) node thi usse ab jo node(as a tail) add hui h last me uska address point krwa dia usse
    Tail = temp;                // ab jo new node bni h usse as a Tail assign kr dia
}

void insertAtHead(Node* &head,int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;        // jo new node bni h vo point kr rhi h head ko
    head = temp;                // ab jo new node bni h usse as a head assign kr dia
}


void insertAtPosition(Node* &tail,Node* &head,int position , int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count = 1;

    while (count < position-1){
        temp = temp -> next;
        count++;
    }

    //inserting at last position:-

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d:-
    Node* nodeToInsert = new Node(d);   
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;


}




void print(Node* &head){                // now this is to print the linked list
    Node* temp =head;                   //printing current node and then moving to next node and then printing that
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

int main(){

    //created a new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;


    //head pointed to node1 
    Node* head = node1;
    Node*Tail = node1;
    print(head);
     
    insertAtTail(Tail,12); 

    print(head);

    insertAtTail(Tail,15);

    print(head);
    insertAtPosition(Tail,head,1,22);
    print(head);

    cout<< head-> data <<" "<<Tail-> data;    // to print the head and tail of final linked list! 
    
}