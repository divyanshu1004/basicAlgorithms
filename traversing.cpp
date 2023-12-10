#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this-> data=data;
        this->next =NULL;
    }
};
void insertAtHead(Node* &head, int d){
    Node* temp =new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}
// void INsertatPosition(int pos, int d)
// void print(){
//     cout<<"printing the list"<<endl;
//     while (head!= NULL ) {
//         cout<<head -> data <<" ";
//         head =  head-> next ;
//         }
//         cout << endl;
// }
void printl(Node* &head){
    Node* temp = head;
    cout<<"Printing the list"<<endl;
    while (temp != NULL ){
        cout<<head-> data<<" ";
        head=head->next;
    }
}
int main(){
    Node* node1=new Node(80);
    Node* node2= new Node(32);
    node1->next=node2;
    Node* head=node1;
    
    cout<<endl;
    insertAtHead(head,42);
    
    insertAtHead(head,19);
    insertAtHead(head,15);
    printl(head);
    return 0;
}