#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int temp[n];
    int k = 2;
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    arr = temp;
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
    rotate(arr, n);
    return 0;
}