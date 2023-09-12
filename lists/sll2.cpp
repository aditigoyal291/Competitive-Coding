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

void insertatHead(Node* &head,int data)
{
    Node *temp=new Node(data);
    temp->next=head;
    // tail=head;
    head=temp;
    
}

void insertatEnd(Node* &tail,int data)
{
    Node *temp=new Node(data);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}

void insertatPos(Node* &head,int data,int pos,Node* &tail)
{
    if(pos==1) insertatHead(head,data);
    else{
        Node *temp=new Node(data);
        int i=1;
        Node* curr=head;
        while(i<pos-1)
        {
            curr=curr->next;
            i++;
        }
        temp->next=curr->next;
        curr->next=temp;
        if(temp->next==NULL) tail=temp;
    }
}


void deleteNode(Node* &head,int pos)
{
    if(pos==1) 
    {
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    else{
        Node *p=head;
        Node *q=NULL;
        int i=1;
        while(i<pos)
        {
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        delete p;
    }
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
    insertatHead(head,8);
    print(head);
    insertatHead(head,6);
    print(head);
    insertatEnd(tail,50);
    print(head);
    insertatEnd(tail,60);
    print(head);
    insertatPos(head,30,4,tail);
    print(head);
    insertatPos(head,3,1,tail);
    print(head);
    insertatPos(head,70,8,tail);
    print(head);
    print(tail);
    deleteNode(head,8);
    print(head);

    return 0;
}