#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    int i;
    int j;
    Node(int a, int b, int c)
    {
        data = a;
        i = b;
    }
};

class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};

vector<int>
mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    priority_queue<Node *, vector<Node *>, compare> minheap;

    // step 1: insert first elts of all the arrays in heap
    for (int i = 0; i < k; i++)
    {
        Node *temp = new Node(kArrays[i][0], i, 0);

        minheap.push(temp);
    }

    // step 2:

    vector<int> ans;
    while (minheap.size() > 0)
    {
        Node *temp = minheap.top();

        ans.push_back(temp->data);
        minheap.pop();
        int i = temp->i;
        int j = temp->j;
        if(j+1<kArrays[i].size())
        {
            Node*  next=new Node(kArrays[i][j+1],i,j+1);
            minheap.push(next);
        }
    }
    return ans;
}
int main()
{

    return 0;
}


/*
T(C)= O(K^2 * log(K))
s(c)=o(k)

  vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
    vector<int>ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
    for(int i=0;i<k;i++)
    {
     minh.push({arr[i][0],i});   
    }
    
    while(!minh.empty())
    {
        auto it=minh.top();
        minh.pop();
        int ele=it.first;
        int row=it.second;
        ans.push_back(ele);
        if(arr[row].size()>1)
        {
            minh.push({arr[row][1],row});
      // Increment the index of the current row to move to the next element in the row.
           arr[row].erase(arr[row].begin());
        }
    }

    return ans;
}
*/