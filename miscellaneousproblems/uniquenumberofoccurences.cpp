#include <iostream>
using namespace std;

void uniqueoccurence(int arr[],int n)
{
    //sort
    int i=0;
    int min=i;
    for(int i=0;i<n;i++)
    {
        if(arr[min]>arr[i]) min=i;
    }

}
int main()
{
    int n;
    cout << "enter the size of array\n";
    cin >> n;
    int arr[10];
    cout << "enter the elemnts of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    uniqueoccurence(arr, n);

    return 0;
}