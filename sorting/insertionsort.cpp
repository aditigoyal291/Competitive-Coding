#include <iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else break;


        }
        arr[j+1]=temp;
    }
}
int main()
{
    int n;
    cout << "enter the size of array\n";
    cin >> n;
    cout << "enter the elements of array\n";
    for (inti = 0; i < n; i++)
        cin >> arr[i];

    return 0;
}