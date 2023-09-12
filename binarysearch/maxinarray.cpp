#include <iostream>
using namespace std;
int main()
{
    int max = 0;
    int min = 0;
    int arr[5] = {4, 12, 8, 10, 2};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        if (arr[i] < arr[min])
            min = i;
    }
    cout << arr[max] << " ";
    cout << arr[min];
    return 0;
}