#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "number is not prime\n";
            isprime = 0;
            break;
        }
        if (isprime == 0)
            cout << "number is not prime\n";
        else
            cout << "number is prime\n";
    }
    return 0;
}