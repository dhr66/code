#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,i,a[130];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        a[i] = a[i]*(a[i-1]/a[i]+1);
    }
    cout<<a[n-1]<<endl;
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