#include<stdio.h>
int main()
{
    int c[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&c[i]);
    }
     for(i=5-1;i>=0;i--)
    {
        printf("%d\n",c[i]);
    }

    return 0;
}

//0 1 2 3  4
