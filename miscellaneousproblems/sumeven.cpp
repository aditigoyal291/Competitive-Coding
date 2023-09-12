#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int even[5]={0,2,4,6,8};
    for(int i=0;i<5;i++)
    {
        sum=sum+even[i];
    }
    cout<<sum;
    return 0;
}