#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    cout<<"queue front:"<<q.front()<<endl;
    q.push(15);
    cout<<"queue front:"<<q.front()<<endl;
    q.push(13);
    cout<<"queue front:"<<q.front()<<endl; 
    cout<<"size:"<<q.size()<<endl;
    q.pop();
    cout<<"queue front:"<<q.front()<<endl; 
    q.pop();
    q.pop();

    cout<<"size:"<<q.size()<<endl;
    if(q.empty()) cout<<"Queue is empty\n";
    else cout<<"queue is not empty\n";
    return 0;
}