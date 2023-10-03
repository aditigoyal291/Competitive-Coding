#include<iostream>
using namespace std;
//tc::o(logn)
//sc:o(n)

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


bool searchInBST(Node *root,int data)
{
    //base case
    if(root==NULL) return false;
    if(root->data==data) return true;
    if(root->data>data)
    {
        return searchInBST(root->left,data);
    }
    if(root->data<data)
    {
        return searchInBST(root->right,data);
    }


}

int main()
{
    
    return 0;
}