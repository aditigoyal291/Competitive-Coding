#include<iostream>
using namespace std;

int fib(int n)
{
    int a=0;
    int b=1;
    if(n==1) return b;
    else if(n==0) return a;
    else{
   int ans= fib(n-1)+fib(n-2);
    return ans;
    }
}
int main()
{
    int n;
    cout<<"enter a number\n";
    cin>>n;
   int ans= fib(n);
   cout<<ans;
    
    return 0;
}