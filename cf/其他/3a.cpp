#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[40],b[49],i,j;
    int num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            num++;
        }
    }
    printf("%d",num);
    return 0;
}