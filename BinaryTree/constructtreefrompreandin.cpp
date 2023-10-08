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
void createMapping(int in[], int pre[], map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
}
// int findPosition(int in[], int element, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (in[i] == element)
//             return i;
//     }
//     return -1;
// }

Node *solve(int in[], int pre[], int index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
{
    // base case
    if (index >= n || inorderStart > inorderEnd)
    {
        return NULL;
    }
    int element = pre[index++];
    Node *root = new Node(element);
    int position = nodeToIndex[element];
    // int position = findPosition(in, element, n);
    root->left = solve(in, pre, index, inorderStart, position - 1, n, nodeToIndex);
    root->right = solve(in, pre, index, position + 1, inorderEnd, n, nodeToIndex);
    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preOrderIndex = 0;
    map<int, int> nodeToIndex;
    createMapping(in, pre, nodeToIndex, n);
    Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n, nodeToIndex);
    return ans;
}
int main()
{

    return 0;
}