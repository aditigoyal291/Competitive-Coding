//tc:o(n) -recursive
//tc:o(1) - iterative
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


Node* LCAinBST(Node* root,Node* p,Node* q)
{
    //recursive sol
    //base case
    // if(root==NULL)
    // {
    //     return NULL;
    // }
    // if(root->data<p->data && root->data<q->data) return LCAinBST(root->right,p,q);
    // if(root->data>p->data && root->data>q->data) return LCAinBST(root->left,p,q);
    // return root;

    //iterative sol (more optimal)

    while(root!=NULL)
    {
        if(root->data<p->data && root->data<q->data)
            root=root->right;
        else if(root->data>p->data && root->data>q->data)
            root=root->left;
        else return root;

    }

}
int main()
{
    
    return 0;
}