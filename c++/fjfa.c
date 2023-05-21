#include<stdio.h>
int main()
{
    int a[10],i,n,m,o;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=1;i<=n;i++)
  {
      if(a[i]>a[n])
      {
          a[i]=m;
      }
     else
      {
          a[n]=o;
      }

  }
printf("%d",m);
printf("%d",o);
    return 0;
}
