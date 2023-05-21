#include<stdio.h>
int main()
{
    int a [100],i,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=1;i<=n;i++)
    {
        if(m<a[i])
            m=a[i];
    }
    printf("the max num is : %d",m);
    return 0;
}
