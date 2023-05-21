#include<stdio.h>
int main()
{
    int i,e;
    printf("Input\n");
    scanf("%d",&e); //e =20

    for(i=e;i>=1;i=i-7){ // i=20-7=13-7=6-7=-1
    if(i==1) printf("sun\n");
    else if (i==2) printf("mon\n");
    else if (i==3) printf("tue\n");
    else if (i==4) printf("wed\n");
    else if (i==5) printf("thu\n");
    else if (i==6) printf("fri\n");
    else if (i==7) printf("sat\n");
    }
    return 0;
}
//6
