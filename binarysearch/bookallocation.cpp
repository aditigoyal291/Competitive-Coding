#include <iostream>
using namespace std;
int isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}
int allocateBooks(int arr[], int m, int n)
{
    int start = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
        s = s + arr[i];
    int end = s;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int students;
    cout << "enter the numebr of students\n";
    cin >> students;
    int books;
    cout << "enter the numebr of books\n";
    cin >> books;
    int arr[4] = {10, 20, 30, 40};
    int answer = allocateBooks(arr, students, books);
    cout << answer;

    return 0;
}