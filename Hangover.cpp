#include <iostream>
#include<cstdio>
using namespace std;

int main() {
float t,s;
int n,c;
while(1)
{
	scanf("%f",&t);
	if(t==0.00)
	return 0;
	else
	{
		s=0.50;
		n=3;
		c=1;
		while(s<t)
		{
			s=s+1/(float)n;
			n++;
			c++;
		}
		printf("%d card(s)\n",c);
		
	}
}

}
