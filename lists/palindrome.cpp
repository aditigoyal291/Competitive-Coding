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

void insertFront(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

Node* getMid(Node* &head)
{
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
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
    return q;
}
bool isPalindrome(Node* &head)
{
    if(head==NULL||head->next==NULL) return true;
    //find middle of the list
    Node* middle=getMid(head);
    Node* temp=middle->next;
    //reverse the second part of the list to see whether it is same or not
    middle->next=reverse(temp);
    Node* head1=head;
    Node* head2=middle->next;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data) return false;
        head1=head1->next;
        head2=head2->next;
    }
    
    temp=middle->next;
    return true;
    
}
int main()
{
    Node* node1=new Node(2);
    Node* head=node1;
    print(head);
    insertFront(head,3);
    print(head);
    insertFront(head,3);
    print(head);
    insertFront(head,1);
    print(head);
    bool ans=isPalindrome(head);
    cout<<ans;
    return 0;

}