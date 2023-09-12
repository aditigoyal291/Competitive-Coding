#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> s,int data)
{
    if(s.empty())
    {
        s.push(data);
    }
    int num=s.top();
    s.pop();
    solve(s,data);
    s.push(num);

}
int main()
{
    stack<int> s;
    int data=10;
    // stack<int> pushBottom(s,data);
    return 0;
}