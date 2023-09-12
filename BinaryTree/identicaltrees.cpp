#include<iostream>
using namespace std;
//tc:o(N)
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->left=NULL;
        this->right=NULL;
        this->data=data;
    }
};

bool isIdentical(Node* r1,Node* r2)
{
    if(r1== NULL && r2== NULL ) return true;
    if(r1==NULL && r2!=NULL) return false;
    if(r1!=NULL && r2==NULL) return true;
    bool left=isIdentical(r1->left ,r2->left);
    bool right=isIdentical(r1->right,r2->right);
    bool value=r1->data==r2->data;
    if(left && right && value) return true;
    else return false;



}
int main()
{
    
    return 0;
}