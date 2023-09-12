#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    
    return 0;
}