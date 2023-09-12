#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()) cout<<"Stack is empty\n";
    else{
        cout<<"Stack is not empty\n";
    }
    cout<<s.size();
    return 0;
}