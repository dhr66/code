#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,i,l=1,r=1,ans;
    cin>>n;
    vector<long long>a(n);
    int flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0&&flag==0)
        {
            if(a[i-1]==a[i])
            l++;
            else
            flag=1;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==a[i-1])
        r++;
        else
        break;
    }
    if(a[0]==a[n-1]&&n>1&&l+r<n)
    ans=n-l-r;
    else
    ans = n - max(l,r);
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