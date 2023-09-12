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

void insertatFront(Node* &tail,int data)
{
    Node* temp=new Node(data);
    temp->next=tail;
    tail->next=temp;
}
void print(Node* &tail)
{
    Node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    Node* tail=node1;
    print(tail);
    insertatFront(tail,8);
    print(tail);
    
    return 0;
}