#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int g,b;

	while(1)
	{
		cin>>g>>b;
		
		if(g==-1 && b==-1)
		{
			return 0;
		}



		if(g==0 && b!=0)
		
		{
			cout<<b<<endl;
		}


		else if(b==0 && g!=0)
		{
			cout<<g<<endl;
		}
			

		else if(g==b && g==1)
		{
			cout<<1<<endl;
		}

		
		else if(g==b && g==0)
		{
			cout<<0<<endl;
		}

		else
		{
			if(b>g)
			{
				int t;//swap
				t=b;
				b=g;
				g=t;
			}

				if(g%(b+1)==0)
					cout<<g/(b+1)<<endl;

				else
					cout<<(g/(b+1))+1<<endl;

		}
	}
}
