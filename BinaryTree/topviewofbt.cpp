#include <iostream>
#include <vector>
#include <map>
#include <queue>
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

vector<int> topView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, int> topNode;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontNode = temp.first;
        int hd = temp.second;
        // maintain one to one mapping .one value can be present for one horiz distance
        if (topNode.find(hd) == topNode.end())
        {
            topNode[hd] = frontNode->data;
        }
        if (frontNode->left)
            q.push(make_pair(frontNode->left, hd - 1));
        if (frontNode->right)
            q.push(make_pair(frontNode->right, hd - 1));
    }
    for (auto i : topNode)
    {
        ans.push_back(i.second);
    }
    return ans;
}
int main()
{

    return 0;
}