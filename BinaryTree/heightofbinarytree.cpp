//height=longest path b/w root and leaf
//tc o(n)
//sc o(height/n)
#include<iostream>
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

int height(Node* node)
{
    if(node==NULL) return 0;
    int left=height(node->left);
    int right=height(node->right);
    int ans=max(left,right)+1;
    return ans;   
}
int main()
{
    
    return 0;
}