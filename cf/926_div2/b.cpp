#include<bits/stdc++.h>
using namespace std;


long long n,k,ans;
void solve()
{
    
    cin>>n>>k;
    if(k==4*n-2)
    ans = 2*n;
    else
    {
        if(k%2==0)
        ans = k/2;
        else
        ans = (k+1)/2;
    }
    cout<<ans<<endl;
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