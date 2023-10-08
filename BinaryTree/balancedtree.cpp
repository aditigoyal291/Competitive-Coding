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

pair<bool, int> isBalancedFast(Node *root)
{
    if (root == NULL)
    {

        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = isBalancedFast(root->left);
    pair<bool, int> right = isBalancedFast(root->right);
    bool leftAns = left.first;
    bool rightAns = right.first;
    bool diff = abs(left.second - right.second) <= 1;
    pair<bool, bool> ans;
    ans.second = max(left.second, right.second) + 1;
    if (leftAns && rightAns && diff)
        ans.first = true;
    else
        ans.first = false;
    return ans;
}

bool isBT(Node *root)
{
    // if (root == NULL)
    //     return true;
    // bool left = isBT(root->left);
    // bool right = isBT(root->right);
    // bool diff = abs(height(root->left) - height(root->right)) <= 1;
    // if (left && right && diff)
    //     return true;
    // else
    //     return false;

    return isBalancedFast(root).first;
}
int main()
{

    return 0;
}
