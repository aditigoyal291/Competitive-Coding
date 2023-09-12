#include <iostream>
using namespace std;
int check(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            count++;
    }
    if (arr[n - 1] > arr[0])
        count++;
    if (count <= 1)
        return 1;
    else
        return 0;
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
    int ans = check(arr, n);
    cout << ans;

    return 0;
}