#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0) return 1;//mandatory otherwise segmentation fault stack overflow
    else return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial you want to find out\n";
    cin>>n;
    int ans=fact(n);
    cout<<ans;
    return 0;
}