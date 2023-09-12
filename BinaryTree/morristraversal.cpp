#include<iostream>
using namespace std;
//tc:o(n) sc:o(1)
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