#include<stdio.h>
int main()
{
    char  c[100];
    int i;

    for( i = 0; i<100; i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='X')
            break;
    }

    for(int i = 0; i<100; i++)
    {
        printf("%c",c[i]);
    }
    return 0;
}
