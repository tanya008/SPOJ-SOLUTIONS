#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long ans(int n);
long long arr[10008];
		long long nt[10008];
		
		 

int main() {
	int t,c=0;
	scanf("%d",&t);
	while(t--)
	{
		int n;
	
		scanf("%d",&n);
		 
		 for(int i=1;i<=n;i++)
		 {
		 	scanf("%lld",&nt[i]);
		 	arr[i]=-1;
		 
		 }
		 c++;
		cout<<"Case "<<c<<": "<<ans(n)<<"\n";
	}
}
	
	long long ans(int n)
	{
	
		 if(arr[n]!=-1)
		 return arr[n];
		 
		 if(n==1)
		 return nt[1];
		 
		 if(n==2)
		 return max(nt[1],nt[2]);
		 
	arr[n]= max(ans(n-1),ans(n-2)+nt[n]); 
	 return arr[n];
	 
      
}
