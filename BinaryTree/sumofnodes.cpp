#include<iostream>

//tc:o(n)
//sc:o(n)
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL; 
    }
};

void solve(Node* root,int sum,int &maxSum,int len,int &maxLen)
{
    //base case
    if(root==NULL)
    {
        if(len>maxLen)
        {
            maxLen=len;
            maxSum=sum;
        }
        else if(len==maxLen)
        {
            maxSum=max(sum,maxSum);
        }
        return;
    }

    sum=sum+root->data;
    solve(root->left,sum,maxSum,len,maxLen);
    solve(root->right,sum,maxSum,len,maxLen);
 

}
int sumTree(Node* root)
{
    int len=0;
    int maxLen=0;
    int sum=0;
    int maxSum=INT_MIN;
    solve(root,sum,maxSum,len,maxLen);
    return maxSum;
}
int main()
{
    
    return 0;
}