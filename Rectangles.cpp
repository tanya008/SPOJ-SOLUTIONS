#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int n,p,s=0,s2=0,x;
	scanf("%d",&n);
	for(x=2;x<=n;x++)
	{	p=0;
		s=x*x;
	while((s<=n))
	{
		s=s+x;
		p++;
	}
	s2=s2+p;
	}
	printf("%d\n",n+s2);
}
