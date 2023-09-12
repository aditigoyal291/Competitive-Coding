#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void reverse_recursive(Node* &head,Node* prev,Node* curr)
{
    if(curr==NULL) 
    {
        head=prev;
        return;
    }
    else{
        Node* forward=curr->next;
        reverse_recursive(head,curr,forward);
        curr->next=prev;
    }
}


void reverse(Node* &head)
{
    Node* curr=head;
    Node* prev=NULL;
   
    reverse_recursive(head,prev,curr);
}

void insertatHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

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
    print(head);
    insertatHead(head,8);
    print(head);
    insertatHead(head,7);
    print(head);
    insertatHead(head,6);
    print(head);
    insertatHead(head,5);
    print(head);
    insertatHead(head,4);
    print(head);
    reverse(head);
    print(head);
    return 0;
}