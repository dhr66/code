#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,c,d;
    int flag=0;
    cin>>a>>b;
    if(a<b)
    {
        swap(a,b);//a>b
    }
    if(a%2==0)
    {
        c=a/2;
        d=2*b;
        if(c<d)
        swap(c,d);//c>d
        if(a!=c||b!=d)
        flag=1;
    }
    if(b%2==0)
    {
        c=b/2;
        d=2*a;
        if(c<d)
        swap(c,d);//c>d
        if(a!=c||b!=d)
        flag=1;
    }
    if(flag==1)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}