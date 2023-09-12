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

void insertatTail(Node* &head,Node* &tail,int val)
{
    Node* temp=new Node(val);
    if(head==NULL) 
    {
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
Node* add(Node* first,Node* second)
{
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry=0;
    while(first!=NULL && second!=NULL)
    {
        int sum=carry+first->data+second->data;
        int digit=sum%10;
        insertatTail(ansHead,ansTail,digit);
        carry=sum/10;
        first=first->next;
        second=second->next;

    }
    while(first!=NULL)
    {
        int sum=carry+first->data;
        int digit=sum%10;
        insertatTail(ansHead,ansTail,digit);
        carry=sum/10;
        first=first->next;
    }
    while(second!=NULL)
    {
        int sum=carry+second->data;
        int digit=sum%10;
        insertatTail(ansHead,ansTail,digit);
        carry=sum/10;
        second=second->next;
    }

    while(carry!=0)
    {
        int sum=carry;
        int digit=sum%10;
        insertatTail(ansHead,ansTail,digit);
        carry=sum/10;
    }
    return ansHead;
}


Node* addLists(Node* first,Node* second)
{
    first=reverse(first);
    second=reverse(second);
    Node* ans=add(first,second);
    ans=reverse(ans);
    return ans;
}
int main()
{
    Node* node1=new Node(5);
    Node* head1=node1;
    print(head1);
    insertFront(head1,4);
    print(head1);
    Node* node2=new Node(5);
    Node* head2=node2;
    print(head2);
    insertFront(head2,4);
    print(head2);
    insertFront(head2,3);
    print(head2);
    Node* head3=addLists(head1,head2);
    print(head3);


    
    return 0;
}