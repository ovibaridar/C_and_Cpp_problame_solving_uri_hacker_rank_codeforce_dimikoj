#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d%d",&a,&b,&c);
    if(a>b || a>c){
        printf("%d\n",a);
    }
    else if(b>a || b>c)
    {
       printf("%d\n",b);
    }
    else
    {
       printf("%d\n",c);
    }
    return 0;
}
//0 1 2
//else if
//

