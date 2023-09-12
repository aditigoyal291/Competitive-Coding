//incorrect

#include <iostream>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}
char tolower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}
bool palindrome(string s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st <= e)
    {
        if (s[st] == s[e])
        {
            st++;
            e--;
        }
        else
            return 0;
    }
    return 1;
}
bool isPalindrome(string s)
{

    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
            temp.push_back(s[j]);
    }
    for (int j = 0; j < s.length(); j++)
    {
        temp[j] = tolower(temp[j]);
    }
    return palindrome(temp);
}

int main()
{
    string name;
    cout << "enter a string\n";
    cin >> name;
    bool check = isPalindrome(name);
    cout << check;

    return 0;
}