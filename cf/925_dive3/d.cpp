#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,m,i,sum=0,num,ws=0;
    // vector<long long>a(n);
    cin>>n>>m;
    for(i=0;i<n;i++,ws=0)
    {
        cin>>num;
        int f=0;
        while(num)
        {   
            int x = num%10;
            num/=10;
            if(x==0&&f==0)
            {
                continue;
            }
            else
            {
                ws++;
                f=1;
            }
        }
        sum+=ws;
        
    }
    sum--;
    if(sum>=m)
    cout<<"Sasha\n";
    else
    cout<<"Anna\n";
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