#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(-1);
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);
    int arr[10];
    int n;
    cout<<"Enter size\n";
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        arr[i]=s.top();
        s.push(curr);
        
    }

    
    return 0;
}