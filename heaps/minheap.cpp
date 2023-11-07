#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {

            int parent = index / 2;
            if (arr[parent] > arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteEle()
    {
    }
};
void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[smallest] > arr[left])
    {
        smallest = n;
    }
    if (right <= n && arr[smallest] > arr[right])
    {
        smallest = n;
    }

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

void heapSort(int arr[], int n)
{
    int t = n;
    while (t > 1)
    {
        // step 1 :swap
        swap(arr[t], arr[1]);
        t--;
        heapify(arr, t, 1);
    }
}
int main()
{

    cout << "using priority queue" << endl;
    // maxheap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "Element at top" << pq.top() << endl;
    cout << "Size" << pq.size();

    // minheap
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout << "Element at top" << pq.top() << endl;
    cout << "Size" << pq.size();

    return 0;
}