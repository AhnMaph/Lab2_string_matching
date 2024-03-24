#include <bits/stdc++.h>
using namespace std;
int table[1000001],d[256];
string s,match;
int n,m;
void xuly()
{
    for(int i=0;i<256;i++)
    {
        d[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        d[s[i]]=i;
    }
}
void tim()
{
    n=match.length(),m=s.length();
    xuly();
    int i=0;
    while(i <= (m-n))
    {
        int j=n-1;
        while(j>=0&&match[j]==s[i+j]) j--;
            if(j<0)
            {
                cout<<"Matched!";
                return;
            }
            else
            {
                i=i+max(1,j -d[s[i+j]]);
            }
    }
    }
}
int main()
{
    cin>>s>>match;
    tim();
    return 0;
}
