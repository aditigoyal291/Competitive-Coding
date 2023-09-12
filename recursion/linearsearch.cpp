#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n,int key)
{
    if(n==0) return false;
    if(arr[0]==key) return true;
    else {
        bool rempart=linearsearch(arr+1,n-1,key);
        return rempart;
    }
}
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int arr[10];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    int key=5;
    bool ans=linearsearch(arr,n,key);
    cout<<ans;
    return 0;
}