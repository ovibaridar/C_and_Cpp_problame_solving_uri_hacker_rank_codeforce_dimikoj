#include<stdio.h>
int main()
{
    int n,p,i;
    printf("Enter the arry size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the arry element\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before deleting\n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("Enter the deleting position\n");
    scanf("%d",&p);



    for(i=n-1; i>=p; i--)
    {
        a[i+1] = a[i];

        printf("Enter the Inserting value\n");

        scanf("%d",&a[p]);

        n++;

    }

    printf("After inserting the  position\n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;

}
