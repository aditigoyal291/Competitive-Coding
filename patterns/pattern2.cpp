#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter  a number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}