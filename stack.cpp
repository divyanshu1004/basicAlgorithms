#include<iostream>
using namespace std;
class Stack{
private:    
    int top;
    int arr[5];
public:
    Stack(){
        top=-1;
    }
    bool isFull(){
        if(top==4){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    push(int val){
        if(isFull()){
            cout<<"Stack overflow!"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    pop(){
        if(isEmpty()){
            cout<<"stack underflow!"<<endl;
        }
        else{
            int popval= arr[top];
            arr[top]=0;
            top--;
            return popval;
        }
    }
    int topElement(){
        return arr[top];
    }
};
int main(){
    Stack mystack;
    mystack.push(21);
    mystack.push(32);
    mystack.push(78);
    cout<<"Top element: "<<mystack.topElement()<<endl;
    cout<<mystack.pop();
    cout<<"Top element after pop(): "<<mystack.topElement()<<endl;
    return 0;
}