#include<stdio.h>
int main() {
    char o;
    int n1, n2;
    scanf("%d",&n1);
    scanf("%c",&o);
    scanf("%d",&n2);

    switch(o)
    {
        case '+':
            printf("%d",n1+n2);
            break;

        case '-':
            printf("%d", n1-n2);
            break;

        case '*':
            printf("%d",n1*n2);
            break;

        case '/':
            printf("%d",n1/n2);
            break;

        case '%':
            printf("%d",n1%n2);
            break;

        default:
            printf("\n");
    }

    return 0;
}

