// tc:o(n)
// sc:o(h)
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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

pair<int, int> diameterfast(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameterfast(root->left);
    pair<int, int> right = diameterfast(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
int diameter(Node *root)
{
    // o(n^2)
    //  if (root == NULL)
    //      return 0;
    //  int op1 = diameter(root->left);
    //  int op2 = diameter(root->right);
    //  int op3 = height(root->left) + height(root->right) + 1;
    //  int ans = max(op1, op2, op3);
    //  return ans;

    return diameterfast(root).first;
}
int main()
{

    return 0;
}