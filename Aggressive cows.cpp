#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int n,c;
int f(int x);
int bin_srch();
int main() {
				int t;
				scanf("%d",&t);
				
				while(t--)
				{
					scanf("%d %d",&n,&c);
					
					for(int i=0;i<n;i++)
					scanf("%d",&arr[i]);
					
					sort(arr,arr+n);
					
					printf("%d\n",bin_srch());
					
				}
}

int f(int x){

			  int lst=arr[0];
			  int cows=1;
			  for(int i=1;i<n;i++)
			  {
			  	if(arr[i]-lst>=x){
			  	cows++;
			  
			  	if(cows==c)
			  	return 1;
			  	
			  	lst=arr[i];
			  }
				
			}
			return 0;
			
			}
			
			
int bin_srch(){

int lo=0,hi=arr[n-1];

while(lo<hi)
{
 	int mid=(lo+hi)/2;
	if(f(mid)==1)
	lo=mid+1;
	
	else
	hi=mid;
	
}

return lo-1;
}
	
