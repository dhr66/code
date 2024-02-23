#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int len = a.length(),i;
    //a=1010
    //a.length()=4
    for(i=0;i<len;i++)
    {
        if(a[i]==b[i])
        a[i]='0';//string类型加引号‘’；是'0'不是0；
        else
        a[i]='1';//string类型加引号‘’
    }
    cout<<a;
    return 0;
}