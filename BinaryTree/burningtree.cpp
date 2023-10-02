#include<iostream>
#include<map>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
//create mapping
//return target node
//level order traversal 
Node* createParentMapping(Node* root,int target,map<Node*,Node*> &nodeToParent){
    Node* result=NULL;
    queue<Node*> q;
    q.push(root);
    nodeToParent[root]=NULL;
    while(!q.empty()){
       Node* front=q.front();
        q.pop();
        if(front->data==target)
        {
            result=front;
        }
        if(front->left)
        {
            nodeToParent[front->left]=front;
            q.push(front->left);
        }
        if(front->right)
        {
            nodeToParent[front->right]=front;
            q.push(front->right);
        }
    }
    return result;
}


int burnTree(Node* root,map<Node*,Node*> &nodeToParent)
{
    int ans=0;
    map<Node*,bool> visited;
    queue<Node*> q;
    q.push(root);
    visited[root]=true;
    while(!q.empty())
    {
        bool flag=0;
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            //process neighbouring nodes
            Node* front=q.front();
            q.pop();
            if(front->left && !visited[front->left])
            {
                flag=true;
                q.push(front->left);
                visited[front->left]=1;
            }
            if(front->right && !visited[front->right])
            {
                flag=true;
                q.push(front->right);
                visited[front->right]=1;
            }
            if(nodeToParent[front] && !visited[nodeToParent[front]])
            {
                flag=true;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]]=1;
            }
            if(flag)
            {
                ans++;
            }
        }
    }
    return ans;
}

int minTime(Node* root,int target)
{
    //1. create node to parent mappping
    //2. find target node
    //3. burn the tree in min time

    int ans=0;
    map<Node*, Node*> nodeToParent;
    Node* targetNode=createParentMapping(root,target,nodeToParent);
    int ans=burnTree(targetNode,nodeToParent);
    return ans;
}
int main()
{
    
    return 0;
}