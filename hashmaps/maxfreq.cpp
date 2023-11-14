#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> count;
    int maxFreq=0;
    int maxAns=0;

    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
        maxFreq=max(maxFreq,count[arr[i]]);

    }
    // int maxi = INT_MIN;
    // int ans = -1;
    // for (auto i : count)
    // {
    //     if (i.second > maxi)
    //     {
    //         maxi = i.second;
    //         ans = i.first;
    //     }
    // }

    for(int i=0;i<arr.size();i++)
    {
        if(maxFreq==count[arr[i]])
        {
            maxAns=arr[i];
            break;
        }
    }
    return maxAns;
}
int main()
{

    return 0;
}