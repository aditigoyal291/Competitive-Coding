#include<iostream>
#include<vector>
#include<queue>

//tc:0(n)
//sc:o(n)
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

vector<int> zigzag(Node* root)
{
    vector<int> res;
    if(root==NULL) return res;
    bool leftToRight;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++)
        {
            Node* frontNode=q.front();
            q.pop();
            int index=leftToRight?1:size-i-1;
            ans[index]=frontNode->data;

            if(frontNode->left)
            {
                q.push(frontNode->left);
            }

            if(frontNode->right)
            {
                q.push(frontNode->right);
            }
            //change dir
            leftToRight=!leftToRight;

            for(auto i:ans) res.push_back(i);
        }
        return res;
    }
}
int main()
{
    
    return 0;
}