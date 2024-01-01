// solve in o(n)
// single traversal
// bst inorder is sorted
// tc:o(n)
// sc:o(n)

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *&root, vector<int> &in)
{
    if (root = NULL)
        return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
   
}

bool twoSumInBST(Node *&root, int target)
{
    vector<int> inorderVal;
    //store inorder 
    inorder(root,inorderVal);
    //use 2pointer appr to check if pair exist
    int i=0,j=inorderVal.size()-1;
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