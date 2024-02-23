#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,i,sum=0,mv=0;
    cin>>n;
    int flag=0;
    vector<long long>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum = sum / n;
    for(i=0;i<n;i++)
    {
        a[i] += mv;
        if(a[i]>=sum)
        {
            mv = a[i] - sum;
        }  
        else if(a[i]<sum)
        {
            cout<<"NO\n";
            flag=1;
            break;
        }
       
    }
    if(flag==0)
    cout<<"YES\n";
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