#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,q,l,r,i;
    cin>>n;
    vector<int>a(n+1);
    int dp[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=a[i-1])
        {
            dp[i]=i-1;
        }
        else
        dp[i]=dp[i-1];

    }
       
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        if(dp[r] < l)
        {
            cout<<-1<<" "<<-1<<"\n";
        }
        else
        {
            cout<<dp[r]<<" "<<dp[r]+1<<"\n";
        }
        
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}