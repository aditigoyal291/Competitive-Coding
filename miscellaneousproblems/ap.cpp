#include <iostream>
using namespace std;
int ap(int num)
{
    int answer = 3 * num + 7;
    return answer;
}
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    int ans = ap(n);
    cout << ans;
    return 0;
}