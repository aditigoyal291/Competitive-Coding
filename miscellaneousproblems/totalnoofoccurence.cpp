#include <iostream>
using namespace std;
int firstoccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastoccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
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
    cout << "enter the element you want to find total occurence of\n";
    int key;
    cin >> key;
    int first = firstoccurence(arr, n, key);
    int last = lastoccurence(arr, n, key);
    cout << last - first + 1;

    return 0;
}