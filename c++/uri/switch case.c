#include<stdio.h>
#include<math.h>
int main()
{
    char a;
    int x,y,b;
    printf("what do u want (+,-,*,/,root=r)");
    scanf("%c",&a);
    switch(a)
    {
    case '+':
        scanf("%d%d",&x,&y);
        printf("%d",x+y);
        break ;
    case '-':
        scanf("%d%d",&x,&y);
        printf("%d",x-y);
        break ;
    case '*':
        scanf("%d%d",&x,&y);
        printf("%d",x*y);
        break ;
    case '/':
        scanf("%d%d",&x,&y);
        printf("%d",x/y);
        break ;
    default :
        printf("nothing\n");
        break ;

    }
    return 0;
}
