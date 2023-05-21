#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please Enter a = ");
    scanf("%d",&a);
    printf("\nPlease Enter b = ");
    scanf("%d",&b);
    printf("\nPlease Enter c = ");
    scanf("%d",&c);
    if(a>b && a>c){
        if(b>c)
            printf("min = %d max = %d medium = %d\n",c,a,b);
        else
           printf("min = %d max = %d medium = %d\n",b,a,c);
    }
    else if(b>a && b>c){
        if(a>c)
            printf("min = %d max = %d medium = %d",c,b,a);
            else
                printf("min = %d max = %d medium = %d",a,b,c);

    }
    else{
        if(a>b)
            printf("min = %d max = %d medium = %d",b,c,a);
            else
                printf("min = %d max = %d medium = %d",a,c,b);
    }
    return 0;
}
