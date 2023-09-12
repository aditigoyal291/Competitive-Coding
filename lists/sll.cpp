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
    head=temp;
}

void insertatTail(Node* &tail,int data)
{   
    Node *temp=new Node(data);
    tail->next=temp;
    tail=tail->next;

}
void insertatPos(Node* &head,int data,int pos)
{
    Node *temp=new Node(data);
    Node *first=head;
    int i=1;
    while(i<pos)
   {
    first=first->next;
    i++;
   }
   temp->next=first->next;
   first->next=temp;
}

void deleteNode(int pos,Node* &head)
{
    if(pos==1) 
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    else{
        Node *q=NULL;
        Node *p=head;
        int i=1;
        while(i<pos)
        {
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        p->next=NULL;
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
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head=node1;
    Node *tail=node1;
    print(head);
    insertatTail(tail,12);
    print(head);
    insertatTail(tail,15);
    print(head);
    insertatPos(head,14,2);
    print(head);
    insertatPos(head,18,4);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(3,head);
    print(head);
    
    return 0;
}