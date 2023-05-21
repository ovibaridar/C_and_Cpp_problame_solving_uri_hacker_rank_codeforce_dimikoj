#include<stdio.h>
#include <string.h>
void searchCharacter(char *str, char sd)
{
    int temp = 0;
    for(int i = 0; i <=100; i++)
    {
        if(str[i] == sd )
        {

            printf("\nCharacter %c is found at position %d\n", sd, i+1);
            temp++;
        }
    }
        if(temp == 0)
        {
            printf("Character %c is not found\n", sd);
        }
}


int main()
{
    char st[100];
    int n;


    char t;


    printf("Enter a String : ");




    for(int i = 0;i<=100 ; i++)
    {
        scanf("%c", &st[i]);
        if(st[i]=='\n')
            break;
    }

    printf("Enter a char to search in a String : ");

    fflush(stdin);

    scanf("%c", &t);

    searchCharacter(&st, t);

}
