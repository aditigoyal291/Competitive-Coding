#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot) cnt++;
    }

    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex&& j>pivotIndex)
    {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<pivotIndex && j>pivotIndex) swap(arr[i++],arr[j--]);

    }
    return pivotIndex;
}

void quicksort(int arr[],int s,int e)
{
    if(s>=e) return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int arr[10];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}