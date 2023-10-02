//left of each node should be null
//print in preorder traversal

//tc:o(n)
//sc:o(1)
#include<iostream>  
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void flatten(Node* root)
{
    Node* curr=root;
    while(curr!=NULL)
    {
        if(curr->left)
        {
            Node* pred=curr->left;
            while(pred->right)
            {
                pred=pred->right;
            }
            pred->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;
        }   
        curr=curr->right;
    }
    curr=root;
    // while(curr!=NULL)
    // {
    //     curr->left=NULL;
    //     curr=curr->right;
    // }

}
int main()
{
    
    return 0;
}