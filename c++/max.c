#include<stdio.h>
int main()
{
    int n,i,max1,max2;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
     max1=a[0];
     max2=a[1];
    for(i=0;i<n;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(max1>a[i] && max2 < a[i])
        {
            max2=a[i];
        }
    }
    printf("%d\n", max1);
    printf("%d", max2);
    return 0;
}
