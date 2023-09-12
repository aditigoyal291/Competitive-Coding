#include <iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
        // return mid;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastoccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n, key;
    cout << "enter the size of array\n";
    cin >> n;
    int arr[10];
    cout << "enter the elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "enter the element you want to search\n";
    cin >> key;
    int first = firstoccurence(arr, n, key);
    int last = lastoccurence(arr, n, key);
    cout << first << " " << last;

    return 0;
}