#include<stdio.h>
int rev(int x);
int main()
{
    int i,j,p,q,n,s=0,s1=0;
    scanf("%d\n",&n);
    int a[10000];
    i=0;
      while(i<n){
        scanf("%d %d\n",&p,&q);
        s=rev(p)+rev(q);
        s1=rev(s);
        a[i]=s1;
        i++;
      }

    for(j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
}
int rev(int x)
{
    int no=0;
    while(x!=0)
    {
        no=no*10;
        no=no+(x%10);
        x=x/10;
    }
    return no;
}
