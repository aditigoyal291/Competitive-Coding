#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};


void insertatFront(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertatTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatPosition(Node* &head,int pos,int data)
{
    Node* temp=new Node (data);
    Node* p=head;
    int i=1;
    if(pos==1)
    {
        insertatFront(head,data);
    }
    
    while(i<pos-1)
    {
        p=p->next;
        i++;
    }
    temp->next=p->next;
    p->next->prev=temp;
    p->next=temp;
    temp->prev=p;
   
}

void deleteNode(Node* &head,int pos)
{   
    int i=1;
    Node*p=head;
    Node* q=NULL;
    while(i<pos)
    {
        q=p;
        p=p->next;
        i++;
    }
    q->next=p->next;
    p->next->prev=q;
    delete p;
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
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertatFront(head,8);
    print(head);
    insertatFront(head,6);
    print(head);
    insertatTail(tail,12);
    print(head);
    insertatTail(tail,14);
    print(head);
    insertatTail(tail,18);
    print(head);
    insertatPosition(head,3,9);
    print(head);
    insertatPosition(head,7,16);
    print(head);
    deleteNode(head,4);
    print(head);
    deleteNode(head,3);
    print(head);
    
    return 0;
}