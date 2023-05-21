#include <stdio.h>
int main ()
{
int n,i,a[1000],c,f;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d ",i);
}
printf("=");

printf("\nenter what you need \n1)over all + \n2)odd numbers sum \n");
scanf("%d",&c);


if(c==1)
{
  printf("%d\n",(n(n+1)));
}
if(c==2)
{
   for(i=1;i<=n;i++)
{
  printf("%d ",i);
 i=i+1;

}

}
return 0;
}
