#include<iostream>
#include<vector>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

}

void inorder(Node* root,vector<int> &in)
{
    if(root==NULL) return;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

Node* flatten(Node* root)
{
    vector<int> inorderval;
    inorder(root,inorderval);
    Node* newRoot=new Node(inorderval[0]);
    Node* curr=newRoot;
    for(int i=1;i<n;i++)
    {
        Node* temp=new Node(inorderval[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }

    curr->left=NULL;
    curr->right=NULL; 
}
int main()
{
    
    return 0;
}