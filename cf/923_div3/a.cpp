#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c1,c2,len;
    string s;
    cin>>n;
    while(n--)
    {
        int flag=0;
        cin>>len;
        cin>>s;
        for(i=0;i<len;i++)
        {
            if(s[i]=='B'&&flag==0)
            {
                c1=i;
                flag=1;
            }
            if(s[i]=='B')
            c2=i;
        }
        cout<<c2-c1+1<<endl;
    }
    return 0;
}