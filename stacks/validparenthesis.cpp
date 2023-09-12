#include<iostream>
#include<stack>
using namespace std;

bool valid(string exp,stack<char> s)
{
    
   for(int i=0;i<exp.length();i++)
   {
    char ch=exp[i];
    if(ch=='('|| ch=='{'||ch=='[')
    {
        s.push(ch);
    }
    else{
        if(!s.empty())
        {
            char top=s.top();
            if((ch==')' && top=='(')||(ch=='}' && top=='{')||(ch==']'&& top=='['))
            {
                s.pop();
            }
            else return false;
        }
    }

   }
   if(s.empty()) return true;
   else return false;

}
int main()
{
    stack<char>s;
    string exp="[{()}]";
    bool ans=valid(exp,s);
    cout<<ans;
    
    return 0;
}