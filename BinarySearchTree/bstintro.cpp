//tc:o(logn)


#include<iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

void levelOrderTraversal(Node* &root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            //purana level complete traverse ho chuka hai 
            cout<<endl;
            if(!q.empty())
            {
                //queue still has some children
                q.push(NULL);
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }

}

Node* insertintoBST(Node* &root,int data)
{
    //base case
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(data>root->data)
    {
        //right part
        root->right=insertintoBST(root->right,data);
    }
    else{
        //left part
        root->left=insertintoBST(root->left,data);
    }
}


Node* minValue(Node* &root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
Node* maxValue(Node* &root)
{
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertintoBST(root,data);
        cin>>data;
    }
}
int main()
{
    Node* root=NULL;
    cout<<"enter data to create bst\n";
    takeInput(root);
    cout<<"print"<<endl;
    levelOrderTraversal(root);
    cout<<minValue(root)->data<<endl;
    cout<<maxValue(root)->data<<endl;
    return 0;
}