#include<iostream>
#include<map>
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

void createMapping(int in[],map<int,int> &nodeToIndex,int n)
{
    for(int i=0;i<n;i++)
    {
        nodeToIndex[in[i]]=i;
    }
}

Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n,map<int,int> &nodeToIndex)
{
    //base case
    if(index<0 ||inorderStart>inorderEnd) return NULL;
    int ele=post[index--];
    Node* root=new Node(ele);
    int pos=nodeToIndex[ele];
    root->right=solve(in,post,index,pos+1,inorderEnd,n,nodeToIndex);
    root->left=solve(in,post,index,inorderStart,pos-1,n,nodeToIndex);


}
Node* buildTree(int in[],int post[],int n)
{
    int postOrderIndex=n-1;
    map<int,int> nodeToindex;
    createMapping(in,nodeToindex,n);
    Node* ans=solve(in,post,postOrderIndex,0,n-1,n,nodeToindex);
}
int main()
{
    
    return 0;
}