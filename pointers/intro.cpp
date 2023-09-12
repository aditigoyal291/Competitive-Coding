#include<iostream>
using namespace std;
int main()
{
    int n=5;
    cout<<&n<<endl;

    int *ptr=&n;
    cout<<*ptr<<endl;
    cout<<ptr;
    return 0;
}