#include <bits/stdc++.h>
using namespace std;
string s,match;
int d=256,c=2147483647;
bool matchh(int x)
{
    for(int i=0;i<match.length();i++)
    {
        if(s[i+x]!=match[i]) return false;
    }
    return true;
}
void check()
{
    int n=match.length(),m=s.length(),h=1,p=0,t=0;
    for(int i=0;i<n-1;i++)
    {
        h=(h*d)%c;
    }
    for(int i=0;i<n;i++)
    {
        p=(p*d+match[i])%c;
        t=(t*d+s[i])%c;
    }
    cout<<p<<" "<<t<<" "<<h<<"\n";
    for(int i=0;i<=m-n;i++)
    {
        if(p==t)
        {
            if(matchh(i)) {cout<<"Matched!"; return;};
        }
        else if(i<m-n)
        {
            t=(d*(t-h*s[i])+s[i+n])%c;
            if(t<0) t=t+c;
        }
    }
    cout<<"Not Matched";
}
int main()
{
    cin>>s>>match;
    check();
    return 0;
}
