#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    int b=0;
    int a[100001]={0};
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    	for(int i=0;i<d;i++){
		a[i]=i+1;
		
	if(a[i]%k==0){
		b=b+1;
		}
	if(a[i]%l==0 && a[i]%k!=0 ){
		b=b+1;
		}
	if(a[i]%m==0 && a[i]%k!=0 && a[i]%l!=0){
		b=b+1;
		}
	if(a[i]%n==0 && a[i]%k!=0 && a[i]%l!=0 && a[i]%m!=0 ){
		b=b+1;	
	}
    
        }
    cout<<b;
    return 0;
}