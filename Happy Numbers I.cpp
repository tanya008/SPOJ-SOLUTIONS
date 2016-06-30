#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	long long int n,s,d;
	int c=0;
	scanf("%lld",&n);
	while(1){
		s=0;
		while(n>0)
		{
			d=n%10;
			s=s+(d*d);
			n=n/10;
		}
		n=s;
		c++;
		if(s==1)
		{
			printf("%d",c);
			break;
		}
		else if(s>1 && s<=9)
		{
			printf("-1");
			break;
}
}
}
