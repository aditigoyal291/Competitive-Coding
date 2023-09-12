//not proper

#include<iostream>
using namespace std;


void merge(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first= new int[len1];
    int *second=new int[len2];
    int mainarrayindex=s;
    for(int i=0;i<len1;i++) first[i]=arr[mainarrayindex++];
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++) second[i]=arr[mainarrayindex++];
    int index1=0;
    int index2=0;
    // int mainarrayindex=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[mainarrayindex++]=first[index1++];
    }
     while(index2<len2)
    {
        arr[mainarrayindex++]=second[index2++];
    }
}
void mergesort(int arr[],int s,int e)

{
    int mid=s+(e-s)/2;
    if(s>=e) return ;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the elements of array\n";
    int arr[10];
    for(int i=0;i<n;i++) cin>>arr[i];
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}