#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    printf("Enter number N: ");
    scanf("%d",&n);
    if(n>=2 && n<=7)
        printf("Total Gold is: %d", pow(n,n+1));
        else
        printf("Invalid Number\n");
return 0;
}
