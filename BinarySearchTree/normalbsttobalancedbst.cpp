//tc:o(n)


#include<iostream>
#include<vector>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

}
 
void inorder(Node* root, vector<int>&in)
{
    if(root==NULL) return;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

Node* inordertoBST(int s,int e,vector<int> inorderval)
{
    //base case
    if(s>e) return NULL;
    inorder(root,inorderval);
    int mid=(s+e)/2;
    Node* root=new Node(in[mid]);
    root->left=inordertoBST(s,mid-1,in);
    root->right=inordertoBST(mid+1,e,in);
    return root;
}

Node *balancedBST(Node* root)
{
    vector<int> inorderval;
    inorder(root,inorderval);
    return inordertoBST(0,inorderval.size()-1,inorderval);

}


int main()
{
    
    return 0;
}