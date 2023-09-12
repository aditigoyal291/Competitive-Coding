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

void insertTail(Node* &list3,int data)
{
            Node* tail=NULL;
            Node* temp=new Node(data);
            if(list3==NULL)
            {
                list3=temp;
                tail=temp;
            }
            else{
                list3->next=temp;
                tail=temp;
            }
            return;
}
void insertHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
Node* Merging(Node* &list1,Node* &list2)
{
    Node* list3=NULL;
        if(list1==NULL) {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        else{
            Node* p=list1;
            Node* q=list2;
            while(p!=NULL && q!=NULL)
            {

                if(p->data<=q->data)
                {
                    insertTail(list3,p->data);
                    p=p->next;
                }
                else{
                    insertTail(list3,q->data);
                    q=q->next;
                }

            }
            while(p!=NULL)
            {
                insertTail(list3,p->data);
                p=p->next;
            }
            while(q!=NULL)
            {
                insertTail(list3,q->data);
                q=q->next;
            }
        }
        return list3;
    
}
int main()
{
    Node* node1=new Node(4);
    Node* head1=node1;
    Node* node2=new Node(4);
    Node* head2=node2;
    print(head1);
    insertHead(head1,2);
    print(head1);
    insertHead(head1,1);
    print(head1);
    
    print(head2);
    insertHead(head2,3);
    print(head2);
    insertHead(head2,1);
    print(head2);

    head1=Merging(head1,head2);
    print(head1);

    return 0;
}