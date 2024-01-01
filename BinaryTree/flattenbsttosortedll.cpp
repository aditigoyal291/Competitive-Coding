// bst inorder sorted
// store inorder in an vector in terms of node
// o(n)
// tc:(o(n))
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

Node *flatten(Node *&root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);
    Node *newRoot = new Node(inorderVal[0]);
    Node *curr = newRoot;
    for (int i = 1; i < inorderVal.size(); i++)
    {
        Node *temp = new Node(inorderVal[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;
    return newRoot;
}

int main()
{

    return 0;
}