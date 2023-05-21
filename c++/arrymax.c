#include <stdio.h>
int main() {
  int a,max1,i,max2;

  scanf("%d",&a);

  int n[a];
  for( i =0 ;i<a;i++)
  {
      scanf("%d",&n[i]);
  }

  max1=n[0]; //2 3 5 6 4
  max2=n[1];

  for(i=1;i<a;i++)
  {
      if(max1<n[i])
      {
         max1=max2;
         max1=n[i];
      }
      else if (max1>n[i] && max2<n[i])
      {
          max2=n[i];
      }
  }
   printf("%d\n%d",max1,max2);
    return 0;
}
