#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    char a[20000];
    gets(a);
    int count=1,i;

    sort(a,a+strlen(a),cmp);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&&a[i]<='z'&&a[i]!=a[i+1]&&a[i+1]>='a'&&a[i+1]<='z')
        {
            count++;
          
        }
    }
    
   if(strlen(a)==2)
   {
    printf("0");
   }
   else
    printf("%d",count);
   
    return 0;
}