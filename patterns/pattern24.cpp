#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l;
        }
        for (int m = n - i; m >= 1; m--)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
