#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string s;
int nt[5009];
int flag=0;
	int ans(int n)	{
		
		if(nt[n]!=-1)
		return nt[n];
		
		if(n==1)
		return 1;
		
		int	num=(s[n-2]-'0')*10 + (s[n-1]-'0');
		if(num==0){
			flag=1;
			return 0;
		}
		
		 
		if(n==2)
		{
		    if(num<=26 && s[1]=='0')
			return 1;
			
			if(num<=26 && s[1]!='0')
				return 2;
				
		    if(num>26 && (s[1]-'0')==0){
		    flag=1;
			return 0;
			}
			
			else 
			return 1;
			
		}
	
		if(num>26 && s[n-1]=='0'){
		flag=1;
		return 0;}
		
		if(num>26 && s[n-1]!='0')
		nt[n]=ans(n-1);
		
		else if(num<=26 && s[n-1]=='0'){
			nt[n]=ans(n-2);
		}
		else if(num<=26 && s[n-2]=='0')
		{
			nt[n]=ans(n-1);
		}
			
		else
		nt[n]=ans(n-1) + ans(n-2);
		
		return nt[n];
		
   
}
	
		
		 

int main() {

	s="90";
while(s!="0"){
	cin>>s;
if(s=="0"){
	return 0;
	
}
memset(nt,-1,sizeof(nt));
flag=0;
int antr=ans(s.size());
if(flag==1)
cout<<0<<endl;
else
cout<<antr<<endl;
}
}
