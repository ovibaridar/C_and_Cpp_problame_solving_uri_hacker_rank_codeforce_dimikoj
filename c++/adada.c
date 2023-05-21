#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int f_max=a[0],s_max=a[1];
    for(i=0;i<n;i++)
    {
        if(f_max<a[i])
        {
            s_max=f_max;
            f_max=a[i];
        }
        else if(f_max>a[i] && s_max < a[i])
        {
            s_max=a[i];
        }
    }
    printf("First maximum = %d\n", f_max);
    printf("Second maximum = %d", s_max);
    return 0;
}
