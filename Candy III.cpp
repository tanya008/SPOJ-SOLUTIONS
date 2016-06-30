#include <iostream>
#include<cstdio>
using namespace std;

int main() {
int t;
long long int m,n, p,s;
scanf("%d",&t);
while(t--)
{
   
s=0;
scanf("%lld",&n);
m=n;
while(n--)
{
scanf("%lld",&p);
s=s+p;
s%=m;
}
if(s%m==0)
printf("YES\n");
else
printf("NO\n");
}
}
