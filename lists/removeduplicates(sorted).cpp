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

void insertHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void unique_ele(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->next!=NULL && temp->data==temp->next->data)
        {
            Node* r=temp->next->next;
            Node* p=temp->next;
            delete p;
            temp->next=r;
        }
        else{
            temp=temp->next;
        }
    }
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    insertHead(head,8);
    print(head);
    insertHead(head,6);
    print(head);
    insertHead(head,6);
    print(head);
    insertHead(head,2);
    print(head);
    insertHead(head,2);
    print(head);
    unique_ele(head);
    print(head);
    return 0;
}