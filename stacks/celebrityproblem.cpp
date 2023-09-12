#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool knows(vector<vector<int>> arr,int a,int b,int n)
{
    if(arr[a][b]==1) return true;
    else return false;
}

int celebrity(vector <vector<int>> arr,int n)
{
    stack<int> s;
    //push all eles in stack
    for(int i=0;i<n;i++)
    {
        s.push(i);

    }
    while(s.size()>1)
    {
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(knows(arr,a,b,n))
        {
            s.push(b);
        }
        else{
            s.push(a);

        }
        //single ele in stack is a "potential candidate"
        //verify it
    int candidate=s.top();
        bool check=false;
        int zeroCount=0;
        for(int i=0;i<n;i++)
        {
            if(arr[candidate][i]==0)
            {
                zeroCount++; 
           }
        }
        //all zeroes
        if(zeroCount==n) check=false;
        //columncheck
        bool colcheck=false;
        int onecount=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i][candidate]==1)
            {
                onecount++;
            }
        }
        if(onecount==n) colcheck=true;
        if(check==true && colcheck==true) return candidate;
        else return -1;
    }
}


int main()
{
    vector<int> arr[10][10];
    int n;
    cin>>n;
    // int ans=celebrity(arr,n);

    return 0;
}