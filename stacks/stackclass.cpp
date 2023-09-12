#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int ele)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=ele;
        }
        else cout<<"stack overflow\n";
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else cout<<"stack underflow\n";
    }

    int peek()
    {
        if(top>=0 ) return arr[top];
        else cout<<"Stack is empty"<<endl;
        return -1;
    }

    bool isEmpty()
    {
        if(top==-1) return true;
        else return false;
    }
};
int main()
{
    Stack s(5);
    s.push(22);
    s.push(43);
    s.push(44);
    s.push(44);
    s.push(44);
    s.push(44);
    cout<<s.peek();
    s.pop();
    cout<<s.peek();
    s.pop();
    cout<<s.peek();
    s.pop();
    // cout<<s.peek();
    if(s.isEmpty()) cout<<"stack is empty\n";
    else cout<<"stack is not empty\n";
    return 0;
}