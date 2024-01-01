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
void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
        return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in );
}

Node* inordertobst(int s,int e,vector<int> &in)
{
    if(s>e) return NULL;
    int mid=(s+e)/2;
    Node* root=new Node(in[mid]);
    root->left=inordertobst(s,mid-1,in);
    root->right=inordertobst(mid+1,e,in);
    return root;

}

vector<int> mergeArrays(vector<int> a, vector<int> b)
{
    vector<int> ans(a.size() + b.size());
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            ans[k++] = a[i];
        }
        else
        {
            ans[k++] = b[j];
        }
    }
    while (i < a.size())
    {
        ans[k++] = a[i];
        i++;
    }
    while (j < b.size())
    {
        ans[k++] = b[j];
        j++;
    }
    return ans;
}

Node *mergeBST(Node *root1, Node *root2)
{
    // step 1 store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);
    vector<int> mergeArray = mergeArrays(bst1, bst2);
    int s = 0;
    int e = mergeArray.size() - 1;
    return inordertobst(s, e, mergeArray);
}
int main()
{

    return 0;
}