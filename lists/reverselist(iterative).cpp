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

void insertatHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

Node* reverse(Node* &head)
{
    Node* p=head;
    Node* q=NULL;
    Node* r=NULL;
    while(p!=NULL)
    {
        r=p->next;
        p->next=q;
        q=p;
        p=r;
    } 
    head=q;
    return head;
  
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
        cout<<endl;
}
int main()
{
    Node *node1=new Node(10);
    Node* head=  node1;
    print(head);
    insertatHead(head,8);
    print(head);
    insertatHead(head,5);
    print(head);
    insertatHead(head,3);
    print(head);
    reverse(head);
    print(head);
    return 0;
}