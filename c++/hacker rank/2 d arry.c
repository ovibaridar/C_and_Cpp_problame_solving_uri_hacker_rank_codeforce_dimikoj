#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a[100][100],i,j,d1=0,d2=0,dif;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            d1=d1+a[i][j];        1 2 3
            if(i==(n-j-1))        2 1 1
            d2=d2+a[i][j];        2 3 1
        }
    }
    dif=abs(d1-d2);
    printf("%d",dif);
    return 0;
}
