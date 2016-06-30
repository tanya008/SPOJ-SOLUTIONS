#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<int ,long long> mp;    
long long ans(long long n);
int main()
{
	long long n;
	
	while(scanf("%lld",&n)==1)
	{
		cout<<ans(n)<<endl;
	}
		
	
	
}

long long ans(long long n)
{
  if(mp[n]!=0)
  return mp[n];
  	if(n==0){
  		return 0;
  	}
    if(n==1)
    return 1;
    
    if(n==2)
    return 2;
    
    if(n==3)
    return 3;
    
	mp[n]=max(n,ans(n/2)+ans(n/3)+ans(n/4));
	return mp[n];
}
