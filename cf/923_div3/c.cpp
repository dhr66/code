#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k,i;
    int cnt[10]={0};
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(i=0;i<n;i++) 
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=1;i<=k;i++)
    {
        int ca = binary_search(a.begin(),a.end(),i);
        int cb = binary_search(b.begin(),b.end(),i);
        cnt[ca*2+cb]++;
    }
    if(cnt[0]==0 && cnt[2]+cnt[3]>=(k/2) && cnt[1]+cnt[3]>=(k/2))
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