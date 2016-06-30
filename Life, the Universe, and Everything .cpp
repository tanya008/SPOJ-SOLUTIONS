#include<stdio.h>
int main(void)
{
int a[99];
int i,j,c=0;
do
{
    scanf("%d",&i);

    if(i!=42)
        a[c]=i;
    else break;
    c++;
}while(i>=0 && i<100);

for(j=0;j<c;j++)
{
        if(a[j]>=0 && a[j]<100)
    printf("%d\n",a[j]);
else break;
}
}
