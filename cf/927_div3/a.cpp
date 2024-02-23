#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,i,ans=0;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i+1]=='@')
        ans++;
        if(a[i+1]=='*'&&a[i+2]=='*')
        break;
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