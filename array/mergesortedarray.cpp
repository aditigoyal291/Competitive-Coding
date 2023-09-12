#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
    for (int i = 0; i < k; i++)
        cout << arr3[i] << " ";
}
int main()
{
    int n;
    int m;
    cout << "enter the size of array1\n";
    cin >> n;
    cout << "enter the size of array2\n";
    cin >> m;
    cout << "enter the elements of array1\n";
    int arr1[10];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    cout << "enter the elements of array2\n";
    int arr2[10];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    int arr3[10] = {0};
    merge(arr1, arr2, n, m, arr3);

    return 0;
}