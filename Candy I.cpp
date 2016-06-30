#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
				int t;
				
				while(1)
				{
					scanf("%d",&t);
				
					
					if(t!=-1){
								   int arr[t],s=0,s1=0,avg=0;
							
							    	for(int i=0;i<t;i++)
								{
									scanf("%d",&arr[i]);
									s=s+arr[i];
								}
									
								if(s%t!=0)
									{
										cout<<-1<<endl;
									
									}
						else
					    	{
								avg=s/t;
								
								for(int i=0;i<t;i++)
								{
									if((avg-arr[i])>0)
									s1=s1+(avg-arr[i]);
								}
								
								printf("%d\n",s1);
								
						  	}
						        	
						    }
				else break;
				    
				
				}
					
			}
