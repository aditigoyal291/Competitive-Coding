#include <iostream>
using namespace std;

int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
        count++;
    return count;
}
int main()
{
    char name[20];
    cout << "enter your name\n";
    cin >> name;
    cout << "your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << len;
    return 0;
}