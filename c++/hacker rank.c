#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
     printf(" ");
     printf("%d",a[i]);
    }
}
