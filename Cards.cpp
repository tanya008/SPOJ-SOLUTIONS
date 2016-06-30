#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;

	long long int m, s;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%lld",&m);
		s=2*((m*(m+1))/2) + (m*(m-1))/2;
		s=s%1000007;
		printf("%lld\n",s);
		t--;
	}
}
