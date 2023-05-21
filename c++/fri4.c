#include<stdio.h>
int main()
{
    char c,ch[100],sen[100];
    scanf("%c\n%s\n%[^\n]s",&c,&ch,&sen);
    printf("%c %s %s.",c,ch,sen);
    return 0;
}
