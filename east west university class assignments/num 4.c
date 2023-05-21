#include<stdio.h>
int main()
{
int num, rem, sum = 0, i;
printf("N = ");
scanf("%d", &num);
printf("\n");
for(i = 1; i < num; i++)
                     {
                              rem = num % i;
                             if (rem == 0)
                                        {
                                               sum = sum + i;
                                         }
                        }
if (sum == num)
                      printf("%d is a Multiply-perfect number",num);
           else
                      printf("\n%d is not  a Multiply-perfect number",num);
return 0;
}
