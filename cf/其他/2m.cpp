#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p,n,j,q=0;
    int a[10001];
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        scanf("%d",&p);
        for(j=0;j<p;j++)
        {
            scanf("%d",&a[j+q]);
        }
        q=q+p;
    }
    sort(a,a+q);
    int k=1;
    for(i=0;i<q;i++)
    {
        if(a[i]==k)
        {
            k++;
        }
    }
    k--;
     if(k==n)
     {
        printf("I become the guy.");
     }
     else
     printf("Oh, my keyboard!");
    return 0;
}