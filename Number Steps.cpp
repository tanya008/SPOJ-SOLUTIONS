#include <iostream>
#include<cstdio>
using namespace a;

int main() {
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		
		if((x>y)&&((x-y)==2)) 
		{
			if(x%2==0)
		printf("%d\n", x+y);
		else
		printf("%d\n",(x+y-1));
		}
		else if(x==y)
		{
			if(x%2==0)
		printf("%d\n", x+y);
		else
		printf("%d\n",x+y-1);
		}
		else
		printf("No Number\n");
	}
}
