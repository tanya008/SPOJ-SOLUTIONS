#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int a1,a2,a3;
	while(1){
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	if(a1==0 && a2==0)
	{
		if(a3==0)
		return 0;
	}
	if((a2-a1)==(a3-a2))
	 printf("AP\t%d\n",a3+(a3-a2));
	else if((a2/a1)==(a3/a2))
	printf("GP\t%d\n",a3*(a2/a1));
	
	}
}
