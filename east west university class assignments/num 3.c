#include<stdio.h>
int main(){
    int sum=0;
    char a;
    printf("Terminated The Path Pressing 'X' : ");
    scanf("%d",&sum);
    while ((a = getchar()) != 'X')
    {
        switch (a)
        {
        case 'L':
            sum=sum+10;
            break;
        case 'R':
            sum=sum-8;
            break;
        case 'U':
            sum=sum-3;
            break;
        case 'D':
            sum=sum+5;
            break;
        }
    }
    printf("The Output :%d$",sum);
    return 0;
}s
