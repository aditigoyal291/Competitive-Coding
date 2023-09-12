#include<iostream>
#include<stack>
using namespace std;

bool redundantBrackets(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            s.push(ch);
        }
        else{
           if(ch==')')
           {
                bool isRedundant=true;
            while(s.top()!='(')
            {
                char top=s.top();
                if(top=='+'||top=='-'||top=='/'||top=='*')
                {
                    isRedundant=false;
                }
                s.pop();

            }
            if(isRedundant) return true;
            
           } 
        }
    }
    return false;

}
int main()
{
   
    string str="(a+b)";
    bool ans=redundantBrackets(str);
    cout<<ans;
    return 0;
}

//time complexity=O(n)