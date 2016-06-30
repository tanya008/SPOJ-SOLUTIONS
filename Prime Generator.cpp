#include <bits/stdc++.h>
#include <string>
using namespace std;
int modul(int a,int b,int c);
int mulmod(int a,int b,int c);
bool Miller(long long p);
 
int main() {
int t,m,n;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&m,&n);
 
for(int i=m;i<=n;i++)
{
if(Miller(i)==true)
   printf("%d\n",i);
}
printf("\n");
 }
 }
 
int modul(int a,int b,int c ) 
{
	long long int x=1,y=a;
	while(b>0)
	{   
		if(b%2==1)
			{
				x=(x*y)%c;
			}
		y=(y*y)%c;
		b/=2;
	}
	return x%c;
}
 
int mulmod(int a,int b,int c )
{
	long long int x=0,y=a%c;
	while(b>0)
	{   
		if(b%2==1)
			{
				x=(x+y)%c;
			}
		y=(y*2)%c;
		b/=2;
	}
	return x%c;
}
 
bool Miller(long long p){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<100;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modul(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
