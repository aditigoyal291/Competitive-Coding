#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = n; j >= i; j--)
        {
            cout << count;
            count++;
        }
        for (int k = i - 1; k >= 1; k--)
        {
            cout << "**";
        }
        for (int l = n - i + 1; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}