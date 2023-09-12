#include<iostream>
#include<vector>
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

void traverseLeft(Node* root,vector<int> &ans)
{
    if((root->left=NULL) || (root->left==NULL && root->right==NULL)) return;

    ans.push_back(root->data);
    if(root->left) traverseLeft(root->left,ans);
    else traverseLeft(root->right,ans);
}

void traverseLeaf(Node* root,vector<int>&ans)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) 
    {
        ans.push_back(root->data);
        return;
    }

    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);

}

void traverseRight(Node* root,vector<int> &ans)
{
    if((root->left=NULL) || (root->left==NULL && root->right==NULL)) return;

    if(root->right) traverseRight(root->right,ans);
    else traverseLeft(root->left,ans);
    ans.push_back(root->data);


}

vector<int> boundary(Node* root)
{
    vector<int> ans;
    if(root==NULL) return ans;
    ans.push_back(root->data);
    traverseLeft(root->left,ans);
    traverseRight(root->right,ans);
    return ans;
}

int main()
{
    
    return 0;
}