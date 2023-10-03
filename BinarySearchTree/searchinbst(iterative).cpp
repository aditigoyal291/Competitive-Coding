#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

bool searchinBST(Node* root,int x)
{
    Node* temp=root;
    while(root!=NULL)
    {
        if(root->data==x)
        {
            return true;
        }
        if(temp->data>x)
        {
            temp=temp->left;
        }
        if(temp->data<x)
        {
            temp=temp->right;
        }
    }
    return false;
}
int main()
{
    
    return 0;
}