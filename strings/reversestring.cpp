#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
        count++;
    return count;
}
void reverse(char name[],int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    cout << name;
}
int main()
{
    char name[20];
    cout << "enter your name\n";
    cin >> name;
    int len=getLength(name);
    reverse(name,len);
    return 0;
}