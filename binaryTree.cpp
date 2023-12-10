#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class binaryTree{
    public:
    static int idx;
    Node* buildTree(int nodes[]){
        idx++;
        if(nodes[idx]==-1){
            return NULL;
        }
        Node* newNode = new Node(nodes[idx]);
        newNode->left = buildTree(nodes);
        newNode->right = buildTree(nodes);
        return newNode;
    }
};
int binaryTree::idx= -1;
int main()
{
    int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    binaryTree tree;
    Node* root=tree.buildTree(nodes);
    cout<<root->data;
    return 0;
}