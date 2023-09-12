#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
        count++;
    return count;
}

char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        if (tolower(name[e]) == tolower(name[s]))
        {
            s++;
            e--;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    char name[20];
    cout << "enter a name\n";
    cin >> name;
    int len = getLength(name);
    bool check = checkPalindrome(name, len);
    if (check == 1)
        cout << "entered string is a palindrome\n";
    else
        cout << "entered string is not a palindrome\n";

    return 0;
}