#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0;
    int b = 1;
    int res = 0;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        res = a + b;
        cout << res << " ";
        a = b;
        b = res;
    }
}
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    fib(n);
    // cout << ans;
    return 0;
}