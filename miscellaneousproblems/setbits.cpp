#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the numbers\n";
    cin >> a;
    cin >> b;
    int count1 = 0;
    int count2 = 0;
    while (a != 0)
    {
        if (a & 1)
            count1++;
        a = a >> 1;
    }
    // cout << count1 << endl;
    while (b != 0)
    {
        if (b & 1)
            count2++;
        b = b >> 1;
    }
    // cout << count2 << endl;
    int count3 = count1 + count2;
    cout << count3;

    return 0;
}