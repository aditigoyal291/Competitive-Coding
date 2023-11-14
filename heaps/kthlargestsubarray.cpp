// //o(n2logn)
// //sc:o(n2)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // int getKthlargest(vector<int> &arr, int k)
// // {
// //     vector<int> sumStore;
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         int sum = 0;
// //         for (int j = i; j < arr.size(); j++)
// //         {
// //             sum += arr[j];
// //             sumStore.push_back(sum);
// //         }
// //     }

// //     sort(sumStore.begin(), sumStore.end());
// //     return sumStore[sumStore.size() - k];
// // }
// // int main()
// // {

// //     return 0;
// // }

// sc:o(k)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int getKthLargest(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> mini;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (mini.size() < k)
            {
                mini.push(sum);
            }
            else
            {
                if (mini.size() > k)
                {
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
    }
    return mini.top();
}
int main()
{

    return 0;
}