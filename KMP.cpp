#include <bits/stdc++.h>
using namespace std;
int table[1000001];
string s,match;
int main()
{
    cin>>s>>match;
    match="@"+match;
    int x=1;
    for(int i=2;i<match.length();i++)
    {
        if(match[x]==match[i])
        {
            table[i]=x;
            x++;
        }
        else if(match[x]!=match[i])
        {
            x=1;
        }
    }
    x=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==match[x+1])
        {
            x++;
        }
        else if(s[i]!=match[x+1])
        {
            while(s[i]!=match[x+1]&&x!=0)
            {
                x=table[x];
            }
        }
        if(x==match.length()-1) {
            cout<<"Matched!";
            return 0;
        }
    }
    return 0;
}
