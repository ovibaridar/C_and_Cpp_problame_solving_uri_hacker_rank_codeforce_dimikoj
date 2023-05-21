#include<stdio.h>
int main()
{
    int i,j=0,b=0;
    for(i=1; i<=15; i++)
    {
        if(i%2==0)
        {
            j++;  //0+1+1
        }
        else
        {
            b++;// 0+1+1
        }

    }
    printf("%d\n%d",j,b);
    return 0;
}

//1 2 3 4 5 6 7 8 9 10 j,b
