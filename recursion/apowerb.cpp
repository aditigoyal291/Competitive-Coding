#include<iostream>
using namespace std;

int power(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    cout<<"ENter a and b\n";
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans;
    return 0;
}