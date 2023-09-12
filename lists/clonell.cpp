/*#include<iostream>
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


void insertTail(Node* &head,Node* &tail,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
Node* copylist(Node* &head)
{
    Node* cloneHead=NULL;
    Node* cloneTail=NULL;
    Node* temp=head;
    while(temp!=NULL)
    {
        insertTail(cloneHead,cloneTail,temp->data);
        temp=temp->next;
    }

    unordered_map<Node*,Node*> oldToNewNode;
    temp=head;
    Node* temp2=cloneHead;
    while(temp!=NULL && temp2!=NULL)
    {
        oldToNewNode[temp]=temp2;
        temp=temp->next;
        temp2=temp2->next;
    }
    temp=head;
    temp2=cloneHead;
    while(temp!=NULL)
    {
        temp2->random=oldtonewnode[temp->random];

    }
    return cloneHead;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;

    return 0;
}*/