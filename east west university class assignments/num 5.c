#include <stdio.h>

int main() {
int i,j,n;

float sum=0,fact;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=i;
fact=1;
while(j>0)
{
fact=fact*j;
j--;
}
sum = sum+(1/fact);

}
printf("Sum=%f",sum);
return 0;
}
