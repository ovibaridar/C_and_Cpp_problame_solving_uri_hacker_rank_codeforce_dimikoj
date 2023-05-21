#include<stdio.h>
int main()
{
    int n,i,m,a[100];
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
    printf("\nmaximum of array is : %d",m);
    return 0;
}
