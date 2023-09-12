#include <iostream>
using namespace std;
int pivotEle(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int search(int arr[], int n, int key)
{
    int pivot = pivotEle(arr, n);
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        int s = pivot;
        int e = n - 1;
        int mid = s + (e - s) / 2;

        while (s <= e)
        {

            if (key == arr[mid])
                return mid;
            else if (key > arr[mid])
                s = mid + 1;
            else
                e = mid - 1;
            mid = s + (e - s) / 2;
        }
    }
    else
    {
        int s = 0;
        int e = pivot - 1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] > key)
                e = mid - 1;
            else
                s = mid + 1;
            mid = s + (e - s) / 2;
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of array\n";
    cin >> n;
    cout << "enter the elements of array\n";
    int arr[10];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "enter the element to be found\n";
    int key;
    cin >> key;
    int ele = search(arr, n, key);
    cout << ele;

    return 0;
}