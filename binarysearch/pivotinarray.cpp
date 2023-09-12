#include <iostream>
using namespace std;
int pivotEle(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int n;
    cout << "enter the size of array\n";
    cin >> n;
    int arr[10];
    cout << "enter the elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pivot = pivotEle(arr, n);
    cout << "pivot is " << pivot;

    return 0;
}