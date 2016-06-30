#include <iostream>
#include<cstdio>
using namespace std;

int main() {
int n,a;
while(1)
{
	scanf("%d",&n);
	if(n==0)
	return 0;
	else
	{
		a=(n*(n+1)*((2*n)+1))/6;
	}
printf("%d\n",a);
}
}
