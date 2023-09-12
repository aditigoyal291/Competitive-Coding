#include <iostream>
using namespace std;

int sqroot(int key)
{
    int start = 0;
    int end = key - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if ((mid * mid) > key)
            end = mid - 1;
        else if ((mid * mid) == key)
            return mid;
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{

    cout << "enter the element to be found\n";
    int key;
    cin >> key;
    int root = sqroot(key);
    cout << root;

    return 0;
}