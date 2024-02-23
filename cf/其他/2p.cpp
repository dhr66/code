#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[110];
    scanf("%d",&n);
    int max=-1;
    int min=1100;
    int ma,mi,ans;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            ma=i;
            max=a[i];
        }
        if(a[i]<=min)
        {
            mi=i;
            min=a[i];
        }

    }
    if(ma<mi)
    {
        ans=ma+n-1-mi;
    }
    else
    {
        ans=ma+n-mi-2;
    }
    printf("%d",ans);

    return 0;
}