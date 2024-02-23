#include<bits/stdc++.h>
using namespace std;
long long f(long long i)
{
    long long ret = 0;
    while(i!=0)
    {
        ret += i%10;
        i/=10;
    }
    return ret;
}
void solve()
{
    long long n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum += f(i);
    }
    cout<<sum<<"\n";
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