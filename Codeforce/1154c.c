#include<stdio.h>
int main(){
int sum=0,b,count=0;
while(1)
{
    scanf("%d",&b);
    if(b<=0) break;
    else{
    sum+=b;
    count++;
    }

}
    float  f =(float)sum/(float)count;
    printf("%.2f\n",f);
return 0;
}
