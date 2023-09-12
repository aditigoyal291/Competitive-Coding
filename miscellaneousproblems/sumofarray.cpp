#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[10];
    cout << "enter the size ofarray\n";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}