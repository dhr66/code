#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    char a[2];
    cin>>n;
    if(n<=28)
    {
        a[0]='a';
        a[1]='a';
        a[2]='a'+n-3;
    }
   
    else if(n<=53)
    {
        // a+='a'+'a'+n-28+'z';
        a[0]='a';
        a[1]='a'+n-28;
        a[2]='z';
    }
    else
    {
        a[2]='z';
        a[1]='z';
        a[0]='a'+n-53;
    }
    // a+='a'+n-53+'z'+'z';

    cout<<a<<endl;
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