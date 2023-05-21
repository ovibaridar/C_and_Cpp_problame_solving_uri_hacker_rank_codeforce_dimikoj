#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a!=b)
    {
        if(a>b)
        {
            printf("%d is getter than ",a+10);
        }
        else
        {
            printf("%d is getter than %d",b,a);

        }

    }
    else
    {
        printf("All value is equal");

    }

    return 0;
}

