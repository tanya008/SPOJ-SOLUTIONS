 #include <iostream>
  #include<cstdio>
   #include<string.h>
    #include<cstring>
using namespace std;

int main() {
   int col,i,j,p,q,k,rw;
   string s;

   while(1)
   {
   scanf("%d",&col);
   if(col==0)
   break;
   cin>>s;
   rw=s.length()/col;
      char a[rw][col]; 
   k=0;
   for(i=0;i<rw;i++)
   {
   	if(i%2==0)
   	{
   	for(j=0;j<col;j++)
   	{
   		a[i][j]=s[k];
   		k++;
   	}
   	}
   	else
   	for(j=col-1;j>=0;j--)
   	{
   		a[i][j]=s[k];
   		k++;
   	}
   }
   for(q=0;q<col;q++)
   {
   	for(p=0;p<rw;p++)
   	{
   		printf("%c",a[p][q]);
   	}
   	
   	}
   	
   	printf("\n");	
   	}
   }
