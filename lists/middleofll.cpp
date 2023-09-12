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

void insertatHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

int len(Node* &head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int middle(Node* &head)
{
    int length=len(head);
    int mid=length/2+1;
    
    int i=1;
    Node* p=head;
    while(i<mid)
    {
        p=p->next;
        i++;
    }
    return p->data;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    insertatHead(head,8);
    print(head);
    insertatHead(head,6);
    print(head);
    insertatHead(head,4);
    print(head);
    insertatHead(head,2);
    print(head);
    insertatHead(head,1);
    print(head);
    int ans=middle(head);
    cout<<ans;
    
    return 0;
}