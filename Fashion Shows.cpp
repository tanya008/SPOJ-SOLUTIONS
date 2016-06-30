#include <iostream>
#include <cstdio>
using namespace std;

int main() {
int t,z,z1;
scanf("%d",&t);
while(t--)
{
int n,h=0;
scanf("%d",&n);
if(n>=1 && n<=1000)
{
int male[n];
int female[n];

for(int m=0;m<n;m++)
{
male[m]=0;
female[m]=0;
}

for(int i=0;i<n;i++)
{
scanf("%d",&male[i]);
}
for(int j=0;j<n;j++)
{
scanf("%d",&female[j]);
}

     for (int y = 1; y < n; y++)
     {
         int index = male[y];
         int index1 = female[y];
          for ( z = y; z > 0 && male[z-1] > index; z--)
               male[z] = male[z-1];
               
                 for (z1 = y; z1 > 0 && female[z1-1] > index1; z1--)
               female[z1] = female[z1-1];

          male[z] = index;
          female[z1] = index1;
          
     }

for(int k=0;k<n;k++)
{
if((male[k]>=0 && male[k]<=10)&&(female[k]>=0 && female[k]<=10))
h+=male[k]*female[k];
}
printf("%d\n",h);
}
}
}
