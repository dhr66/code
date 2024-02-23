#include<bits/stdc++.h>
using namespace std;


long long k,x,a;
void solve()
{   
    cin>>k>>x>>a;
    long long lose = 0,i;
    for(i=1;i<=x+1;i++)
    {
        if(lose > a)
        break;
        long long y = lose / (k-1) + 1;
        lose += y;
    }
    if(lose <= a)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
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