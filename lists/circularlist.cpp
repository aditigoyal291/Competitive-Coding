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
    Node *temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

void insertHead(Node* &head,Node* &tail,int data)
{   
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
    tail->next=head;
}

bool circularlist(Node* head)
{
    if(head==NULL) return true;
    if(head->next==NULL) return false;
    if(head->next==head) return true;
    else{
        Node* temp=head->next;
        while(temp!=NULL && temp!=head)
        {
            temp=temp->next;
        }
        if(temp==NULL) return false;
        if(temp==head) return true;
    }
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    tail->next=tail;
    print(head);
    insertHead(head,tail,8);
    print(head);
    insertHead(head,tail,6);
    print(head);
    insertHead(head,tail,4);
    print(head);
    insertHead(head,tail,2);
    print(head);
    insertHead(head,tail,1);
    print(head);

    bool ans=circularlist(head);
    cout<<ans;

    return 0;
}