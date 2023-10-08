#include <iostream>
#include <map>
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
        this->left = NULL;
        this->right = NULL;
    }
};
void createMapping(int in[], int post[], map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
}
Node *solve(int in[], int post[], int index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
{
    // base case
    if (index < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }
    int element = post[index--];
    Node *root = new Node(element);
    int position = nodeToIndex[element];
    // int position = findPosition(in, element, n);
    root->right = solve(in, post, index, position + 1, inorderEnd, n, nodeToIndex);
    root->left = solve(in, post, index, inorderStart, position - 1, n, nodeToIndex);
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    int postOrderIndex = n - 1;
    map<int, int> nodeToIndex;
    createMapping(in, post, nodeToIndex, n);
    Node *ans = solve(in, post, postOrderIndex, 0, n - 1, n, nodeToIndex);
    return ans;
}
int main()
{

    return 0;
}