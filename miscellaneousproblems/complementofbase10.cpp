#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    if (n == 0)
        ans = 1;
    cout << ans;

    return 0;
}