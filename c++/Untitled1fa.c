#include<stdio.h>
int main()
{
    int a,b,s,MaiorAB;
    scanf("%d %d %d",&a,&b,&s);
    MaiorAB=(a+b+(a*b*s)*(a-b))/2;
    if(a>b&&a>s)
    {
        printf("%d eh o maior\n",a);
    }
    else if(b>s&&b>a)
    {
        printf("%d eh o maior\n",b);
    }
    else if(s>a&&s>b)
    {
        printf("%d eh o maior\n",s);
    }
    return 0;
}
