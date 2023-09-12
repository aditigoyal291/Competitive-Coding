#include<iostream>
using namespace std;

bool checkpalindrome(string name,int i,int j)

{
    if(i>j) 
        return true;
    
    if(name[i]!=name[j]) return false;
    else return checkpalindrome(name,i++,j--);
    
}
int main()
{
    string name="naman";
    // cout<<"enter a string\n";
    // cin>>name;
    int i=0;
    int j=name.length()-1;
    bool ans=checkpalindrome(name,i,j);
    cout<<ans;
    return 0;
}