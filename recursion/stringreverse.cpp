#include<iostream>
using namespace std;

string reverse(string name,int i, int j)
{
    if(i>j) return "0";
    else {
        swap(name[i],name[j]);
        i++;
        j--;
        reverse(name,i,j);
    }
    return name;
}
int main()
{
    string name;
    cout<<"enter a string\n";
    cin>>name;
    int i=0;
    int j=name.length()-1;
    string ans=reverse(name,i,j);
    cout<<ans;
    return 0;
}