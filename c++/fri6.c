
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>b && a>e && a>c&& a>d)
        printf("%d is the greatest\n",a);
    if(b>a && b>>c && b>d && b>>e)
        printf("%d is the greatest\n",b);
    if(c>a && c>b && c>d && c>e)
        printf("%d is the greatest\n",c);
    if(d>a && d>b && d>c && d>e)
        printf("%d is the greatest\n",a);
    if(e>a && e>b && e>c && e>d)
        printf("%d is the greatest\n",e);

    return 0;
}

