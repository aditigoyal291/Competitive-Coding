#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

class info
{
public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(Node *root, int &ans)
{
    // base case
    if (root == NULL)
    {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);
    info currentNode;
    currentNode.size = left.size + right.size + 1;
    currentNode.maxi = max(root->data, right.maxi);
    currentNode.mini = min(root->data, right.mini);

    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
    {
        currentNode.isBST=true;
    }
    else currentNode.isBST=false;

    //answer update
    if(currentNode.isBST)
    {
        ans=max(ans,currentNode.size);
    }
    return currentNode;
}

int largestBST(Node *root)
{
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}
int main()
{

    return 0;
}