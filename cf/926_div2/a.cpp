#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,i;
    long long sum=0;
    cin>>n;
    long long a[200];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        sum += a[i] - a[i-1];
    }
    cout<<sum<<endl;
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