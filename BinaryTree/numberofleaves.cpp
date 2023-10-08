#include <iostream>
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

void inorder(Node *root, int &count)
{
    if (root == NULL)
        return;
    inorder(root->left, count);
    // cout << root->data << " ";
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inorder(root->right, count);
}

int noOfleaves(Node *root)
{
    int count = 0;
    inorder(root, count);
    return count;
}
int main()
{

    return 0;
}