#include <iostream>
using namespace std;
void reversearray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
    reversearray(arr, n);
    return 0;
}