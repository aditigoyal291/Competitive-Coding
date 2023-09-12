#include<iostream>
#include<stack>
using namespace std;

void insertatBottom(stack<int> &s,int num)
{
    if(s.empty()) {s.push(num);
    return;}
    int num=s.top();
    s.pop();
    insertatBottom(s,num);
    s.push(num); 
}
stack<int> reverseStack(stack<int>s)
{
    //base case
    if(s.empty()) return;
    int num=s.top();
    s.pop();
    //
    reverseStack(s);
    insertatBottom(s,num);
}
int main()
{
    stack<int> s;
    stack<int> st=reverseStack(s);
    return 0;
}