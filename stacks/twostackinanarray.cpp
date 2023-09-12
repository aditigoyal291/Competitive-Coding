#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1,top2;
    Stack(int s)
    {
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }

void push1(int num)
{
    if(top2-top1>1)
    {
        top1++;
        arr[top1]=num;
    }
    else cout<<"stack overflow\n";
}

void push2(int num)
{
    if(top2-top1>1)
    {
        top2--;
        arr[top2]=num;
    }
    else cout<<"stack overflow\n";
}

int pop1()
{
    if(top1>=0)
    {
        int ans=arr[top1];
        top1--;
        return ans;
    }
    else return -1;
    
}

int pop2()
{
    if(top2>=0)
    {
        int ans=arr[top2];
        top2++;
        return ans;
    }
    else return -1;
    
}
};

int main()
{
    Stack s(5);
    s.push1(22);
    s.push1(44);
    s.push1(66);
    int ans1=s.pop1();
    cout<<ans1;
    s.push2(54);
    s.push2(64);
    s.push2(74);
    int ans=s.pop2();
    cout<<ans;
    return 0;
}