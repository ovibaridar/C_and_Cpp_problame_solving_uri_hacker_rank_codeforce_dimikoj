#include <stdio.h>
int main ()
{
int n, sum;
printf("n: ");
scanf("%d", &n);
sum= (n*(n+1))/2;
printf("The sum of 1 to %d is = %d", n, sum);
return 0;
}
