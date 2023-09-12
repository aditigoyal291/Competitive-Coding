//complexity- O(n^2)

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
//to return two things at a time
pair<int,int> diameterFast(Node* root)
{
    if(root==NULL)
    {
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterFast(root->left);
    pair<int,int> right=diameterFast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;

}

int height(Node* root)
{
    if(root==NULL) return 0;
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
int diameter(Node* root)
{
    // if(root==NULL) return 0;
    // int op1=diameter(root->left);
    // int op2=diameter(root->right);
    // int op3=height(root->left)+height(root->right)+1;
    // int ans=max(op1,max(op2,op3));

    return diameterFast(root).first;

}
int main()
{
    
    return 0;
}