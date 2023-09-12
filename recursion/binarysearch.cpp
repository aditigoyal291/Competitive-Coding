#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key)
{
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key) return true;
    if(arr[mid]<key) return binarysearch(arr,mid+1,e,key);
    else return binarysearch(arr,s,mid-1,key);
}
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int arr[10];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    int s=0;
    int e=n-1;
    bool ans=binarysearch(arr,s,e,key);
    cout<<ans;
    return 0;


}