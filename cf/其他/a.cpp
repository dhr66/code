#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    char a[11]="codeforces";
    char b[11];
    int count = 0;
    for(k=0;k<n;k++)
    {
        scanf("%c",&a[10]);
       for(int j=0;j<10;j++)
    {
        scanf("%c",&b[j]);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=b[i])
        count++;
    }
    printf("%d\n",count); 
    count=0; 
    }
 
    return 0;
}