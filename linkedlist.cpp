#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
};
void traversal(struct Node* ptr){
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<"-------------------------------------------------"<<endl;
}

struct Node* insertatstart(struct Node* head,int data){
    struct Node* ptr= new Node();
    ptr->data = data;
    ptr->next = head;
    return ptr;
    
}
struct Node* insertatlast(struct Node* head,int data){
    
    struct Node* ptr= new Node();
    struct Node* p= head;
    if (head==NULL) {
        ptr->data = data;
        ptr->next = NULL;
        return ptr;
        }
    else{
        while(p->next != NULL){
            p=p->next;
        }
        p->next=ptr;
        ptr->next=NULL;
        ptr->data = data;
        return head;
    }
    
}
 struct Node* insetatbetween(struct Node* head,int data, int index){
     struct Node* ptr=new Node();
     struct Node* p = head;

     if (index==0){
         ptr=insertatstart(head,data);
     }
     else {
         for(int i=0;p!=NULL && i<index-1 ;i++){ // Change here
             p=p->next;
         }
         ptr->next=p->next;
         ptr->data=data;
         p->next=ptr;
     }
     return head;
 }
 
 struct Node* deleteHead(struct Node* head){

    struct Node *ptr = head;
    head=head->next;
    free(ptr);
    return head;
 }
 
 struct Node* deleteatindex(struct Node* head, int index){
    struct Node *ptr = head;
    struct Node* q=head->next;
    for()


 }
int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third= new Node();
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data =30;
    third->next = NULL;

    head=insertatstart(head,1);

    insetatbetween(head,25,2);

    insertatlast(head,35);
    traversal(head);
    head = deleteHead(head);  // Update head
    traversal(head);

    return 0;
}
