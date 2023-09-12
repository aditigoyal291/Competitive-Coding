#include <iostream>
using namespace std;
string removeOcurrence(string s, string part)
{
    while (s.length() != 0, s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s;
    cout << "enter a string\n";
    cin >> s;
    string part;
    cout << "enter the part you want to remove\n";
    cin >> part;
    string str = removeOcurrence(s, part);
    cout << str;

    return 0;
}
