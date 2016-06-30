#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {

			int n,p,q=0;
			scanf("%d",&n);

			for(int i=0;i<n;i++)
			{
				scanf("%d",&p);
				q=q^p;
			}
			
			printf("%d\n",q);
			}
