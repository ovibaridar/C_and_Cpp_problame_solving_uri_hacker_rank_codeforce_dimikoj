#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+5)
    {
        for(j=1;j<=i;j=j+5)
        {
        printf("*");
        }
      printf("\n");
    }
    return 0;
}











