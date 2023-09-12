#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==0 || n==1) return true;
    else if(arr[0]>arr[1]) return false;
    else
    {
        bool rem=isSorted(arr+1,n-1);
        return  rem;
    }
}
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int arr[10];
    cout<<"ENter elemetns of array\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    bool ans=isSorted(arr,n);
    cout<<ans;
            return 0;
}