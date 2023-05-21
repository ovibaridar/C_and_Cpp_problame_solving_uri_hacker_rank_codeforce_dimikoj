#include <stdio.h>
#include <math.h>
int main()
{
    int a,b[100],i,sum = 0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0; i<a; i++)
    {
        sum+=b[i];  //0+1+1+1+1+1

    }

     printf("%d",sum);
    return 0 ;
}
