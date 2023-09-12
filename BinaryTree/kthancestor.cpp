#include<iostream>
#include<vector> 
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




Node* solve(Node* root,int &k,int node)
{
    //base case
    if(root==NULL) return NULL;
    if(root->data==node) return root;
    Node* leftAns=solve(root->left,k,node);
    Node* rightAns=solve(root->right,k,node);
    //wapis
    if(leftAns!=NULL && rightAns==NULL)
    {
        k--;
        if(k<=0)
        {
            //anslock
            k=INT_MAX;
            return root;
        }
        return leftAns; 
    }
    if(leftAns==NULL && rightAns!=NULL)
    {
        k--;
        if(k<=0)
        {
            k=INT_MAX;
            return root;
        }
        return rightAns;
    }
    return NULL;

}
int kthancestor(Node* root,int k,int node)
{
    Node* ans=solve(root,k,node);
    if(ans==NULL) return -1;
    else return ans->data;
}

int main()
{
    
    return 0;
}