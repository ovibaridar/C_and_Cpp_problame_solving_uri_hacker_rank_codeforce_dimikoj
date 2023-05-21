#include<stdio.h>
#include<math.h>
int main()
{
    int  a,b,x;
    printf("what you want (1=+,2=-)\n");
    scanf("%d",&x);

    if(x==1)
    {
        printf("please enter 2 num\n");
        scanf("%d%d",&a,&b);
        printf("%d",a+b);
    }
    else if(x==2)
    {
        printf("please enter 2 num\n");
        scanf("%d%d",&a,&b);
        printf("%d",a-b);
    }
    else
        printf("sorry you enter the wrong num\n");
    return 0;
}

