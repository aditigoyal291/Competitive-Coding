#include<iostream>
using namespace std;

void sortArray(int arr[],int n)
{
    if(n==0||n==1) return;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        
    }
    sortArray(arr,n-1);
}
int main()
{
    int n;
    cout<<"enter the size of rray\n";
    cin>>n;
    cout<<"enter the elements of array\n";
    int arr[10];
    for(int i=0;i<n;i++) cin>>arr[i];
    sortArray(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;

}