#include<iostream>
class Stack{
    int *arr;
    int* top;
    int* next;
    int n,s;
    int freespot;

    public:
    Stack(int n,int s)
    {
        arr=new int[s];
        top=new int[n];
        next=new int[s];

        //top initialize
        for(int i=0;i<n;i++)
            top[i]=-1;
        //next initialize

        for(int i=0;i<s;i++)
            next[i]=i+1;
        //update last index value to -1
        next[s-1]=-1;
        freespot=0;
    }

    bool push(int x,int m)
    {
        if(freespot==-1) return false;
        //find index
        int index=freespot;

        //update freespot
        freespot=next[index];

        //insert ele into array
        arr[index]=top[m-1];

        //update top
        top[m-1]=index;
        return true;
    }

    int pop(int m)
    {
        //check if stack is empty
        if(top[m-1]==-1) return -1;
        int index=top[m-1];
        top[m-1]=next[index];
        next[index]=freespot;
        return arr[index];
    }


    
};
using namespace std;
int main()
{
    
    return 0;
}