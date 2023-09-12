#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    int product = 1;
    int sum = 0;
    int d;
    while (n != 0)
    {
        d = n % 10;
        product = product * d;
        sum = sum + d;
        n = n / 10;
    }
    cout << product - sum; 
    return 0;
}