// space complexity zada
//  #include <iostream>
//  using namespace std;
//  void reverse(int arr[], int n)
//  {
//      int array[5] = {0};
//      int j = 0;
//      while (j < n)
//      {

//         for (int i = n - 1; i >= 0; i--)
//         {
//             array[j] = arr[i];
//             j++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         cout << array[j] << " ";
// }
// int main()
// {
//     int n;
//     cout << "enter thesize of array\n";
//     cin >> n;
//     int arr[10];
//     cout << "enter the elements of array\n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     reverse(arr, n);
//     return 0;
// }

// optimized solution
#include <iostream>
using namespace std;

void reverse(int arr[], int n)
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
        cout << arr[i];
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
    reverse(arr, n);
    return 0;
}