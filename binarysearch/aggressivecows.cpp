#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int k, int mid, int n)
{
    int cowCount = 1;
    int lastPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}
int largestdist(int arr[], int k, int n)
{
    sort(arr, arr + 5);
    int start = 0;
    int maxi = -1;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(arr, k, mid, n))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int cows;
    cout << "enter the number of cows\n";
    cin >> cows;
    int arr[5] = {4, 2, 1, 3, 6};
    int answer = largestdist(arr, cows, 5);
    cout << answer;

    return 0;
}