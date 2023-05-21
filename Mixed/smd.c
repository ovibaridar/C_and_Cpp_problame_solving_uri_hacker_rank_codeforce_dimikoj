#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter 2 v:\n");
    scanf("%f%f",&a,&b);
    printf("The sum is %.0f\n",(a+b));
    printf("The sub is %.0f\n",(a-b));
    printf("The mul is %.3f\n",(a*b));
    printf("The div is %.3f\n",(a/b));
    return 0;
}

