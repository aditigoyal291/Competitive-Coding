#include<iostream>
#include<stack>
using namespace std;
void sortedinsert(stack<int> s,int num)
{
    //base case
    if(s.empty()|| (!s.empty()&&s.top()<num))
    {
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();
    sortedinsert(s,num);
    s.push(n);
}
void sortStack(stack<int>s)
{
    //base case
    if(s.empty()) return;
    int num=s.top();
    s.pop();
    sortStack(s);
    sortedinsert(s,num);   

}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(-3);

    sortStack(s);
 
    return 0;
}