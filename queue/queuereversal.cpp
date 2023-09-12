#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int>s;
    while(!q.empty())
    {
        int ele=q.front();
        q.pop();
        s.push(ele);
    }

    while(!s.empty())
    {
        int ele=s.top();
        s.pop();
        q.push(ele);
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    rev(q);
    
    return 0;
}