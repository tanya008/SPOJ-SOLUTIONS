#include <iostream>
#include<cstdio>

using namespace std;

int main() {
	int l;

	float ar,r;
	while(1)
	{
		scanf("%d",&l);
		if(l==0)
		return 0;
		else
		{ 
			r=l/3.14159265358979323846;
			ar=(3.14159265358979323846*r*r)/2;
			printf("%.2f\n",ar);
			ar=0.00;
			
		}
	}
	
}
