//some error

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
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


Node* middle(Node* &head)
{
    if(head==NULL||head->next==NULL) return head;
    if(head->next->next==NULL)return head->next;
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
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
    insertHead(head,4);
    print(head);
    insertHead(head,2);
    print(head);
    insertHead(head,1);
    print(head);
    insertHead(head,3);
    print(head);

    middle(head);
    


    
    return 0;
}