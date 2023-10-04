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

void inorder(Node* root,vector<int> &in)
{
    if(root==NULL) return;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

bool twoSums(Node* root,int target)
{
    vector<int> inorderVal;
    //store inorder->sorted values
    inorder(root,inorderVal);
    //use 2 pointer approach to check if the pair exists
    int i=0;
    j=inorderVal.size()-1;
    while(i<j)
    {
        int sum=inorderVal[i]+inorderVal[j];
        if(sum==target) return true;
        else if(sum>target) j--;
        else i++;
    }
    return false;
}
int main()
{
    
    return 0;
}