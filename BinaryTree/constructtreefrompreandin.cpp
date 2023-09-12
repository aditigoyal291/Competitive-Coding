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

// int findPosition(int in[],int element,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(in[i]==element) return i;

//     }
//     return -1;
// }

void createMapping(int in[],map<int,int> &nodeToIndex,int n)
{
    for(int i=0;i<n;i++)
    {
        nodeToIndex[in[i]]=i;
    }
}

Node* solve(int in[],int pre[],int &index,int inOrderStart,int inOrderEnd,int n,map<int,int> &nodeToIndex)
{
    //base case
    if(index>=n || inOrderStart>inOrderEnd)
    {
        return NULL;
    }
    int ele=pre[index++];
    Node* root=new Node(ele);
    int pos=nodeToIndex[ele];
    // int pos=findPosition(in,ele,n);
    root->left=solve(in,pre,index,inOrderStart,pos-1,n,nodeToIndex);
    root->right=solve(in,pre,index,pos+1,inOrderEnd,n,nodeToIndex);
    return root;
}
Node* buildTree(int in[],int pre[],int n)
{
    int preOrderIndex=0;
    map<int,int> nodeToIndex;
    createMapping(in,nodeToIndex,n);
    Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);//0 is the starting index of preorder and it will go till n-1 where n is the position of root node
    return ans;
}
int main()
{
    

    return 0;
}