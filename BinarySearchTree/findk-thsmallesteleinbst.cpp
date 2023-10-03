//use morris

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

int solve(Node* root,int &i, int k)
{
    //base case 
    if(root==NULL) return -1;
    int left=solve(root->left,i,k);
    if(left!=-1) return left;
    i++;
    if(i==k)
    {
        return root->data;
    }
    return solve(root->right,i,k);
}

int kthSmallestEle(Node* root, int k)
{
    int i=0;
    int ans=solve(root,i,k);
    return ans;
}

int main()
{
    
    return 0;
}