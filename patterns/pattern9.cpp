#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // /int value = i;
        for (int j = 1; j <= i; j++)
        {
            cout << i;
            i++;
        }
        cout << endl;
    }
    return 0;
}