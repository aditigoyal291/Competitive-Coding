//tc:o(n)
//sc:o(h) //h->height0
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

int height(Node *&root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
int main()
{

    return 0;
}