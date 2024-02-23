#include<bits/stdc++.h>
using namespace std;
//
//(a1*a2*a3)%m == (a1%m * a2%m * a3%m)%m; 

//
int n,m,i,a[200006]={0},re[200004]={0},b[200003]={0},ji=1;
void solve()
{
    string s;
    ji = 1;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i] =a[i] % m;
    }
    cin>>s;
    int l=0,r=n-1;
    for(i=0;i<n;i++)
    {
        // cout<<ji<<" ";
        if(s[i]=='L')
        {
            re[i] = a[l];
            l++; 
        }
        else
        {
            re[i] = a[r];
            r--;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        ji = ji * re[i]%m;//
        b[i] = ji;
    }
     for(i=0;i<n;i++)
     {
        cout<<b[i]<<" ";
     }
    //  cout<<"\n";
    cout<<"\n";
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}