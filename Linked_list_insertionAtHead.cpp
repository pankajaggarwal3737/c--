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

void insertAtHead(Node* &head,int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;        // jo new node bni h vo point kr rhi h head ko
    head = temp;                // ab jo new node bni h usse as a head assign kr dia
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
    print(head);
     
    insertAtHead(head,12);

    print(head);



}