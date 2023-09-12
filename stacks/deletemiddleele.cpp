#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> s,int count,int size)
{
    //base case
    if(count==size/2)
    {
        s.pop();
        return;
    }

    int num=s.top();
    s.pop();

    solve(s,count++,size);
    s.push(num);




}
int main()
{
    stack<int> s;
    int count=0;
    int size=s.size();
    solve(s,count,size);
    return 0;
}