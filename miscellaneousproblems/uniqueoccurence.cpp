#include <iostream>
using namespace std;
void findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = ans ^ arr[i];
    cout << "ans is " << ans;
}
int main()
{
    int n;
    cout << "enter the number of elements\n";
    cin >> n;
    cout << "enter the elements of array\n";
    int arr[10];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    findUnique(arr, n);
    return 0;
}