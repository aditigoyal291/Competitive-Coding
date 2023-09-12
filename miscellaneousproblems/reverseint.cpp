#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        if (ans < INT_MIN/ 10 || ans > INT_MAX / 10)
            return 0;
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    cout << ans;
    return 0;
}