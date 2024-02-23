#include<bits/stdc++.h>
using namespace std;
struct one
{
    long long a; 
}q[15];

void solve()
{
    int n,i,flag=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>q[i].a;
    }
    for(i=1;i<n;i++)
    {
        if(q[i].a!=0&&q[i+1].a!=0)
        {
            if(q[i].a!=q[i+1].a)
            flag=1;
        }
    }
    if(flag==0)
    cout<<"SQUARE\n";
    else
    cout<<"TRIANGLE\n";
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