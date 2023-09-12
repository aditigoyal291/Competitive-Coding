#include<iostream>
using namespace std;
// tc:o(n) and sc:0(height)
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

pair<bool,int> isSumtree(Node* root)
{
    if(root==NULL) 
    {
        pair <bool,int> p=make_pair(true,0);
        return p;
    }

    if(root->left==NULL && root->right==NULL)
    {
        pair <bool,int> p=make_pair(true,0);
        return p;
    }

    pair<bool,int> leftAns=isSumtree(root->left);
    pair<bool,int> rightAns=isSumtree(root->right);
    bool left=leftAns.first;
    bool right=rightAns.first;
    bool cond=root->data==leftAns.second+rightAns.second;

    pair<bool,int> ans;
    if(left && right && cond)
    {
        ans.first=true;
        ans.second=root->data+leftAns.second+rightAns.second;

    }
    else ans.first=false;
    return ans;
}

bool isSum(Node* root)
{
    return isSumtree(root).first;
}
int main()
{
    
    return 0;
}