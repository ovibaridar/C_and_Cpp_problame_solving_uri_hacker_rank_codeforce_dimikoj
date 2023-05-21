#include<stdio.h>
int main()
{
    int x;

    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four");
        break;
         case 5:
        printf("Five");
        break;
    default :
        printf("You enter the Wrong entry ");

    }

    return 0;
}
