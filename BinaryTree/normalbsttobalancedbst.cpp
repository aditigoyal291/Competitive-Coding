// inorder sorted
// then inorder se bst
//reference lene se time limit exceeded hatt jata hai 

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
    if (root == NULL)
        return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

Node *inordertoBST(int s, int e, vector<int> &inorderVal)
{
    // base case

    if (s > e)
        return NULL;
    int mid = (s + e) / 2;
    Node *root = new Node(inorderVal[mid]);
    root->left = inordertoBST(s, mid - 1, inorderVal);
    root->right = inordertoBST(mid + 1, e, inorderVal);
    return inordertoBST(0, inorderVal.size() - 1, inorderVal); 
}

Node *balancedBST(Node *root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);
}

int main()
{

    return 0;
}