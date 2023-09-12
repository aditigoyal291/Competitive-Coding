#include<iostream>
using namespace std;
//tc: o(n^2)
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

pair<bool,int> isBalancedFast(Node* root)
{
    if(root==NULL) 
   { pair<bool,int> p=make_pair(true,0);
    return p;}
    pair<bool,int> left=isBalancedFast(root->left);
    pair<bool,int> right=isBalancedFast(root->right);

    bool leftAns=left.first;
    bool rightAns=right.first;

    bool diff=abs(left.second-right.second)<=1;
    pair<bool,int> ans;
    ans.second=max(left.second,right.second)+1;
    if(leftAns && rightAns && diff)
    {
        ans.first=true;
    }
    else ans.first=false;
    return ans;




}

int height(Node* root)
{
    if(root==NULL) return 0;
    else{
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;
    }
}
bool isBalanced(Node* root)
{
    // if(root==NULL) return true;
    // bool left=isBalanced(root->left);
    // bool right=isBalanced(root->right);
    // bool diff=abs(height(root->left)-height(root->right))<=1;
    // if(left && right && diff) return true;
    // else return false;

    return isBalancedFast   (root).first;


}
int main()
{
    
    return 0;
}