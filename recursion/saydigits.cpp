#include<iostream>
using namespace std;

void digit(int n,string arr[])
{
    if(n==0) return;
    int num=n%10;
    n=n/10;
    digit(n,arr);
    cout<<arr[num]<<" ";

}
int main()
{
    string arr[10]={"Zero","One","Two","Three","Four","FIve","Six","Sevene","Eight","Nine"};
    int n;
    cout<<"enter n\n";
    cin>>n;

    digit(n,arr);


    return 0;
}