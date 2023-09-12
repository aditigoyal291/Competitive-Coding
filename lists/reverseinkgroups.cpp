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
void insertTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

Node* reverse(Node* &head,int k)
{
    if(head==NULL) return NULL;
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL)
    {
        head->next=reverse(next,k);
    }
    head=prev;
    return prev;
}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertTail(tail,12);
    print(head);
    insertTail(tail,14);
    print(head);
    insertTail(tail,16);
    print(head);
    insertTail(tail,18);
    print(head);
    reverse(head,3);
    print(head);
    return 0;
}