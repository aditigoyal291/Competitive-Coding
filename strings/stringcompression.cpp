// incorrect
// video 24

#include <iostream>
using namespace std;

int compress(char &s)
{
    int i = 0;
    int ansIndex = 0;
    int n = s.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && s[i] == s[j])
        {
            j++;
        }
        s[ansIndex++] = s[i];
        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            // converting count to single digit and save
            for (char ch : cnt)
            {
                s[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}
int main()
{
    char s[20];
    cout << "enter the string\n";
    cin >> s;
    int n = compress(&s);
    cout << n;

    return 0;
}