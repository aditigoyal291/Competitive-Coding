#include <iostream>
using namespace std;
int highest(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return arr[s];
}
int main()
{
    int n;
    cout << "enter the number of elements\n";
    cin >> n;
    int arr[10];
    cout << "enter the elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int peak = highest(arr, n);
    cout << peak;

    return 0;
}