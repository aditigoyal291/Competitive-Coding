#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        arr=new int[size];
        front=-1;
        rear=-1;
    }
        bool enqueue(int data)
        {
            if((front==0 && rear==size-1)||(rear==(front-1)%size-1))
            {
                return false;
            }
            else if(front==-1)
            {
                front=rear=0;
                arr[rear]=data;
            }
            else if(rear==size-1 && front!=0)
            {
                rear=0;
                arr[rear]=data;
            }
            else{
                rear++;
                arr[rear]=data;
            }
        }

        int dequeue()
        {
            if(front==-1)
            {   
                cout<<"Queue is empty\n";
                return -1;
            }
            int ans=arr[front];
            arr[front]=-1;
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==size-1)
            {
                front=0;
            }
            else front++;
            return ans;
        }
    

};
int main()
{
    
    return 0;
}