#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> modifyQueue(queue<int>q, int k)
{
    stack<int> s;
    for(int i=0;i<k;i++)
    {
        int val=q.front();;
        q.pop();
        s.push(val);
    }

    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q.push(val);
    }

    int rem=q.size()-k;
    while(rem--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
int main()
{
    
    return 0;
}