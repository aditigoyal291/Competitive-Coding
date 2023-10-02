#include<iostream>
using namespace std;
//tc:o(n) sc:o(1)
//whenever in ques it is given that we have to use space complexity o(1) in case of a tree use morris traversal
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


int main()
{
    
    return 0;
}