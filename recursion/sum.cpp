#include<iostream>
using namespace std;


int sum(int arr[],int n)

{
    if(n==0) return 0;
    if(n==1) return arr[0];
    else {
        int rem=sum(arr+1,n-1);
        int summ=arr[0]+rem;
        return summ;
    }
}
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int arr[10];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=sum(arr,n);
    cout<<ans;
    return 0;
}