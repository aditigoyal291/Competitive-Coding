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
        arr= new int[size];
        front=0;
        rear=0;
    }

        void enqueue(int data)
        {
            if(rear==size) cout<<"Queue is full"<<endl;
            else{
                arr[rear]=data;
                rear++;
            }
        }

        int dequeue()
        {
            if(front==rear) return -1;
            else{
                int ans=arr[front];
                arr[front]=-1;
                front++;
                if(front==rear)
                {
                    front=0;
                    rear=0;
                }
            return ans; 
            }  
        }

        int front()
        {
            //empty cond
            if(front==rear) return -1;
            else{
                return arr[front];
            }
        }

        bool isEmpty()
        {
            if(front==rear) return true;
            else return false;
        }
    };
int main()
{
    
    return 0;
}