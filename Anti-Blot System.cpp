#include <iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int toint(string s){
	
	int n=0,x=0;
	for(int i=0;i<s.size();i++)
	{
		x=s[i]-'0';
		n=n*10+x;
		
	}
	
	return n;
	}
int main() {

int t;
scanf("%d",&t);

while(t--)
{   int ans=0,c=0;
	string s1,s2,s3,s4,s5;
	cin>>s1>>s2>>s3>>s4>>s5;

if (s1.find("machula")!=std::string::npos)
       c=1;
     else if(s3.find("machula")!=std::string::npos)
     c=2;
      
      if(c==1){
      ans=toint(s5)-toint(s3);
   cout<<ans<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
      }   
      
      else if(c==2){
      	 ans=toint(s5)-toint(s1);
      	 cout<<s1<<" "<<s2<<" "<<ans<<" "<<s4<<" "<<s5<<endl;
      }
      
      if(s5.find("machula")!=std::string::npos)
      {
      	ans=toint(s1)+toint(s3);
      	    	 cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<ans<<endl;
      }
      
      

}}	
