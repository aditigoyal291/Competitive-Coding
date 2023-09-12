#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            char ch = 'D' - j + 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}