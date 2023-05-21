#include<stdio.h>
#include<math.h>
int main()
{
    long long n,sum;
    scanf("%lld",&n);
    if(1<=n && n<=7)
    {
      sum=pow(n,n+1);
      printf("Total Gold coin' s: %lld\n",sum) ;
    }
    else
           printf("9 Invalid Grandchild's number\n");

}
