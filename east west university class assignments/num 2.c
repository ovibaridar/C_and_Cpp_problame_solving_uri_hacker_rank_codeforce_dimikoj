#include<stdio.h>
#include<conio.h>
int main()
{
printf("Enter size of Daimond: ");
int n, i, j, m = 1, k;
printf("Enter the number of rows and show the pattern: ");
scanf("%d",&n);
printf("\n");
for(i = 0; i <= n; i++)
{
for(j = n; j > i; j--)
{
printf(" ");
}
printf("*");
if (i > 0)
{
for(k = 1; k <= m; k++)
{
printf(" ");
}
m += 2;
printf("*");
}
printf("\n");
}
m -= 4;
for(i = 0; i <= n-1; i++)
{
for(j = 0; j <= i; j++)
{
printf(" ");
}
printf("*");
for(k = 1; k <= m; k++)
{
printf(" ");
}
m -= 2;
if(i != n-1)
{
printf ("*");
}
printf("\n");
}
return 0;
}
