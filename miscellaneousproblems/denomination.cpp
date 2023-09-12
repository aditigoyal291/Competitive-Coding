#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    int note1, note2, note3, note4;
    switch (1)
    {
    case 1:
        note1 = n / 100;
        n = n % 100;
        cout << "no of 100 rs note " << note1 << endl;
    case 2:
        note2 = n / 50;
        n = n % 50;
        cout << "no od 50 rs note " << note2 << endl;
    case 3:
        note3 = n / 20;
        n = n % 20;
        cout << "no of 20 rs note " << note3 << endl;
    case4:
        note4 = n / 1;
        n = n % 1;
        cout << "no of 1 rs note " << note4 << endl;
    }
    return 0;
}