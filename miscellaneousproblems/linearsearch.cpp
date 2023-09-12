#include <iostream>
using namespace std;
bool linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    int arr[10];
    cout << "enter the size of array\n";
    cin >> n;
    cout << "enter the elements\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout << "enter the element you want to find\n";
    cin >> key;
    bool ans = linearsearch(arr, n, key);
    if (ans)
        cout << "element found\n";
    else
        cout << "element not found\n";
    return 0;
}