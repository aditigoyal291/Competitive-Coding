#include<iostream>
#include<vector>
#include<map>
#include<queue>
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

void solve(Node* root,vector<int> &ans,int level)
{
    if(root==NULL) return;
    if(level==ans.size())
    {
        ans.push_back(root->data);
    }
    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);

}

vector<int> rightView(Node* root)
{
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}

int main()
{
    
    return 0;
}