#include<stdio.h>
int main()
{
    int x,i,sum=0;
    scanf("%d", &x); //556
    for(i=1; i<x; i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }

    }
    if(sum==x)
        printf("This num is p\n");
    else
        printf("This num is not p\n");
    return 0 ;
}

/*6
5

3
2
1

10

5
2
1*/

