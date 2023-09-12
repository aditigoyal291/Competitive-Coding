#include<iostream>
#include<vector>
#include<map>
#include<queue>
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

vector<int> bottomView(Node* root)
{
    vector<int> ans;
    if(root==NULL) return ans;
    map<int,int> topNode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        Node* firstNode=temp.first;
        int hd=temp.second;
       
        
        topNode[hd]=firstNode->data;
        
        if(firstNode->left)
        {
            q.push(make_pair(firstNode->left,hd-1));
        }
        if(firstNode->right)
        {
            q.push(make_pair(firstNode->right,hd+1));
        }
    }
    for(auto i:topNode)
    {
        ans.push_back(i.second);
    }
    return ans;
}
int main()
{
    
    return 0;
}