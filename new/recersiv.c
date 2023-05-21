#include<stdio.h>
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return n*f(n-1);
}
int main()
{
    int a;
    scanf("%d",&a);
    int b = f(a);
    printf("The factorial of %d! = %d\n",a,b);
    return 0;
}
