#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,a[200004]={0};
    char j;
    map<char,int>dp;
    
    cin>>t;
    while(t--)
    {
        char s[200003]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j='a';j<='z';j++)
        {
            dp[j]=0;
        }
        for(i=0;i<n;i++)
        {
            for(j='a';j<='z';j++)
            {
                if(dp[j]==a[i])
                {
                    s[i]=j;
                    dp[j]++;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}