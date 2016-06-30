#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	long long int n, ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%lld",&n);
	if(n%2==0)
	{
		ans=4+((n-1)/2)*5;
		ans=ans*100+42;
		printf("%lld\n",ans);
 }
 else
 {
 			ans=1+((n)/2)*5;
 			ans=ans*100+92;
		printf("%lld\n",ans);
 }
}
}                                           

