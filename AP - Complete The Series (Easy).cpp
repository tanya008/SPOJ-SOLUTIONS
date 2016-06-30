#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t,i;
	long long int term3,lastterm3,sum,n,a,d;
	scanf("%d",&t);
	while(t--)
	{   a=0,d=0;
		scanf("%lld",&term3);
		scanf("%lld",&lastterm3);
		scanf("%lld",&sum);
		n=(2*sum)/(term3 + lastterm3);
		printf("%lld\n",n);
		d=(lastterm3-term3)/(n-5);
		a=term3-(2*d);
		for(i=0;i<n;i++)
		{
			printf("%lld\t",a+(i*d));
		}
		
	}

}
		
